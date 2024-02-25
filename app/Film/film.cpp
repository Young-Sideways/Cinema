#include "film.h"

Film::Film(QString &title, QString &description, QTime timing, QVector<Limitation *> &limitations, QObject *parent)
    : QObject(parent),
    m_title(title),
    m_description(description),
    m_timing(timing),
    m_limitations{limitations}
{

}
