#ifndef SEARCH_H
#define SEARCH_H

#include <QDialog>
#include "Vector.h"
#include "Room.h"
#include "QDialog"
#include "QAction"
#include "QMenu"
#include "edit.h"
#include "QMessageBox"

namespace Ui {
class searchDialog;
}

class searchDialog : public QDialog
{
    Q_OBJECT

public:
    explicit searchDialog(QWidget *parent, Vector<Room> &DB);
    ~searchDialog();

private slots:
    void on_start_clicked();

    void on_cancel_clicked();

    void editRecord();

    void deleteRecord();

    void contextMenu(QPoint pos);

private:
    Ui::searchDialog *ui;
    Vector<Room> &DB;
};

#endif // SEARCH_H
