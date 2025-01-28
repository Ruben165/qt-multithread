#ifndef QMYTHREAD_H
#define QMYTHREAD_H

#include <QThread>

class QMyThread : public QThread
{
    Q_OBJECT

    QString m_strMsg;
    volatile bool m_fStopped = false;

protected:
    void run();

public:
    explicit QMyThread(QObject *parent = nullptr);
    void setMessage(const QString& msg);
    void stop() { m_fStopped = true; }
};

#endif // QMYTHREAD_H

// 2540124633 - Lie Reubensto
