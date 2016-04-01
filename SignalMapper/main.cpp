#include <QCoreApplication>
#include <qsignalmapper.h>
#include "mapper.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Mapper m,event1,event2,event3;
    QSignalMapper* sigmap = new QSignalMapper();

    // map data to a object
    sigmap->setMapping((QObject*)&event1,QString("event_1_data"));
    sigmap->setMapping((QObject*)&event2,QString("event_2_data"));
    sigmap->setMapping((QObject*)&event3,QString("event_3_data"));

    // connect datamapping to
     QObject::connect((QObject)event1, SIGNAL(signal_event()), &sigmap, SLOT (map()));
//     QObject::connect((QObject)event2, SIGNAL(signal_event()), &sigmap, SLOT (map()));
//     QObject::connect((QObject)event3, SIGNAL(signal_event()), &sigmap, SLOT (map()));

//    // execute mapped signals
//     QObject::connect(sigmap, SIGNAL(mapped(QString)),&m, SLOT(slot_map(QString)));

//    event1.emit_event();
//    event3.emit_event();
//    event2.emit_event();
//    event3.emit_event();
//    event1.emit_event();


    return a.exec();
}
