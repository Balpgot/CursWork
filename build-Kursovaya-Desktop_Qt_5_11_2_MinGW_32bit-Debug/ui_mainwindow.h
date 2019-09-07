/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_create;
    QAction *action_open;
    QAction *action_write;
    QAction *action_concat;
    QAction *action_add;
    QAction *action_about;
    QAction *action_find;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTableWidget *table;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(520, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(520, 500));
        MainWindow->setMaximumSize(QSize(768, 511));
        action_create = new QAction(MainWindow);
        action_create->setObjectName(QStringLiteral("action_create"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/menu/menu/create.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        action_create->setIcon(icon);
        action_open = new QAction(MainWindow);
        action_open->setObjectName(QStringLiteral("action_open"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/menu/menu/read.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_open->setIcon(icon1);
        action_write = new QAction(MainWindow);
        action_write->setObjectName(QStringLiteral("action_write"));
        action_write->setEnabled(true);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/menu/menu/write.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_write->setIcon(icon2);
        action_concat = new QAction(MainWindow);
        action_concat->setObjectName(QStringLiteral("action_concat"));
        action_concat->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/menu/menu/concat.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_concat->setIcon(icon3);
        action_add = new QAction(MainWindow);
        action_add->setObjectName(QStringLiteral("action_add"));
        action_add->setEnabled(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/menu/menu/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_add->setIcon(icon4);
        action_about = new QAction(MainWindow);
        action_about->setObjectName(QStringLiteral("action_about"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/menu/menu/about.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        action_about->setIcon(icon5);
        action_find = new QAction(MainWindow);
        action_find->setObjectName(QStringLiteral("action_find"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/menu/menu/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_find->setIcon(icon6);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        table = new QTableWidget(centralWidget);
        table->setObjectName(QStringLiteral("table"));
        table->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(table->sizePolicy().hasHeightForWidth());
        table->setSizePolicy(sizePolicy1);
        table->setEditTriggers(QAbstractItemView::DoubleClicked);
        table->setCornerButtonEnabled(true);
        table->setRowCount(0);
        table->setColumnCount(0);

        gridLayout->addWidget(table, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 520, 20));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setEnabled(false);
        mainToolBar->setMovable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(action_create);
        menu->addAction(action_open);
        menu->addAction(action_write);
        menu->addSeparator();
        menu->addAction(action_about);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_concat);
        mainToolBar->addAction(action_add);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_find);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\221\320\224", nullptr));
        action_create->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\221\320\224", nullptr));
        action_open->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273 \320\221\320\224", nullptr));
        action_write->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \321\204\320\260\320\271\320\273 \320\221\320\224", nullptr));
        action_concat->setText(QApplication::translate("MainWindow", "\320\236\320\261\321\212\320\265\320\264\320\270\320\275\320\270\321\202\321\214 \320\221\320\224", nullptr));
        action_add->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        action_about->setText(QApplication::translate("MainWindow", "About", nullptr));
        action_find->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
