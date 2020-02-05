#include "ReminderPopup.h"
#include "ui_ReminderPopup.h"

ReminderPopup::ReminderPopup(QDialog *parent) : QDialog(parent), ui(new Ui::ReminderPopup) {
    QWidget::setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    ui->setupUi(this);
}

ReminderPopup::~ReminderPopup() {
    delete ui;
}

void ReminderPopup::on_CloseButton_clicked() {
    hide();
}

Ui::ReminderPopup *ReminderPopup::GetUi() const {
    return ui;
}

void ReminderPopup::SetUi(Ui::ReminderPopup *value) {
    ui = value;
}
