#include "hall.h"

#include <QCoreApplication>

#define tr(text) QCoreApplication::translate("Hall", text)

Hall::Hall(int index, int rows, int places, QObject *parent) : QObject(parent), m_index(index)
{
    //m_seats = QVector<QVector<QSharedPointer<Seat*>>>(rows);
    //for (int i = 0; i < m_seats.size(); ++i)
    //    m_seats[i] = QVector<QSharedPointer<Seat*>>(places);
    m_seats.reserve(rows);
    for (int i = 0; i < m_seats.size(); ++i)
        m_seats[i].reserve(places);
}

QWeakPointer<Seat> Hall::getSeat(int row, int place) const {
    if (row < 0 || row >= m_seats.size())
        throw tr("Seat row out of hall rows range");
    if (place < 0 || place >= m_seats[row].size())
        throw tr("Seat place out of hall places range");
    return QWeakPointer<Seat>(m_seats.at(row).at(place));
}

void Hall::setSeat(int row, int place, Seat *seat) {
    if (seat == nullptr)
        throw tr("Seat cannot be null");
    if (row < 0 || row >= m_seats.size())
        throw tr("Seat row out of hall rows range");
    if (place < 0 || place >= m_seats[row].size())
        throw tr("Seat place out of hall places range");
    if (m_seats[row][place].data() != seat)
        emit on_seat_changed(m_seats[row][place] = QSharedPointer<Seat>(seat));
}
