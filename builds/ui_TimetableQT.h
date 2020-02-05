/********************************************************************************
** Form generated from reading UI file 'TimetableQT.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMETABLEQT_H
#define UI_TIMETABLEQT_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Timetable
{
public:
    QPushButton *HomeButton;
    QPushButton *AddEventButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QLabel *DateLabel;
    QListWidget *EventListWidget;
    QCalendarWidget *calendarWidget;
    QWidget *widget_2;

    void setupUi(QWidget *Timetable)
    {
        if (Timetable->objectName().isEmpty())
            Timetable->setObjectName(QString::fromUtf8("Timetable"));
        Timetable->resize(841, 630);
        Timetable->setMinimumSize(QSize(841, 630));
        Timetable->setMaximumSize(QSize(841, 630));
        Timetable->setWindowTitle(QString::fromUtf8("Timetable"));
        Timetable->setAutoFillBackground(false);
        Timetable->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: rgb(228, 235, 243)\n"
"}\n"
"\n"
"QMessageBox {\n"
"    background-color: rgb(255, 255, 255);\n"
"	font: 57 10pt \"Uniform Rnd Medium\";\n"
"}\n"
"\n"
"QMessageBox::ok {\n"
"    background-color:rgb(233, 66, 146);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: rgb(255, 255, 255);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 57 10pt \"Uniform Rnd Medium\";\n"
"}\n"
"\n"
""));
        Timetable->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        HomeButton = new QPushButton(Timetable);
        HomeButton->setObjectName(QString::fromUtf8("HomeButton"));
        HomeButton->setGeometry(QRect(290, 530, 181, 41));
        HomeButton->setStyleSheet(QString::fromUtf8("    background-color: rgb(255, 255, 255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: rgb(255, 255, 255);\n"
"	color: rgb(68, 68, 68);\n"
"	font: 57 10pt \"Uniform Rnd Medium\";\n"
""));
        AddEventButton = new QPushButton(Timetable);
        AddEventButton->setObjectName(QString::fromUtf8("AddEventButton"));
        AddEventButton->setGeometry(QRect(40, 530, 191, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Uniform Rnd Medium"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(7);
        AddEventButton->setFont(font);
        AddEventButton->setStyleSheet(QString::fromUtf8("    background-color: rgb(255, 255, 255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: rgb(255, 255, 255);\n"
"	font: 57 10pt \"Uniform Rnd Medium\";\n"
"	color: rgb(68, 68, 68);\n"
""));
        AddEventButton->setCheckable(false);
        widget = new QWidget(Timetable);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(510, 0, 331, 631));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(widget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setStyleSheet(QString::fromUtf8("QSplitter::handle {	\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 3px;\n"
"	border-color: rgb(255, 255, 255);\n"
"	background-color:rgb(116, 202, 255);\n"
"	margin: 1px 120px;			\n"
"}"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setOpaqueResize(false);
        splitter->setHandleWidth(4);
        DateLabel = new QLabel(splitter);
        DateLabel->setObjectName(QString::fromUtf8("DateLabel"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Uniform Rnd Medium"));
        font1.setPointSize(28);
        font1.setBold(false);
        font1.setWeight(50);
        DateLabel->setFont(font1);
        DateLabel->setStyleSheet(QString::fromUtf8("color: rgb(68, 158, 218)"));
        DateLabel->setTextFormat(Qt::AutoText);
        DateLabel->setScaledContents(false);
        DateLabel->setAlignment(Qt::AlignCenter);
        DateLabel->setWordWrap(true);
        DateLabel->setIndent(-1);
        splitter->addWidget(DateLabel);
        EventListWidget = new QListWidget(splitter);
        EventListWidget->setObjectName(QString::fromUtf8("EventListWidget"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Comfortaa"));
        EventListWidget->setFont(font2);
        EventListWidget->setStyleSheet(QString::fromUtf8(" QScrollBar:vertical {\n"
"            border: 0px solid #999999;\n"
"            background:white;\n"
"            width:10px;    \n"
"            margin: 0px 0px 0px 0px;\n"
"}\n"
"\n"
" QScrollBar::handle:vertical {         \n"
"            min-height: 0px;\n"
"          	border: 0px solid red;\n"
"			border-radius: 4px;\n"
"			background-color: black;\n"
"}\n"
"\n"
" QScrollBar::add-line:vertical {       \n"
"            height: 0px;\n"
"            subcontrol-position: bottom;\n"
"            subcontrol-origin: margin;\n"
"}\n"
"\n"
" QScrollBar::sub-line:vertical {\n"
"            height: 0 px;\n"
"            subcontrol-position: top;\n"
"            subcontrol-origin: margin;\n"
"}"));
        EventListWidget->setFrameShape(QFrame::NoFrame);
        EventListWidget->setFrameShadow(QFrame::Plain);
        EventListWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        EventListWidget->setAutoScroll(false);
        EventListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        EventListWidget->setProperty("showDropIndicator", QVariant(false));
        EventListWidget->setProperty("isWrapping", QVariant(false));
        EventListWidget->setSpacing(14);
        EventListWidget->setSortingEnabled(false);
        splitter->addWidget(EventListWidget);

        verticalLayout->addWidget(splitter);

        calendarWidget = new QCalendarWidget(Timetable);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(40, 60, 431, 431));
        calendarWidget->setContextMenuPolicy(Qt::NoContextMenu);
        calendarWidget->setAcceptDrops(false);
        calendarWidget->setStyleSheet(QString::fromUtf8("QCalendarWidget{\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QCalendarWidget QToolButton {\n"
"  	height: 60px;\n"
"  	width: 150px;\n"
"  	color: rgb(233, 66, 146);\n"
"	font: 24pt \"Comfortaa\";\n"
"  	font-size: 24px;\n"
"	background: url(qrc:/ui/next.png)t;\n"
"  	icon-size: 10px, 10px;\n"
"  	background-color: rgb(255, 255, 255);\n"
"  }\n"
"\n"
"  QCalendarWidget QMenu {\n"
"	color: rgb(233, 66, 146);\n"
"	background-color: rgb(255, 255, 255);\n"
"	font: 24pt \"Comfortaa\";\n"
"}\n"
"\n"
"QCalendarWidget QSpinBox { \n"
"	font: 57 24pt \"Uniform Rnd Medium\";\n"
"  	width: 150px; \n"
"  	color: rgb(233, 66, 146); \n"
"  	background-color: rgb(255, 255, 255); \n"
"  	selection-background-color: rgb(136, 136, 136);\n"
"  	selection-color: rgb(255, 255, 255);\n"
"  }\n"
"\n"
"QCalendarWidget QSpinBox ::up-button{ \n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: top right; \n"
"	background-color:"
                        " white;\n"
"	width: 20px;\n"
"	border: 0px;\n"
"}\n"
"\n"
"QCalendarWidget QSpinBox ::up-arrow{ \n"
"	image: url(:/ui/down.png);\n"
"	width: 10px;\n"
"	height: 10px;\n"
"}\n"
"\n"
"  /* header row */\n"
"  QCalendarWidget QWidget \n"
"	{ \n"
"	font: 57 16pt \"Uniform Rnd Medium\";\n"
"	alternate-background-color: rgb(255, 255, 255);\n"
"	}\n"
"   \n"
"  /* normal days */\n"
"  QCalendarWidget QAbstractItemView:enabled \n"
"  {\n"
"	font: 57 16pt \"Uniform Rnd Medium\";\n"
"  	font-size:16px;  \n"
"  	color: rgb(63, 63, 63);\n"
"  	background-color: rgb(255, 255, 255);  \n"
"  	selection-background-color: rgb(84, 163, 219); \n"
"  	selection-color: rgb(255, 255, 255); \n"
"  }\n"
"\n"
"QCalendarWidget QAbstractItemView::item  {\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: rgb(255, 255, 255); \n"
"}\n"
"\n"
"QCalendarWidget QAbstractItemView:disabled \n"
"{ \n"
"color: rgb(247, 247, 247); \n"
"}\n"
""));
        calendarWidget->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        calendarWidget->setFirstDayOfWeek(Qt::Monday);
        calendarWidget->setGridVisible(false);
        calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::SingleLetterDayNames);
        calendarWidget->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        calendarWidget->setNavigationBarVisible(true);
        calendarWidget->setDateEditEnabled(true);
        widget_2 = new QWidget(Timetable);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(30, 50, 451, 451));
        widget_2->setStyleSheet(QString::fromUtf8("    background-color: rgb(255, 255, 255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 20px;\n"
"    border-color: rgb(255, 255, 255);"));
        HomeButton->raise();
        AddEventButton->raise();
        widget_2->raise();
        widget->raise();
        calendarWidget->raise();

        retranslateUi(Timetable);

        QMetaObject::connectSlotsByName(Timetable);
    } // setupUi

    void retranslateUi(QWidget *Timetable)
    {
        HomeButton->setText(QApplication::translate("Timetable", "Show current date", nullptr));
        AddEventButton->setText(QApplication::translate("Timetable", "Add Event", nullptr));
        DateLabel->setText(QApplication::translate("Timetable", "WEDNESDAY, 24TH DECEMBER", nullptr));
        Q_UNUSED(Timetable);
    } // retranslateUi

};

namespace Ui {
    class Timetable: public Ui_Timetable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMETABLEQT_H
