#ifndef FILM_H
#define FILM_H

#include <QObject>
#include <QTime>
#include <QVector>

#include "Limitation/agelimitation.h"
#include "Limitation/physiologicallimitation.h"
#include "genre.h"

class Film : public QObject
{
    Q_OBJECT

    QString m_title = QString();
    QString m_description = QString();
    QTime m_timing = QTime();

    QVector<Limitation*> m_limitations{};
    QVector<Genre*> m_genres{};

    double m_baseCost = 0.0;

public:
    explicit Film(QString& title, QString& description, QTime timing, QVector<Limitation*>& limitations, const double baseCost = 0.0, QObject *parent = nullptr);

    QVector<Limitation*>& limitations() { return m_limitations; }
    QVector<Genre*>& genres() { return m_genres; }

    QString limitationsStringify();
    QString genresStringify();

    double getBaseCost();
};

#endif // FILM_H
