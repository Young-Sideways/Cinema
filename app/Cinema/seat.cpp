#include "seat.h"

Seat::Seat(Seat::Type type, QObject *parent) : QObject(parent), m_type(type), m_busy(false) {}

Seat::Type Seat::getType() const {
    return m_type;
}

bool Seat::getBusy() const {
    return m_busy;
}

void Seat::setType(Seat::Type type) {
    if (m_type != type)
        emit on_type_changed(m_type = type);
}
void Seat::setBusy(const bool busy) {
    if (m_busy != busy)
        emit on_busy_changed(m_busy = busy);
}
