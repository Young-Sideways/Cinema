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

    const Session* const & getSession() const;
    const Seat* const & getSeat() const;
    const Staff* const & getStaff() const;
    double getCost() const;

signals:

};

#endif // TICKET_H
