#include "genre.h"

Genre::Genre(QString &title, QString &description, QObject *parent) : QObject(parent), m_title(title), m_description(description) {}

const QString &Genre::getTitle() const {
    return m_title;
}

const QString Genre::getDescription() const {
    return m_description;
}

void Genre::setTitle(const QString title) {
    if (m_title.compare(title))
        emit titleChanged(m_title = title);
}

void Genre::setDescription(const QString description) {
    if (m_description.compare(description))
        emit descriptionChanged(m_description = description);
}
