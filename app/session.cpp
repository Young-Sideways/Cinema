#include "session.h"

Session::Session(const QTime time, Hall *hall, Film *film, QObject *parent)
    : QObject(parent),
      m_hall(hall),
      m_film(film),
      m_startTime(time)
{

}

Hall * const &Session::getHall() const {
    return m_hall;
}

Film * const &Session::getFilm() const {
    return m_film;
}

const QTime &Session::getStartTime() const {
    return m_startTime;
}

void Session::setHall(const Hall *hall) {
    if (m_hall != hall)
        emit hallChanged(m_hall = const_cast<Hall*>(hall));
}

void Session::setFilm(const Film *film) {
    if (m_film != film)
        emit filmChanged(m_film = const_cast<Film*>(film));
}

void Session::setStartTime(const QTime startTime) {
    if (m_startTime != startTime)
        emit startTimeChanged(m_startTime = startTime);
}
