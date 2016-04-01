#ifndef CHK_H
#define CHK_H

#include <QObject>

class SignalBlockTest : public QObject
{
    Q_OBJECT
public:
    explicit SignalBlockTest(QObject *parent = 0);
    ~SignalBlockTest();

    void fire_event();

signals:
    void fire_signal();

public slots:
    void fire_slot();
};

#endif // CHK_H
