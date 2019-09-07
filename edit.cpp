#include "edit.h"
#include "ui_edit.h"
#include "QMessageBox"

editDialog::editDialog(QWidget *parent, Vector<Room> &DB, int index) :
    QDialog(parent),
    ui(new Ui::editDialog),
    DB(DB),
    index(index)
{
    ui->setupUi(this);
    ui->hotel->setText(DB[index].getHotel());
    ui->number->setText(DB[index].getNumber());
    ui->level->setCurrentText(DB[index].getLevel());
    ui->capacity->setCurrentText(DB[index].getCapacity());
    ui->price->setText(DB[index].getPrice());
    ui->isBooked->setCurrentText(DB[index].getIsBooked());
}

editDialog::~editDialog()
{
    delete ui;
}

void editDialog::on_ok_clicked()
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
        DB.replace(index,room);
        close();
    }
}

void editDialog::on_cancel_clicked()
{
    QMessageBox::StandardButton confirmation = QMessageBox::question(nullptr,"Отмена","Отмена?",QMessageBox::Ok|QMessageBox::Cancel);
    if(confirmation == QMessageBox::Ok){
        close();
    }
}
