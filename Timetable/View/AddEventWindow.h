#ifndef ADDEVENTWINDOW_H
#define ADDEVENTWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include "Model/EventList.h"
#include "Management/MainManager.h"
#include "Management/ReminderManager.h"

namespace Ui {
class AddEventWindow;
}

class AddEventWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddEventWindow(QDate selectedDate, QWidget *parent = nullptr);
    ~AddEventWindow();

private slots:
    void on_OkButton_clicked();

    void on_CancelButton_clicked();

    void on_ReminderButton_stateChanged(int arg1);
private:
    Ui::AddEventWindow *ui;
    bool ValidateNewEvent(QString name, QDate startDate, QDate endDate, QTime startTime, QTime endTime);
    bool ValidateNewReminder( QDate remindDay, QTime remindTime);
};

#endif // ADDEVENTWINDOW_H
