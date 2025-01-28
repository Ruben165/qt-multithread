#ifndef DIALOG_H
#define DIALOG_H

#include "./ui_dialog.h"
#include <QDialog>
#include "qmythread.h"

class Dialog : public QDialog, private Ui::Dialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
private:
    QMyThread threadB, threadY, threadE;
private slots:
    void on_pushButtonB_clicked();
    void on_pushButtonY_clicked();
    void on_pushButtonE_clicked();
};
#endif // DIALOG_H

// 2540124633 - Lie Reubensto
