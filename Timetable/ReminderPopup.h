#ifndef REMINDERPOPUP_H
#define REMINDERPOPUP_H

#include <QDialog>

namespace Ui {
    class ReminderPopup;
}

class ReminderPopup : public QDialog
{
    Q_OBJECT

public:
    explicit ReminderPopup(QDialog *parent = nullptr);
    ~ReminderPopup();

    Ui::ReminderPopup *GetUi() const;
    void SetUi(Ui::ReminderPopup *value);

private slots:
    void on_CloseButton_clicked();

private:
    Ui::ReminderPopup *ui;
};

#endif // REMINDERPOPUP_H
