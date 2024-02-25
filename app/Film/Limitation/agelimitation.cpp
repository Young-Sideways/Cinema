#include "agelimitation.h"

#include <QCoreApplication>

#define tr(text) QCoreApplication::translate(text, "limitations")

const QMap<AgeLimitation::Type, QString> AgeLimitation::typeNames = {
    { AgeLimitation::Type::Pegi3       , tr("Pegi 3")       },
    { AgeLimitation::Type::Pegi7       , tr("Pegi 7")       },
    { AgeLimitation::Type::Pegi12      , tr("Pegi 12")      },
    { AgeLimitation::Type::Pegi16      , tr("Pegi 16")      },
    { AgeLimitation::Type::Pegi18      , tr("Pegi 18")      },
    { AgeLimitation::Type::PegiSpecial , tr("Pegi Special") }
};

AgeLimitation::AgeLimitation(AgeLimitation::Type type, QObject *parent)
    : Limitation{parent},
    m_type(type)
{}

const QString &AgeLimitation::getName() const
{
    return AgeLimitation::typeNames.value(m_type, "");
}
