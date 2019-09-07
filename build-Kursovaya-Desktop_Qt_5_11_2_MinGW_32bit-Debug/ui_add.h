/********************************************************************************
** Form generated from reading UI file 'add.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_H
#define UI_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addDialog
{
public:
    QPushButton *cancel;
    QLineEdit *hotel;
    QLineEdit *number;
    QLabel *label_5;
    QLabel *label_2;
    QLineEdit *price;
    QPushButton *ok;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *level;
    QComboBox *capacity;
    QLabel *label_6;
    QComboBox *isBooked;

    void setupUi(QDialog *addDialog)
    {
        if (addDialog->objectName().isEmpty())
            addDialog->setObjectName(QStringLiteral("addDialog"));
        addDialog->resize(370, 310);
        addDialog->setMinimumSize(QSize(370, 310));
        addDialog->setMaximumSize(QSize(370, 310));
        cancel = new QPushButton(addDialog);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(280, 50, 81, 31));
        hotel = new QLineEdit(addDialog);
        hotel->setObjectName(QStringLiteral("hotel"));
        hotel->setGeometry(QRect(130, 10, 131, 41));
        number = new QLineEdit(addDialog);
        number->setObjectName(QStringLiteral("number"));
        number->setGeometry(QRect(130, 60, 131, 41));
        label_5 = new QLabel(addDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 210, 51, 41));
        QFont font;
        font.setPointSize(9);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(addDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 51, 41));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        price = new QLineEdit(addDialog);
        price->setObjectName(QStringLiteral("price"));
        price->setGeometry(QRect(130, 210, 131, 41));
        ok = new QPushButton(addDialog);
        ok->setObjectName(QStringLiteral("ok"));
        ok->setGeometry(QRect(280, 10, 80, 31));
        label = new QLabel(addDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 51, 41));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(addDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 110, 51, 41));
        label_3->setFont(font);
        label_3->setScaledContents(false);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(true);
        label_4 = new QLabel(addDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 160, 91, 41));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setWordWrap(true);
        level = new QComboBox(addDialog);
        level->addItem(QString());
        level->addItem(QString());
        level->addItem(QString());
        level->addItem(QString());
        level->setObjectName(QStringLiteral("level"));
        level->setGeometry(QRect(130, 120, 131, 31));
        capacity = new QComboBox(addDialog);
        capacity->addItem(QString());
        capacity->addItem(QString());
        capacity->addItem(QString());
        capacity->addItem(QString());
        capacity->setObjectName(QStringLiteral("capacity"));
        capacity->setGeometry(QRect(130, 170, 131, 31));
        label_6 = new QLabel(addDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 260, 51, 41));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);
        isBooked = new QComboBox(addDialog);
        isBooked->addItem(QString());
        isBooked->addItem(QString());
        isBooked->setObjectName(QStringLiteral("isBooked"));
        isBooked->setGeometry(QRect(130, 260, 131, 31));

        retranslateUi(addDialog);

        QMetaObject::connectSlotsByName(addDialog);
    } // setupUi

    void retranslateUi(QDialog *addDialog)
    {
        addDialog->setWindowTitle(QApplication::translate("addDialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        cancel->setText(QApplication::translate("addDialog", "Cancel", nullptr));
        number->setInputMask(QApplication::translate("addDialog", "[999]", nullptr));
        label_5->setText(QApplication::translate("addDialog", "\320\246\320\265\320\275\320\260", nullptr));
        label_2->setText(QApplication::translate("addDialog", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        price->setInputMask(QApplication::translate("addDialog", "[D0000]", nullptr));
        price->setText(QString());
        ok->setText(QApplication::translate("addDialog", "\320\236\320\232", nullptr));
        label->setText(QApplication::translate("addDialog", "\320\236\321\202\320\265\320\273\321\214", nullptr));
        label_3->setText(QApplication::translate("addDialog", "\320\232\320\273\320\260\321\201\321\201", nullptr));
        label_4->setText(QApplication::translate("addDialog", "\320\222\320\274\320\265\321\201\321\202\320\270\320\274\320\276\321\201\321\202\321\214", nullptr));
        level->setItemText(0, QApplication::translate("addDialog", "\320\255\320\272\320\276\320\275\320\276\320\274", nullptr));
        level->setItemText(1, QApplication::translate("addDialog", "\320\221\320\260\320\267\320\276\320\262\321\213\320\271", nullptr));
        level->setItemText(2, QApplication::translate("addDialog", "\320\237\320\276\320\273\321\203\320\273\321\216\320\272\321\201", nullptr));
        level->setItemText(3, QApplication::translate("addDialog", "\320\233\321\216\320\272\321\201", nullptr));

        capacity->setItemText(0, QApplication::translate("addDialog", "1", nullptr));
        capacity->setItemText(1, QApplication::translate("addDialog", "2", nullptr));
        capacity->setItemText(2, QApplication::translate("addDialog", "3", nullptr));
        capacity->setItemText(3, QApplication::translate("addDialog", "4", nullptr));

        label_6->setText(QApplication::translate("addDialog", "\320\227\320\260\320\275\321\217\321\202", nullptr));
        isBooked->setItemText(0, QApplication::translate("addDialog", "\320\227\320\260\320\275\321\217\321\202", nullptr));
        isBooked->setItemText(1, QApplication::translate("addDialog", "\320\241\320\262\320\276\320\261\320\276\320\264\320\265\320\275", nullptr));

    } // retranslateUi

};

namespace Ui {
    class addDialog: public Ui_addDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_H
