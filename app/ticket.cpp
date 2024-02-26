#include "ticket.h"

Ticket::Ticket(const QTime time, const Session *session, const Seat *seat, const Staff *staff, QObject *parent)
    : QObject(parent),
      m_session(session),
      m_seat(seat),
      m_staff(staff),
      m_startTime(time)
{

}

const Session * const &Ticket::getSession() const {
    return m_session;
}

const Seat * const &Ticket::getSeat() const {
    return m_seat;
}

const Staff * const &Ticket::getStaff() const {
    return m_staff;
}

double Ticket::getCost() const {
    return m_session->getFilm()->getBaseCost() * m_seat->getCostMultipier();
}

const QTime &Ticket::getStartTime() const {
    return m_startTime;
}
