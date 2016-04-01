#ifndef MAPPER_H
#define MAPPER_H

#include <QObject>

class Mapper : public QObject
{
    Q_OBJECT

public:
    Mapper();
    ~Mapper();

    void emit_event();

signals:
    void signal_event();

public slots:
    void slot_map(QString);

};


#endif // MAPPER_H
