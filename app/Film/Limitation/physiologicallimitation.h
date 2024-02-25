#ifndef PHYSIOLOGICALLIMITATION_H
#define PHYSIOLOGICALLIMITATION_H

#include "limitation.h"

#include <QMap>

class PhysiologicalLimitation : public Limitation
{
public:
    enum class Type {
        None,
        Theme,
        Sex,
        Violence,
        Language,
        Horror,
        Drugs,
        ImitativeBehavior
    };

    explicit PhysiologicalLimitation(PhysiologicalLimitation::Type type = Type::None, QObject *parent = nullptr);

private:
    PhysiologicalLimitation::Type m_type = PhysiologicalLimitation::Type::None;
    static const QMap<PhysiologicalLimitation::Type, QString> typeNames;

public:
    const QString& getName() const override;
};

#endif // PHYSIOLOGICALLIMITATION_H
