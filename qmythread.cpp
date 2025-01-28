#include "qmythread.h"
#include <QThread>
#include <QtDebug>
#include <iostream>
using namespace std;

void QMyThread::run() {
    while(!m_fStopped) {
        cout << m_strMsg.toStdString() << flush;
        QThread::sleep(1);
    }
    m_fStopped = false;
}

QMyThread::QMyThread(QObject *parent) : QThread{parent} {
    m_fStopped = false;
}

void QMyThread::setMessage(const QString& msg) {
    m_strMsg = msg;
}

// 2540124633 - Lie Reubensto
