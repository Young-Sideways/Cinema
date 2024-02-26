#include "character.h"

Character::Character(QString& name, QObject *parent) : QObject(parent), m_name(name)
{

}

const QString &Character::getName() const { return m_name; }

void Character::setName(const QString &name) {
    if (!m_name.compare(name))
        emit nameChanged(m_name = name);
}
