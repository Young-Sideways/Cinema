#ifndef HALL_H
#define HALL_H

#include <QObject>

class Hall : public QObject
{
    Q_OBJECT
public:
    explicit Hall(QObject *parent = nullptr);

signals:

};

#endif // HALL_H
