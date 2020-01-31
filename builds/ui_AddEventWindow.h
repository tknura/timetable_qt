/********************************************************************************
** Form generated from reading UI file 'AddEventWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEVENTWINDOW_H
#define UI_ADDEVENTWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddEventWindow
{
public:
    QPushButton *OkButton;
    QPushButton *CancelButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *Priority;
    QComboBox *PriorityBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Name;
    QLineEdit *NameEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *Place;
    QLineEdit *PlaceEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *Accomanion;
    QLineEdit *AccEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *StartDate;
    QDateTimeEdit *StartDateTimeEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *EndDate;
    QDateTimeEdit *EndDateTimeEdit;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *ReminderButton;
    QDateTimeEdit *ReminderDateTimeEdit;

    void setupUi(QDialog *AddEventWindow)
    {
        if (AddEventWindow->objectName().isEmpty())
            AddEventWindow->setObjectName(QString::fromUtf8("AddEventWindow"));
        AddEventWindow->resize(439, 371);
        AddEventWindow->setMinimumSize(QSize(439, 368));
        AddEventWindow->setMaximumSize(QSize(439, 371));
        AddEventWindow->setSizeIncrement(QSize(0, 0));
        AddEventWindow->setBaseSize(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Uniform Rnd Medium"));
        AddEventWindow->setFont(font);
        AddEventWindow->setWindowTitle(QString::fromUtf8("Add Event"));
#ifndef QT_NO_TOOLTIP
        AddEventWindow->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
        AddEventWindow->setStyleSheet(QString::fromUtf8("QDialog {\n"
"	background-color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"QMessageBox {\n"
"    background-color: rgb(255, 255, 255);\n"
"	font: 57 10pt \"Uniform Rnd Medium\";\n"
"}\n"
"\n"
"/*Calendars*/\n"
"QCalendarWidget{\n"
"	background-color: rgb(255, 255, 255);\n"
"	width: 30px;\n"
"	height: 50px;\n"
"}\n"
"\n"
"QCalendarWidget QToolButton {\n"
"  	color: rgb(233, 66, 146);\n"
"	font: 8pt \"Comfortaa\";\n"
"  	background-color: rgb(255, 255, 255);\n"
"  }\n"
"\n"
"  QCalendarWidget QMenu {\n"
"	color: rgb(233, 66, 146);\n"
"	background-color: rgb(255, 255, 255);\n"
"	font: 14pt \"Comfortaa\";\n"
"}\n"
"\n"
"QCalendarWidget QSpinBox { \n"
"	font: 57 14pt \"Uniform Rnd Medium\";\n"
"  	color: rgb(233, 66, 146); \n"
"  	background-color: rgb(255, 255, 255); \n"
"  	selection-background-color: rgb(136, 136, 136);\n"
"  	selection-color: rgb(255, 255, 255);\n"
"  }\n"
"\n"
"QCalendarWidget QSpinBox ::up-button{ \n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: top right; \n"
"	background-color: whit"
                        "e;\n"
"	border: 0px;\n"
"}\n"
"\n"
"QCalendarWidget QSpinBox ::up-arrow{ \n"
"	image: url(:/ui/down.png);\n"
"}\n"
"\n"
"  /* header row */\n"
"  QCalendarWidget QWidget \n"
"	{ \n"
"	font: 57 12pt \"Uniform Rnd Medium\";\n"
"	alternate-background-color: rgb(255, 255, 255);\n"
"	background-color: rgb(255, 255, 255);\n"
"	}\n"
"   \n"
"  /* normal days */\n"
"  QCalendarWidget QAbstractItemView:enabled {\n"
"	font: 57 8pt \"Uniform Rnd Medium\";  \n"
"  	color: rgb(63, 63, 63);  \n"
"  	background-color: rgb(255, 255, 255);  \n"
"  	selection-background-color: rgb(84, 163, 219); \n"
"  	selection-color: rgb(255, 255, 255); \n"
"  }\n"
"\n"
"QCalendarWidget QAbstractItemView:disabled  { \n"
"color: rgb(247, 247, 247); \n"
"}"));
        AddEventWindow->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        OkButton = new QPushButton(AddEventWindow);
        OkButton->setObjectName(QString::fromUtf8("OkButton"));
        OkButton->setGeometry(QRect(50, 320, 91, 28));
        OkButton->setStyleSheet(QString::fromUtf8("    background-color:rgb(233, 66, 146);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: rgb(255, 255, 255);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 57 10pt \"Uniform Rnd Medium\";\n"
""));
        CancelButton = new QPushButton(AddEventWindow);
        CancelButton->setObjectName(QString::fromUtf8("CancelButton"));
        CancelButton->setGeometry(QRect(310, 320, 93, 28));
        CancelButton->setStyleSheet(QString::fromUtf8("    background-color: rgb(255, 255, 255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: rgb(255, 255, 255);\n"
"	color: rgb(68, 68, 68);\n"
"	font: 57 10pt \"Uniform Rnd Medium\";\n"
""));
        layoutWidget = new QWidget(AddEventWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 20, 371, 281));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Priority = new QLabel(layoutWidget);
        Priority->setObjectName(QString::fromUtf8("Priority"));
        Priority->setStyleSheet(QString::fromUtf8("font: 57 10pt \"Uniform Rnd Medium\";"));

        horizontalLayout->addWidget(Priority);

        PriorityBox = new QComboBox(layoutWidget);
        PriorityBox->addItem(QString());
        PriorityBox->addItem(QString());
        PriorityBox->addItem(QString());
        PriorityBox->addItem(QString());
        PriorityBox->setObjectName(QString::fromUtf8("PriorityBox"));
        PriorityBox->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"font: 57 8pt \"Uniform Rnd Medium\";\n"
