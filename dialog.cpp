#include "dialog.h"
#include <QThread>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    setupUi(this);
    threadB.setMessage("B");
    threadY.setMessage("Y");
    threadE.setMessage("E");
}

Dialog::~Dialog() {}

void Dialog::on_pushButtonB_clicked() {
    if(pushButtonB->text().startsWith("Start")) {
        qDebug("\nStart B\n");
        pushButtonB->setText("Stop B");
        threadB.start();
    } else {
        qDebug("\nStop B\n");
        pushButtonB->setText("Start B");
        threadB.stop();
    }
}

void Dialog::on_pushButtonY_clicked() {
    if(pushButtonY->text().startsWith("Start")) {
        qDebug("\nStart Y\n");
        pushButtonY->setText("Stop Y");
        threadY.start();
    } else {
        qDebug("\nStop Y\n");
        pushButtonY->setText("Start Y");
        threadY.stop();
    }
}

void Dialog::on_pushButtonE_clicked() {
    if(pushButtonE->text().startsWith("Start")) {
        qDebug("\nStart E\n");
        pushButtonE->setText("Stop E");
        threadE.start();
    } else {
        qDebug("\nStop E\n");
        pushButtonE->setText("Start E");
        threadE.stop();
    }
}

// 2540124633 - Lie Reubensto
