#ifndef TICKET_H
#define TICKET_H

#include <QObject>

#include "session.h"
#include "Cinema/seat.h"
#include "Cinema/staff.h"

class Ticket : public QObject
{
    Q_OBJECT

    const Session* m_session = nullptr;
    const Seat* m_seat = nullptr;
    const Staff* m_staff = nullptr;

public:
    explicit Ticket(const Session* session = nullptr, const Seat* seat = nullptr, const Staff* staff = nullptr, QObject *parent = nullptr);

    const Session* const & getSession() const {
        return m_session;
    }
    const Seat* const & getSeat() const {
        return m_seat;
    }
    const Staff* const & getStaff() const {
        return m_staff;
    }
signals:

};

#endif // TICKET_H
