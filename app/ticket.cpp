#include "ticket.h"

Ticket::Ticket(const Session *session, const Seat *seat, const Staff *staff, QObject *parent)
    : QObject(parent),
      m_session(session),
      m_seat(seat),
      m_staff(staff)
{

}
