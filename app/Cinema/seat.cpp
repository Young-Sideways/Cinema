#include "seat.h"

Seat::Seat(Seat::Type type, QObject *parent) : QObject(parent), m_type(type), m_busy(false) {}

Seat::Type Seat::getType() const {
    return m_type;
}

bool Seat::getBusy() const {
    return m_busy;
}

double Seat::getCostMultipier() const {
    switch (m_type) {
    case Type::Normal:
        return 1.0;
    case Type::VIP:
        return 1.6;
    default:
        return 1.0;
    }
}

void Seat::setType(Seat::Type type) {
    if (m_type != type)
        emit typeChanged(m_type = type);
}
void Seat::setBusy(const bool busy) {
    if (m_busy != busy)
        emit busyChanged(m_busy = busy);
}
