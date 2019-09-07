#ifndef EDIT_H
#define EDIT_H

#include <QDialog>
#include "Vector.h"
#include "Room.h"

namespace Ui {
class editDialog;
}

class editDialog : public QDialog
{
    Q_OBJECT

public:
    explicit editDialog(QWidget *parent, Vector<Room> &DB, int index);
    ~editDialog();

private slots:
    void on_ok_clicked();

    void on_cancel_clicked();

private:
    Ui::editDialog *ui;
    Vector<Room> &DB;
    int index;
};

#endif // EDIT_H
