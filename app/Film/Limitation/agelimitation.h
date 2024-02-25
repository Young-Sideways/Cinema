#ifndef AGELIMITATION_H
#define AGELIMITATION_H

#include "limitation.h"

#include <QMap>

class AgeLimitation : public Limitation
{
public:
    enum class Type {
        None,
        Pegi3,
        Pegi7,
        Pegi12,
        Pegi16,
        Pegi18,
        PegiSpecial
    };

    explicit AgeLimitation(AgeLimitation::Type type = AgeLimitation::Type::None, QObject *parent = nullptr);

private:
    AgeLimitation::Type m_type = AgeLimitation::Type::None;
    static const QMap<AgeLimitation::Type, QString> typeNames;

public:
    const QString& getName() const override;
};

#endif // AGELIMITATION_H
