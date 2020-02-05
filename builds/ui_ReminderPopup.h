/********************************************************************************
** Form generated from reading UI file 'ReminderPopup.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMINDERPOPUP_H
#define UI_REMINDERPOPUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ReminderPopup
{
public:
    QLabel *ReminderMessage;
    QPushButton *CloseButton;

    void setupUi(QDialog *ReminderPopup)
    {
        if (ReminderPopup->objectName().isEmpty())
            ReminderPopup->setObjectName(QString::fromUtf8("ReminderPopup"));
        ReminderPopup->resize(376, 153);
        QFont font;
        font.setFamily(QString::fromUtf8("Uniform Rnd"));
        ReminderPopup->setFont(font);
        ReminderPopup->setWindowTitle(QString::fromUtf8("Reminder"));
        ReminderPopup->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        ReminderMessage = new QLabel(ReminderPopup);
        ReminderMessage->setObjectName(QString::fromUtf8("ReminderMessage"));
        ReminderMessage->setGeometry(QRect(30, 10, 221, 121));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Uniform Rnd"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        ReminderMessage->setFont(font1);
        ReminderMessage->setStyleSheet(QString::fromUtf8("color: rgb(233, 66, 146);"));
        CloseButton = new QPushButton(ReminderPopup);
        CloseButton->setObjectName(QString::fromUtf8("CloseButton"));
        CloseButton->setGeometry(QRect(330, 10, 31, 31));
        QFont font2;
        font2.setPointSize(16);
        CloseButton->setFont(font2);
        CloseButton->setStyleSheet(QString::fromUtf8("color: rgb(233, 66, 146);\n"
"    background-color: rgb(255, 255, 255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: rgb(255, 255, 255);"));

        retranslateUi(ReminderPopup);

        QMetaObject::connectSlotsByName(ReminderPopup);
    } // setupUi

    void retranslateUi(QDialog *ReminderPopup)
    {
        ReminderMessage->setText(QApplication::translate("ReminderPopup", "TextLabel", nullptr));
        CloseButton->setText(QApplication::translate("ReminderPopup", "X", nullptr));
        Q_UNUSED(ReminderPopup);
    } // retranslateUi

};

namespace Ui {
    class ReminderPopup: public Ui_ReminderPopup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMINDERPOPUP_H
