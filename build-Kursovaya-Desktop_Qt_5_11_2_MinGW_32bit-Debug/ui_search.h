/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_searchDialog
{
public:
    QTableWidget *table;
    QLineEdit *whatToSearch;
    QPushButton *cancel;
    QPushButton *start;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *hotel;
    QCheckBox *number;
    QCheckBox *level;
    QCheckBox *capacity;
    QCheckBox *price;
    QCheckBox *isBooked;

    void setupUi(QDialog *searchDialog)
    {
        if (searchDialog->objectName().isEmpty())
            searchDialog->setObjectName(QStringLiteral("searchDialog"));
        searchDialog->resize(450, 458);
        searchDialog->setMinimumSize(QSize(450, 458));
        searchDialog->setMaximumSize(QSize(450, 458));
        table = new QTableWidget(searchDialog);
        table->setObjectName(QStringLiteral("table"));
        table->setGeometry(QRect(10, 10, 431, 361));
        whatToSearch = new QLineEdit(searchDialog);
        whatToSearch->setObjectName(QStringLiteral("whatToSearch"));
        whatToSearch->setEnabled(true);
        whatToSearch->setGeometry(QRect(10, 410, 231, 41));
        cancel = new QPushButton(searchDialog);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setEnabled(true);
        cancel->setGeometry(QRect(350, 410, 91, 41));
        start = new QPushButton(searchDialog);
        start->setObjectName(QStringLiteral("start"));
        start->setEnabled(true);
        start->setGeometry(QRect(250, 410, 91, 41));
        widget = new QWidget(searchDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 380, 431, 21));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        hotel = new QCheckBox(widget);
        hotel->setObjectName(QStringLiteral("hotel"));
        hotel->setEnabled(true);

        horizontalLayout->addWidget(hotel);

        number = new QCheckBox(widget);
        number->setObjectName(QStringLiteral("number"));
        number->setEnabled(true);

        horizontalLayout->addWidget(number);

        level = new QCheckBox(widget);
        level->setObjectName(QStringLiteral("level"));
        level->setEnabled(true);

        horizontalLayout->addWidget(level);

        capacity = new QCheckBox(widget);
        capacity->setObjectName(QStringLiteral("capacity"));
        capacity->setEnabled(true);

        horizontalLayout->addWidget(capacity);

        price = new QCheckBox(widget);
        price->setObjectName(QStringLiteral("price"));
        price->setEnabled(true);

        horizontalLayout->addWidget(price);

        isBooked = new QCheckBox(widget);
        isBooked->setObjectName(QStringLiteral("isBooked"));
        isBooked->setEnabled(true);

        horizontalLayout->addWidget(isBooked);


        retranslateUi(searchDialog);

        QMetaObject::connectSlotsByName(searchDialog);
    } // setupUi

    void retranslateUi(QDialog *searchDialog)
    {
        searchDialog->setWindowTitle(QApplication::translate("searchDialog", "Dialog", nullptr));
        cancel->setText(QApplication::translate("searchDialog", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        start->setText(QApplication::translate("searchDialog", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        hotel->setText(QApplication::translate("searchDialog", "\320\236\321\202\320\265\320\273\321\214", nullptr));
        number->setText(QApplication::translate("searchDialog", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        level->setText(QApplication::translate("searchDialog", "\320\243\321\200\320\276\320\262\320\265\320\275\321\214", nullptr));
        capacity->setText(QApplication::translate("searchDialog", "\320\222\320\274\320\265\321\201\321\202\320\270\320\274\320\276\321\201\321\202\321\214", nullptr));
        price->setText(QApplication::translate("searchDialog", "\320\246\320\265\320\275\320\260", nullptr));
        isBooked->setText(QApplication::translate("searchDialog", "\320\227\320\260\320\275\321\217\321\202\320\276\321\201\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class searchDialog: public Ui_searchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
