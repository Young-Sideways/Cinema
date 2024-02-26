#include "session.h"

Session::Session(Hall *hall, Film *film, QObject *parent)
    : QObject(parent),
      m_hall(hall),
      m_film(film)
{

}

Hall * const &Session::getHall() const {
    return m_hall;
}

Film * const &Session::getFilm() const {
    return m_film;
}

void Session::setHall(const Hall *hall) {
    if (m_hall != hall)
        emit hallChanged(m_hall = const_cast<Hall*>(hall));
}

void Session::setFilm(const Film *film) {
    if (m_film != film)
        emit filmChanged(m_film = const_cast<Film*>(film));
}
