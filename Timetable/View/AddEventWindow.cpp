#include "AddEventWindow.h"
#include "ui_AddEventWindow.h"

AddEventWindow::AddEventWindow(QDate selectedDate, QWidget *parent) : QDialog(parent), ui(new Ui::AddEventWindow) {
    ui->setupUi(this);
    ui->ReminderDateTimeEdit->setDisabled(true);

    ui->StartDateTimeEdit->setDate(selectedDate);
    ui->StartDateTimeEdit->setTime(QTime::currentTime());
    ui->EndDateTimeEdit->setDate(selectedDate);
    if(QTime::currentTime().hour() == 23){
        ui->EndDateTimeEdit->setDate(selectedDate.addDays(1));
    }
    ui->EndDateTimeEdit->setTime(QTime::currentTime().addSecs(3600));
    ui->ReminderDateTimeEdit->setDate(selectedDate);
    ui->ReminderDateTimeEdit->setTime(QTime::currentTime().addSecs(3600));
}

AddEventWindow::~AddEventWindow() {
    delete ui;
}

void AddEventWindow::on_OkButton_clicked() {
    int priority = ui->PriorityBox->currentIndex();
    QString name = ui->NameEdit->text();
    QString place = ui->PlaceEdit->text();
    QString accompanion = ui->AccEdit->text();

    QDate startDate = ui->StartDateTimeEdit->date();
    QDate endDate = ui->EndDateTimeEdit->date();
    QTime startTime = ui->StartDateTimeEdit->time();
    QTime endTime = ui->EndDateTimeEdit->time();

    Event* pEvent = new Event(priority, startDate, endDate, startTime, endTime, name.toStdString(), accompanion.toStdString(), place.toStdString());

    if(ValidateNewEvent(name, startDate, endDate, startTime, endTime)){

        if(ui->ReminderButton->isChecked()){
            if(ValidateNewReminder(ui->ReminderDateTimeEdit->date(), ui->ReminderDateTimeEdit->time())){
                Reminder reminder(ui->ReminderDateTimeEdit->date(), ui->ReminderDateTimeEdit->time(), true, pEvent);
                pEvent->SetReminder(reminder);
            }
            else {
                return;
            }
        }
        MainManager::eventList.PushBack(*pEvent);
        ReminderManager::GetInstance().ReminderHandler();
        hide();
    }
}

void AddEventWindow::on_CancelButton_clicked() {
    hide();
}

void AddEventWindow::on_ReminderButton_stateChanged(int arg1) {
    if(arg1 == 0){
        ui->ReminderDateTimeEdit->setDisabled(true);
    }
    else{
        ui->ReminderDateTimeEdit->setEnabled(true);
    }
}

bool AddEventWindow::ValidateNewEvent(QString name, QDate startDate, QDate endDate, QTime startTime, QTime endTime) {

    if(startDate > endDate || (startDate == endDate ? startTime > endTime : false)) {
        QMessageBox::warning(this, "", "Event can't end before starting!" , QMessageBox::Ok);
        return false;
    }

    if(name == ""){
        QMessageBox::warning(this, "", "Event must have a name!" , QMessageBox::Ok);
        return false;
    }
    return true;
}

bool AddEventWindow::ValidateNewReminder( QDate remindDay, QTime remindTime) {

    if(remindDay < QDate::currentDate() || (remindTime <= QTime::currentTime())) {
        QMessageBox::warning(this, "", "Reminder should be set in the future!" , QMessageBox::Ok);
        return false;
    }
    return true;
}
