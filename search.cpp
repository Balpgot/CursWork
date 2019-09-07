#include "search.h"
#include "ui_search.h"

searchDialog::searchDialog(QWidget *parent, Vector<Room> &DB) :
    QDialog(parent),
    ui(new Ui::searchDialog),
    DB(DB)
{
    ui->setupUi(this);
    ui->table->setRowCount(0);
    ui->table->setColumnCount(7);
    ui->table->setHorizontalHeaderLabels(QStringList() << "ID" << "Отель" << "Номер" << "Уровень" << "Вместимость" << "Цена" << "Забронирован");
    ui->table->horizontalHeader()->resizeSections(QHeaderView::ResizeToContents);
    ui->table->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(ui->table, SIGNAL(customContextMenuRequested(QPoint)), this, SLOT(contextMenu(QPoint)));
}

searchDialog::~searchDialog()
{
    delete ui;
}

void searchDialog::on_start_clicked()
{
    ui->table->setRowCount(0);
    QString whatToSearch = ui->whatToSearch->text();
    if(!whatToSearch.isEmpty()){
        int row = 0;
        bool hotel = ui->hotel->checkState();
        bool number = ui->number->checkState();
        bool level = ui->level->checkState();
        bool capacity = ui->capacity->checkState();
        bool price = ui->price->checkState();
        bool isBooked = ui->isBooked->checkState();
        for(int i = 0; i<DB.getLength(); i++){
            if((hotel && DB[i].getHotel().startsWith(whatToSearch,Qt::CaseInsensitive))||
               (number && DB[i].getNumber().startsWith(whatToSearch,Qt::CaseInsensitive))||
               (level && DB[i].getLevel().startsWith(whatToSearch,Qt::CaseInsensitive))||
               (capacity && DB[i].getCapacity().startsWith(whatToSearch,Qt::CaseInsensitive))||
               (price && DB[i].getPrice().contains(whatToSearch,Qt::CaseInsensitive))||
               (isBooked && DB[i].getIsBooked().contains(whatToSearch,Qt::CaseInsensitive)))
            {
                    ui->table->insertRow(row);
                    for(int j = 0; j<7; j++){
                         switch (j){
                            case(0): ui->table->setItem(row,j,new QTableWidgetItem(QString::number(i))); break;
                            case(1): ui->table->setItem(row,j,new QTableWidgetItem(DB[i].getHotel())); break;
                            case(2): ui->table->setItem(row,j,new QTableWidgetItem(DB[i].getNumber())); break;
                            case(3): ui->table->setItem(row,j,new QTableWidgetItem(DB[i].getLevel())); break;
                            case(4): ui->table->setItem(row,j,new QTableWidgetItem(DB[i].getCapacity())); break;
                            case(5): ui->table->setItem(row,j,new QTableWidgetItem(DB[i].getPrice())); break;
                            case(6): ui->table->setItem(row,j,new QTableWidgetItem(DB[i].getIsBooked())); break;
                         }
                         ui->table->item(row,j)->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
                     }
                     row++;
            }
        }
        ui->table->resizeColumnsToContents();
    }
}

void searchDialog::on_cancel_clicked()
{
    close();
}

void searchDialog::editRecord()
{
    if(DB.getLength()>0){
        editDialog e(nullptr, DB,ui->table->item(ui->table->currentRow(),0)->text().toInt());
        e.setModal(true);
        e.exec();
        on_start_clicked();
    }
}

void searchDialog::contextMenu(QPoint pos)
{
    QMenu * menu = new QMenu(this);
    QAction * editRecord = new QAction("Редактировать", this);
    connect(editRecord, SIGNAL(triggered()), this, SLOT(editRecord()));
    menu->addAction(editRecord);
    QAction * deleteRecord = new QAction("Удалить", this);
    connect(deleteRecord, SIGNAL(triggered()), this, SLOT(deleteRecord()));
    menu->addAction(deleteRecord);
    menu->popup(ui->table->viewport()->mapToGlobal(pos));
}

void searchDialog::deleteRecord()
{
    if(DB.getLength()>0){
       QMessageBox::StandardButton confirmation = QMessageBox::question(this,"Удаление записи","Удалить запись?",QMessageBox::Ok|QMessageBox::Cancel);
       if(confirmation == QMessageBox::Ok){
           DB.remove(ui->table->item(ui->table->currentRow(),0)->text().toInt());
           on_start_clicked();
       }
    }
}
