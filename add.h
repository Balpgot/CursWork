#ifndef ADD_H
#define ADD_H

#include <QDialog>
#include "Vector.h"
#include "Room.h"

namespace Ui {
class addDialog;
}

class addDialog : public QDialog
{
    Q_OBJECT

public:
    explicit addDialog(QWidget *parent, Vector<Room> &DB);
    ~addDialog();

private slots:
    void on_ok_clicked();

    void on_cancel_clicked();

private:
    Ui::addDialog *ui;
    Vector<Room> &DB;
};

#endif // ADD_H
