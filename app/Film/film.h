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

public:
    explicit Film(QString& title, QString& description, QTime timing, QVector<Limitation*>& limitations, QObject *parent = nullptr);

    QVector<Limitation*>& limitations() { return m_limitations; }
    QVector<Genre*>& genres() { return m_genres; }

    QString limitationsStringify() {
        if (m_limitations.empty())
            return QString(tr("No limitations"));

        return std::accumulate(
            m_limitations.begin() + 1,
            m_limitations.end(),
            QString(tr("Limitations: %1").arg(m_limitations[0] ? m_limitations[0]->getName() : "")),
            [](const QString& a, const Limitation* b) {
                return (b ? (a + ", " + b->getName()) : "");
            });
    }
    QString genresStringify() {
        if (m_genres.empty())
            return QString(tr("No genres"));

        return std::accumulate(
            m_genres.begin() + 1,
            m_genres.end(),
            QString(tr("Genres: %1").arg(m_genres[0] ? m_genres[0]->getTitle() : "")),
            [](const QString& a, const Genre* b) {
                return (b ? (a + ", " + b->getTitle()) : "");
            });
    }
};

#endif // FILM_H
