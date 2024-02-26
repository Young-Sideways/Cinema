#ifndef FILM_H
#define FILM_H

#include <QObject>
#include <QTime>
#include <QVector>

#include "Limitation/agelimitation.h"
#include "Limitation/physiologicallimitation.h"
#include "genre.h"
#include "actor.h"
#include "producer.h"

class Film : public QObject
{
    Q_OBJECT

    QString m_title = QString();
    QString m_description = QString();
    QTime m_timing = QTime();

    QVector<Limitation*> m_limitations{};
    QVector<Genre*> m_genres{};

    QVector<Producer*> m_producers{};
    QVector<Actor*> m_actors{};

    double m_baseCost = 0.0;

public:
    explicit Film(QString& title, QString& description, QTime timing, QVector<Limitation*>& limitations, QVector<Producer*>& producers, QVector<Actor*>& actors, const double baseCost = 0.0, QObject *parent = nullptr);

    QVector<Limitation*>& limitations() { return m_limitations; }
    QVector<Genre*>& genres() { return m_genres; }
    QVector<Producer*>& producers() { return m_producers; }
    QVector<Actor*>& actors() { return m_actors; }

    QString limitationsStringify();
    QString genresStringify();
    QString producersStringify();
    QString actorsStringify();

    double getBaseCost();
};

#endif // FILM_H
