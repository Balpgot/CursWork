#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Vector.h"
#include "Room.h"
#include "QFile"
#include "QString"
#include <QFileDialog>
#include <QTextStream>
#include <QTableWidget>
#include <QMessageBox>
#include "add.h"
#include "edit.h"
#include "search.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_action_open_triggered();

    void on_action_write_triggered();

    void on_action_add_triggered();

    void on_action_concat_triggered();

    void refresh();

    void editRecord();

    void deleteRecord();

    void contextMenu(QPoint pos);

    void on_action_create_triggered();

    void on_action_about_triggered();

    void on_action_find_triggered();

private:
    Ui::MainWindow *ui;
    Vector<Room> DB;
};

#endif // MAINWINDOW_H
