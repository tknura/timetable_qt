#include "AddEventWindowController.h"
#include "ui_addeventwindow.h"

AddEventWindow::AddEventWindow(QDate selectedDate, QWidget *parent) : QDialog(parent), ui(new Ui::AddEventWindow) {
    ui->setupUi(this);
    ui->ReminderDateTimeEdit->setDisabled(true);

    ui->StartDateTimeEdit->setDate(selectedDate);
    ui->StartDateTimeEdit->setTime(QTime::currentTime());
    ui->EndDateTimeEdit->setDate(selectedDate);
    ui->EndDateTimeEdit->setTime(QTime::currentTime().addSecs(3600));
    ui->ReminderDateTimeEdit->setDate(selectedDate);
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
    Event* pEvent = nullptr;

    if(ValidateNewEvent(name, startDate, endDate, startTime, endTime)){

        if(ui->ReminderButton->isChecked()){
            QDate remindDay = ui->ReminderDateTimeEdit->date();
            QTime remindTime = ui->ReminderDateTimeEdit->time();
            pEvent = new Event(priority, startDate, endDate, startTime, endTime, name.toStdString(), accompanion.toStdString(), place.toStdString(), Reminder(remindDay, remindTime, true) );
        }
        else {
            pEvent = new Event(priority, startDate, endDate, startTime, endTime, name.toStdString(), accompanion.toStdString(), place.toStdString());
        }

        MainManager::eventList.PushBack(*pEvent);
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

    if(startDate > endDate || startTime > endTime){
        QMessageBox::warning(this, "", "Event can't end before starting!" , QMessageBox::Ok);
        return false;
    }

    if(name == ""){
        QMessageBox::warning(this, "", "Event must have a name!" , QMessageBox::Ok);
        return false;
    }
    return true;
}

