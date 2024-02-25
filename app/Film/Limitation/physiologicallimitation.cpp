#include "physiologicallimitation.h"

#include <QCoreApplication>

#define tr(text) QCoreApplication::translate(text, "limitations")

const QMap<PhysiologicalLimitation::Type, QString> PhysiologicalLimitation::typeNames = {
    { PhysiologicalLimitation::Type::Theme             , tr("Change theme content")        },
    { PhysiologicalLimitation::Type::Sex               , tr("Sexual content")              },
    { PhysiologicalLimitation::Type::Violence          , tr("Violence content")            },
    { PhysiologicalLimitation::Type::Language          , tr("Bad language content")        },
    { PhysiologicalLimitation::Type::Horror            , tr("Horror content")              },
    { PhysiologicalLimitation::Type::Drugs             , tr("Drugs content")               },
    { PhysiologicalLimitation::Type::ImitativeBehavior , tr("Imitative behavior  content") }
};

PhysiologicalLimitation::PhysiologicalLimitation(PhysiologicalLimitation::Type type, QObject *parent)
    : Limitation{parent},
    m_type(type)
{}

const QString &PhysiologicalLimitation::getName() const
{
    return PhysiologicalLimitation::typeNames.value(m_type, "");
}

