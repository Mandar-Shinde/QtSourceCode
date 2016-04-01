#include "mapper.h"
#include <qdebug.h>

Mapper::Mapper()
{

}

Mapper::~Mapper()
{

}

void Mapper::emit_event()
{
    emit signal_event();
}

void Mapper::slot_map(QString val)
{
    qDebug()<<" Calling "<<val;
}


