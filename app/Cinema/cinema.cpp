#include "cinema.h"

Cinema::Cinema(QString& name, QString& address, QObject *parent) : QObject(parent), m_name(name), m_address(address) {

}
