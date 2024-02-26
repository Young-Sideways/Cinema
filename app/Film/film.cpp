#include "film.h"

Film::Film(QString &title, QString &description, QTime timing, QVector<Limitation *> &limitations, QVector<Producer*>& producers, QVector<Actor*>& actors, const double baseCost, QObject *parent)
    : QObject(parent),
    m_title(title),
    m_description(description),
    m_timing(timing),
    m_limitations{limitations},
    m_producers{producers},
    m_actors{actors},
    m_baseCost(baseCost)
{

}

QString Film::limitationsStringify() {
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

QString Film::genresStringify() {
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

QString Film::producersStringify()
{
    if (m_producers.empty())
        return QString(tr("No producers"));

    return std::accumulate(
                m_producers.begin() + 1,
                m_producers.end(),
                QString(tr("Producers: %1").arg(m_producers[0] ? m_producers[0]->getName() : "")),
            [](const QString& a, const Producer* b) {
        return (b ? (a + ", " + b->getName()) : "");
    });
}

QString Film::actorsStringify()
{
    if (m_actors.empty())
        return QString(tr("No actors"));

    return std::accumulate(
                m_actors.begin() + 1,
                m_actors.end(),
                QString(tr("Actors: %1").arg(m_actors[0] ? m_actors[0]->getName() : "")),
            [](const QString& a, const Actor* b) {
        return (b ? (a + ", " + b->getName()) : "");
    });
}

double Film::getBaseCost() {
    return m_baseCost;
}
