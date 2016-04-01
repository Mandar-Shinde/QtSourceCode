#include <QCoreApplication>
#include <qdatetime.h>
#include <windows.h>
#include <QSettings>
#include <stdio.h>
#include <QProcess>
#include <QDebug>
#include <SignalBlockTest.h>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    SignalBlockTest c,d;
    QObject::connect(&c,SIGNAL(fire_signal()),&d,SLOT(fire_slot()));
    qDebug()<<" Object name : "<< c.objectName();

    qDebug()<<" ----";
    c.blockSignals(true);
    c.fire_event();
    qDebug()<<" ";

    qDebug()<<" ----";
    c.blockSignals(false);
    c.fire_event();
    qDebug()<<" ----";

    return a.exec();
}


