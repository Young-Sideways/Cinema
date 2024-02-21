#ifndef HALL_H
#define HALL_H

#include <QObject>

#include <QString>
#include <QMap>
#include <QVector>
#include <QSharedPointer>
#include <QWeakPointer>

#include "seat.h"

class Hall : public QObject
{
    Q_OBJECT

    Q_DISABLE_COPY(Hall);

    int m_index;

    QVector<QVector<QSharedPointer<Seat*>>> m_seats;

public:
    explicit Hall(int index, QObject *parent = nullptr);
    ~Hall() = default;

    QWeakPointer<Seat*> getSeat(int row, int seat) const {
        return QWeakPointer<Seat*>(m_seats.at(row).at(seat));
    }
signals:

};

#endif // HALL_H
