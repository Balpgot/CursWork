#include "add.h"
#include "ui_add.h"
#include "QMessageBox"

addDialog::addDialog(QWidget *parent, Vector<Room> &DB) :
    QDialog(parent),
    ui(new Ui::addDialog),
    DB(DB)
{
    ui->setupUi(this);
}

addDialog::~addDialog()
{
    delete ui;
}

void addDialog::on_ok_clicked()
{
    if(ui->hotel->text().isEmpty()||ui->number->text().isEmpty()||ui->price->text().isEmpty()){
        QMessageBox::about(nullptr,"Error","Заполните поля");
    }
    else{
        bool booked;
        if(ui->isBooked->currentText() == "Занят"){
            booked = true;
        }
        else
            booked = false;

        Room room(ui->hotel->text(),ui->number->text(),ui->level->currentText(),ui->capacity->currentText(),ui->price->text(),booked);
        DB.push_back(room);
        close();
    }
}


void addDialog::on_cancel_clicked()
{
    QMessageBox::StandardButton confirmation = QMessageBox::question(nullptr,"Отмена","Отмена?",QMessageBox::Ok|QMessageBox::Cancel);
    if(confirmation == QMessageBox::Ok){
        close();
    }
}
