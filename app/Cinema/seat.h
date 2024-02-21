#ifndef SEAT_H
#define SEAT_H

#include <QObject>

class Seat : public QObject
{
    Q_OBJECT
public:
    explicit Seat(QObject *parent = nullptr);

signals:

};

#endif // SEAT_H
