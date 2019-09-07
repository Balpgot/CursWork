#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->table->setRowCount(DB.getLength());
    ui->table->setColumnCount(7);
    ui->table->setHorizontalHeaderLabels(QStringList() << "ID" << "Отель" << "Номер" << "Уровень" << "Вместимость" << "Цена" << "Забронирован");
    ui->table->horizontalHeader()->resizeSections(QHeaderView::ResizeToContents);
    ui->table->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(ui->table, SIGNAL(customContextMenuRequested(QPoint)), this, SLOT(contextMenu(QPoint)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_open_triggered()
{
    QString filename = QFileDialog::getOpenFileName(nullptr,"Выберите файл", "", "*.txt");
    if(QFile::exists(filename)){
        QFile file(filename);
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        QString str;
        while(!file.atEnd()){
            str = file.readLine();
            if(DB.getSize()==DB.getLength()){
                DB.expand();
            }
            if(DB[DB.getLength()].setInfo(str)){
                DB.increaseLength();
            }
            else
                continue;
        }
        file.close();
        refresh();
        ui->mainToolBar->setEnabled(true);
        ui->menu->setEnabled(true);
        ui->menuBar->setEnabled(true);
     }
}

void MainWindow::refresh()
{
    ui->table->setRowCount(DB.getLength());
    for(int i = 0; i < DB.getLength(); i++){
        for(int j = 0; j<7; j++){
            switch (j) {
                case(0): ui->table->setItem(i,j,new QTableWidgetItem(QString::number(i))); break;
                case(1): ui->table->setItem(i,j,new QTableWidgetItem(DB[i].getHotel())); break;
                case(2): ui->table->setItem(i,j,new QTableWidgetItem(DB[i].getNumber())); break;
                case(3): ui->table->setItem(i,j,new QTableWidgetItem(DB[i].getLevel())); break;
                case(4): ui->table->setItem(i,j,new QTableWidgetItem(DB[i].getCapacity())); break;
                case(5): ui->table->setItem(i,j,new QTableWidgetItem(DB[i].getPrice())); break;
                case(6): ui->table->setItem(i,j,new QTableWidgetItem(DB[i].getIsBooked())); break;
            }
            ui->table->item(i,j)->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
        }
     }
     ui->table->resizeColumnsToContents();
}
void MainWindow::on_action_write_triggered()
{
    QString filename = QFileDialog::getSaveFileName(nullptr,"Выберите файл", "", "*.txt");
    QFile file(filename);
    if(!filename.isEmpty()){
        file.open(QIODevice::WriteOnly| QIODevice::Text);
        if(file.isOpen()){
            QTextStream writeStream(&file);
            writeStream.setCodec("UTF-8");
            for(int i = 0; i<DB.getLength(); i++){
                for(int j = 0; j<6; j++){
                    switch (j) {
                        case(0): writeStream << DB[i].getHotel() << " "; break;
                        case(1): writeStream << DB[i].getNumber() << " "; break;
                        case(2): writeStream << DB[i].getLevel() << " "; break;
                        case(3): writeStream << DB[i].getCapacity() << " "; break;
                        case(4): writeStream << DB[i].getPrice() << " "; break;
                        case(5): writeStream << DB[i].getIsBooked() << endl; break;
                    }
                }
            }
            file.close();
        }
    }
}

void MainWindow::on_action_concat_triggered()
{
    QString filename = QFileDialog::getOpenFileName(nullptr,"Выберите файл", "", "*.txt");
    if(QFile::exists(filename)){
        QFile file(filename);
        if(!filename.isEmpty()){
            file.open(QIODevice::ReadOnly | QIODevice::Text);
            int size=0;
            if(file.isReadable()){
                while(!file.atEnd()){
                    file.readLine();
                    size++;
                }
                file.reset();
                while(DB.getLength()+size>DB.getSize()){
                    DB.expand();
                }
                QString str;
                while(!file.atEnd()){
                    str = file.readLine();
                    if(DB[DB.getLength()].setInfo(str)){
                        DB.increaseLength();
                    }
                    else
                        continue;
                }
                file.close();
                refresh();
            }
        }
    }
}

void MainWindow::on_action_add_triggered()
{
    addDialog a(nullptr, DB);
    a.setModal(true);
    a.exec();
    refresh();
}

void MainWindow::editRecord()
{
    if(DB.getLength()>0){
        editDialog e(nullptr, DB,ui->table->item(ui->table->currentRow(),0)->text().toInt());
        e.setModal(true);
        e.exec();
        refresh();
    }
}

void MainWindow::contextMenu(QPoint pos)
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

void MainWindow::deleteRecord()
{
    if(DB.getLength()>0){
       QMessageBox::StandardButton confirmation = QMessageBox::question(this,"Удаление записи","Удалить запись?",QMessageBox::Ok|QMessageBox::Cancel);
       if(confirmation == QMessageBox::Ok){
           DB.remove(ui->table->item(ui->table->currentRow(),0)->text().toInt());
           refresh();
       }
    }
}

void MainWindow::on_action_create_triggered()
{
    QMessageBox::StandardButton confirmation = QMessageBox::question(this,"Создать БД","Создать БД?",QMessageBox::Ok|QMessageBox::Cancel);
    if(confirmation == QMessageBox::Ok){
        on_action_add_triggered();
        ui->mainToolBar->setEnabled(true);
    }
}

void MainWindow::on_action_about_triggered()
{
    QMessageBox::about(nullptr,"About"," Курсовая работа\n студента 2-го курса группы ИКПИ-74\n Зеленцова Максима \n по теме: 'Разработка приложения для управления\n базой данных'");
}

void MainWindow::on_action_find_triggered()
{
    if(DB.getLength()>0){
        searchDialog s(nullptr, DB);
        s.setModal(true);
        s.exec();
        refresh();
    }
}
