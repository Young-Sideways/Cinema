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

    QVector<QVector<QSharedPointer<Seat>>> m_seats;

public:
    explicit Hall(int index, int rows, int places, QObject *parent = nullptr);
    ~Hall() = default;

    QWeakPointer<Seat> getSeat(int row, int place) const;
    QVector<QWeakPointer<Seat>> getAvailable() {
        return QVector<QWeakPointer<Seat>>();
    }

public slots:
    void setSeat(int row, int place, Seat* seat);

signals:
    void on_seat_changed(QWeakPointer<Seat> seat);
};

#endif // HALL_H
