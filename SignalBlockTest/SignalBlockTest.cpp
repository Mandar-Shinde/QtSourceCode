#include "SignalBlockTest.h"
#include <qdebug.h>

SignalBlockTest::SignalBlockTest(QObject *parent) : QObject(parent)
{
    this->setObjectName("SignalBlockTest");
}

SignalBlockTest::~SignalBlockTest()
{

}

void SignalBlockTest::fire_event()
{
    qDebug()<< " called fire_event + emmiting fire_signal";
    emit fire_signal();
}


void SignalBlockTest::fire_slot()
{
    qDebug()<< " called fire_slot";
}


