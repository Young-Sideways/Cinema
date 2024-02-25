#ifndef FILM_H
#define FILM_H

#include <QObject>
#include <QTime>
#include <QVector>

#include "Limitation/agelimitation.h"
#include "Limitation/physiologicallimitation.h"

class Film : public QObject
{
    Q_OBJECT

    QString m_title;
    QString m_description;
    QTime m_timing;

    QVector<Limitation*> m_limitations;
    QVector<Genre> m_genres;

public:
    explicit Film(QString& title, QString& description, QTime timing, QVector<Limitation*>& limitations, QObject *parent = nullptr);

    QString getLimitations() {
        if (m_limitations.empty())
            return QString(tr("No limitations"));

        return std::accumulate(
            m_limitations.begin() + 1,
            m_limitations.end(),
            QString(tr("Limitations: %1").arg(m_limitations[0]->getName())),
            [](const QString& a, const Limitation* b) {
                return a + ", " + b->getName();
            });
    }

};

#endif // FILM_H
