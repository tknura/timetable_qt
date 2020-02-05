QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

RC_ICONS = timetable.ico

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    View/AddEventWindow.cpp \
    Model/Date.cpp \
    Model/Event.cpp \
    Model/EventList.cpp \
    Management/JSONManager.cpp \
    Management/MainManager.cpp \
    Model/Reminder.cpp \
    Management/ReminderManager.cpp \
    View/ReminderPopup.cpp \
    Model/TimeClass.cpp \
    View/TimetableQT.cpp \
    main.cpp

HEADERS += \
    View/AddEventWindow.h \
    Model/Date.h \
    Model/Event.h \
    Model/EventList.h \
    Model/IRemindable.h \
    Model/IValidator.h \
    Management/JSONManager.h \
    Management/MainManager.h \
    Model/Reminder.h \
    Management/ReminderManager.h \
    View/ReminderPopup.h \
    Model/TimeClass.h \
    View/TimetableQT.h

FORMS += \
    View/AddEventWindow.ui \
    View/ReminderPopup.ui \
    View/TimetableQT.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Timetable.pro.user \
    icon.png

RESOURCES += \
    resources.qrc
