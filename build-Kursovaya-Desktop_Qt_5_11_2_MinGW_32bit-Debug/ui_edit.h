/********************************************************************************
** Form generated from reading UI file 'edit.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_H
#define UI_EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_editDialog
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *capacity;
    QLineEdit *number;
    QLineEdit *price;
    QComboBox *isBooked;
    QLabel *label;
    QLabel *label_4;
    QComboBox *level;
    QPushButton *ok;
    QPushButton *cancel;
    QLineEdit *hotel;

    void setupUi(QDialog *editDialog)
    {
        if (editDialog->objectName().isEmpty())
            editDialog->setObjectName(QStringLiteral("editDialog"));
        editDialog->resize(370, 310);
        editDialog->setMinimumSize(QSize(370, 310));
        editDialog->setMaximumSize(QSize(370, 310));
        label_2 = new QLabel(editDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 60, 51, 41));
        QFont font;
        font.setPointSize(9);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(editDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 110, 51, 41));
        label_3->setFont(font);
        label_3->setScaledContents(false);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(true);
        label_5 = new QLabel(editDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 210, 51, 41));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(editDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 260, 51, 41));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);
        capacity = new QComboBox(editDialog);
        capacity->addItem(QString());
        capacity->addItem(QString());
        capacity->addItem(QString());
        capacity->addItem(QString());
        capacity->setObjectName(QStringLiteral("capacity"));
        capacity->setGeometry(QRect(120, 170, 131, 31));
        number = new QLineEdit(editDialog);
        number->setObjectName(QStringLiteral("number"));
        number->setGeometry(QRect(120, 60, 131, 41));
        price = new QLineEdit(editDialog);
        price->setObjectName(QStringLiteral("price"));
        price->setGeometry(QRect(120, 210, 131, 41));
        isBooked = new QComboBox(editDialog);
        isBooked->addItem(QString());
        isBooked->addItem(QString());
        isBooked->setObjectName(QStringLiteral("isBooked"));
        isBooked->setGeometry(QRect(120, 260, 131, 31));
        label = new QLabel(editDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 51, 41));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(editDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 160, 91, 41));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setWordWrap(true);
        level = new QComboBox(editDialog);
        level->addItem(QString());
        level->addItem(QString());
        level->addItem(QString());
        level->addItem(QString());
        level->setObjectName(QStringLiteral("level"));
        level->setGeometry(QRect(120, 120, 131, 31));
        ok = new QPushButton(editDialog);
        ok->setObjectName(QStringLiteral("ok"));
        ok->setGeometry(QRect(270, 10, 80, 31));
        cancel = new QPushButton(editDialog);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(270, 50, 81, 31));
        hotel = new QLineEdit(editDialog);
        hotel->setObjectName(QStringLiteral("hotel"));
        hotel->setGeometry(QRect(120, 10, 131, 41));

        retranslateUi(editDialog);

        QMetaObject::connectSlotsByName(editDialog);
    } // setupUi

    void retranslateUi(QDialog *editDialog)
    {
        editDialog->setWindowTitle(QApplication::translate("editDialog", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QApplication::translate("editDialog", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        label_3->setText(QApplication::translate("editDialog", "\320\232\320\273\320\260\321\201\321\201", nullptr));
        label_5->setText(QApplication::translate("editDialog", "\320\246\320\265\320\275\320\260", nullptr));
        label_6->setText(QApplication::translate("editDialog", "\320\227\320\260\320\275\321\217\321\202", nullptr));
        capacity->setItemText(0, QApplication::translate("editDialog", "1", nullptr));
        capacity->setItemText(1, QApplication::translate("editDialog", "2", nullptr));
        capacity->setItemText(2, QApplication::translate("editDialog", "3", nullptr));
        capacity->setItemText(3, QApplication::translate("editDialog", "4", nullptr));

        number->setInputMask(QApplication::translate("editDialog", "[999]", nullptr));
        price->setInputMask(QApplication::translate("editDialog", "[D0000]", nullptr));
        price->setText(QString());
        isBooked->setItemText(0, QApplication::translate("editDialog", "\320\227\320\260\320\275\321\217\321\202", nullptr));
        isBooked->setItemText(1, QApplication::translate("editDialog", "\320\241\320\262\320\276\320\261\320\276\320\264\320\265\320\275", nullptr));

        label->setText(QApplication::translate("editDialog", "\320\236\321\202\320\265\320\273\321\214", nullptr));
        label_4->setText(QApplication::translate("editDialog", "\320\222\320\274\320\265\321\201\321\202\320\270\320\274\320\276\321\201\321\202\321\214", nullptr));
        level->setItemText(0, QApplication::translate("editDialog", "\320\255\320\272\320\276\320\275\320\276\320\274", nullptr));
        level->setItemText(1, QApplication::translate("editDialog", "\320\221\320\260\320\267\320\276\320\262\321\213\320\271", nullptr));
        level->setItemText(2, QApplication::translate("editDialog", "\320\237\320\276\320\273\321\203\320\273\321\216\320\272\321\201", nullptr));
        level->setItemText(3, QApplication::translate("editDialog", "\320\233\321\216\320\272\321\201", nullptr));

        ok->setText(QApplication::translate("editDialog", "\320\236\320\232", nullptr));
        cancel->setText(QApplication::translate("editDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editDialog: public Ui_editDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_H