"color: rgb(233, 66, 146);\n"
"background-color:rgb(245, 245, 245);\n"
"border: 0px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    image: url(:ui/down.png);\n"
"	color: rgb(233, 66, 146);\n"
"    width:30px;\n"
"    height:15px;\n"
"    subcontrol-position: right middle;\n"
"    background-color:  rgb(245, 245, 245);\n"
"    border-style: outrange;\n"
"    border-width: 0px;\n"
"    border-color: white;\n"
"}"));
        PriorityBox->setInsertPolicy(QComboBox::InsertAtBottom);

        horizontalLayout->addWidget(PriorityBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Name = new QLabel(layoutWidget);
        Name->setObjectName(QString::fromUtf8("Name"));
        Name->setStyleSheet(QString::fromUtf8("font: 57 10pt \"Uniform Rnd Medium\";"));

        horizontalLayout_2->addWidget(Name);

        NameEdit = new QLineEdit(layoutWidget);
        NameEdit->setObjectName(QString::fromUtf8("NameEdit"));
        NameEdit->setStyleSheet(QString::fromUtf8("color: rgb(233, 66, 146);\n"
"background-color:rgb(245, 245, 245);\n"
"border: 0px;"));

        horizontalLayout_2->addWidget(NameEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        Place = new QLabel(layoutWidget);
        Place->setObjectName(QString::fromUtf8("Place"));
        Place->setStyleSheet(QString::fromUtf8("font: 57 10pt \"Uniform Rnd Medium\";"));

        horizontalLayout_3->addWidget(Place);

        PlaceEdit = new QLineEdit(layoutWidget);
        PlaceEdit->setObjectName(QString::fromUtf8("PlaceEdit"));
        PlaceEdit->setStyleSheet(QString::fromUtf8("color: rgb(233, 66, 146);\n"
"background-color:rgb(245, 245, 245);\n"
"border: 0px;"));

        horizontalLayout_3->addWidget(PlaceEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        Accomanion = new QLabel(layoutWidget);
        Accomanion->setObjectName(QString::fromUtf8("Accomanion"));
        Accomanion->setStyleSheet(QString::fromUtf8("font: 57 10pt \"Uniform Rnd Medium\";"));

        horizontalLayout_4->addWidget(Accomanion);

        AccEdit = new QLineEdit(layoutWidget);
        AccEdit->setObjectName(QString::fromUtf8("AccEdit"));
        AccEdit->setStyleSheet(QString::fromUtf8("color: rgb(233, 66, 146);\n"
"background-color:rgb(245, 245, 245);\n"
"border: 0px;"));

        horizontalLayout_4->addWidget(AccEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        StartDate = new QLabel(layoutWidget);
        StartDate->setObjectName(QString::fromUtf8("StartDate"));
        StartDate->setStyleSheet(QString::fromUtf8("font: 57 10pt \"Uniform Rnd Medium\";"));

        horizontalLayout_5->addWidget(StartDate);

        StartDateTimeEdit = new QDateTimeEdit(layoutWidget);
        StartDateTimeEdit->setObjectName(QString::fromUtf8("StartDateTimeEdit"));
        StartDateTimeEdit->setStyleSheet(QString::fromUtf8("QDateTimeEdit\n"
"{\n"
"	font: 57 8pt \"Uniform Rnd Medium\";\n"
"	color: rgb(233, 66, 146);\n"
"	background-color:rgb(245, 245, 245);\n"
"	border: 0px;\n"
"}\n"
"\n"
"QDateTimeEdit::drop-down {\n"
"    image: url(:ui/down.png);\n"
"	color: rgb(233, 66, 146);\n"
"    width:30px;\n"
"    height:15px;\n"
"    subcontrol-position: right middle;\n"
"    background-color:  rgb(245, 245, 245);\n"
"    border-style: outrange;\n"
"    border-width: 0px;\n"
"    border-color: white;\n"
"}"));
        StartDateTimeEdit->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        StartDateTimeEdit->setTime(QTime(18, 0, 0));
        StartDateTimeEdit->setCalendarPopup(true);

        horizontalLayout_5->addWidget(StartDateTimeEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        EndDate = new QLabel(layoutWidget);
        EndDate->setObjectName(QString::fromUtf8("EndDate"));
        EndDate->setStyleSheet(QString::fromUtf8("font: 57 10pt \"Uniform Rnd Medium\";"));

        horizontalLayout_6->addWidget(EndDate);

        EndDateTimeEdit = new QDateTimeEdit(layoutWidget);
        EndDateTimeEdit->setObjectName(QString::fromUtf8("EndDateTimeEdit"));
        EndDateTimeEdit->setStyleSheet(QString::fromUtf8("QDateTimeEdit\n"
"{\n"
"	font: 57 8pt \"Uniform Rnd Medium\";\n"
"	color: rgb(233, 66, 146);\n"
"	background-color:rgb(245, 245, 245);\n"
"	border: 0px;\n"
"}\n"
"\n"
"QDateTimeEdit::drop-down {\n"
"    image: url(:ui/down.png);\n"
"	color: rgb(233, 66, 146);\n"
"    width:30px;\n"
"    height:15px;\n"
"    subcontrol-position: right middle;\n"
"    background-color:  rgb(245, 245, 245);\n"
"    border-style: outrange;\n"
"    border-width: 0px;\n"
"    border-color: white;\n"
"}"));
        EndDateTimeEdit->setCalendarPopup(true);

        horizontalLayout_6->addWidget(EndDateTimeEdit);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        ReminderButton = new QCheckBox(layoutWidget);
        ReminderButton->setObjectName(QString::fromUtf8("ReminderButton"));
        ReminderButton->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"font: 57 10pt \"Uniform Rnd Medium\";\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"	color:rgb(233, 66, 146);\n"
"}\n"
""));
        ReminderButton->setCheckable(true);
        ReminderButton->setChecked(false);
        ReminderButton->setTristate(false);

        horizontalLayout_7->addWidget(ReminderButton);

        ReminderDateTimeEdit = new QDateTimeEdit(layoutWidget);
        ReminderDateTimeEdit->setObjectName(QString::fromUtf8("ReminderDateTimeEdit"));
        ReminderDateTimeEdit->setStyleSheet(QString::fromUtf8("QDateTimeEdit\n"
"{\n"
"	font: 57 8pt \"Uniform Rnd Medium\";\n"
"	color: rgb(233, 66, 146);\n"
"	background-color:rgb(245, 245, 245);\n"
"	border: 0px;\n"
"}\n"
"\n"
"QDateTimeEdit::disabled{\n"
"	font: 57 8pt \"Uniform Rnd Medium\";\n"
"	color: rgb(154, 154, 154);\n"
"	background-color:rgb(245, 245, 245);\n"
"	border: 0px;\n"
"}\n"
"\n"
"QDateTimeEdit::drop-down {\n"
"    image: url(:ui/down.png);\n"
"	color: rgb(233, 66, 146);\n"
"    width:30px;\n"
"    height:15px;\n"
"    subcontrol-position: right middle;\n"
"    background-color:  rgb(245, 245, 245);\n"
"    border-style: outrange;\n"
"    border-width: 0px;\n"
"    border-color: white;\n"
"}\n"
"\n"
"QDateTimeEdit::drop-down::disabled {\n"
"    image: url(:ui/down-disabled.png);\n"
"	color: rgb(233, 66, 146);\n"
"    width:30px;\n"
"    height:15px;\n"
"    subcontrol-position: right middle;\n"
"    background-color:  rgb(245, 245, 245);\n"
"    border-style: outrange;\n"
"    border-width: 0px;\n"
"    border-color: white;\n"
"}"));
        ReminderDateTimeEdit->setDateTime(QDateTime(QDate(2000, 1, 6), QTime(0, 0, 0)));
        ReminderDateTimeEdit->setCalendarPopup(true);

        horizontalLayout_7->addWidget(ReminderDateTimeEdit);


        verticalLayout->addLayout(horizontalLayout_7);


        retranslateUi(AddEventWindow);

        QMetaObject::connectSlotsByName(AddEventWindow);
    } // setupUi

    void retranslateUi(QDialog *AddEventWindow)
    {
        OkButton->setText(QApplication::translate("AddEventWindow", "Ok", nullptr));
        CancelButton->setText(QApplication::translate("AddEventWindow", "Cancel", nullptr));
        Priority->setText(QApplication::translate("AddEventWindow", "Priority", nullptr));
        PriorityBox->setItemText(0, QApplication::translate("AddEventWindow", "None", nullptr));
        PriorityBox->setItemText(1, QApplication::translate("AddEventWindow", "Low", nullptr));
        PriorityBox->setItemText(2, QApplication::translate("AddEventWindow", "Medium", nullptr));
        PriorityBox->setItemText(3, QApplication::translate("AddEventWindow", "High", nullptr));

        Name->setText(QApplication::translate("AddEventWindow", "Name", nullptr));
        Place->setText(QApplication::translate("AddEventWindow", "Place", nullptr));
        Accomanion->setText(QApplication::translate("AddEventWindow", "Accompanion", nullptr));
        StartDate->setText(QApplication::translate("AddEventWindow", "Start Date", nullptr));
        EndDate->setText(QApplication::translate("AddEventWindow", "End Date", nullptr));
        ReminderButton->setText(QApplication::translate("AddEventWindow", "Reminder", nullptr));
        Q_UNUSED(AddEventWindow);
    } // retranslateUi

};

namespace Ui {
    class AddEventWindow: public Ui_AddEventWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEVENTWINDOW_H
