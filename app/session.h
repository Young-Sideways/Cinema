#ifndef SESSION_H
#define SESSION_H

#include <QObject>

#include "Cinema/hall.h"
#include "Film/film.h"

class Session : public QObject
{
    Q_OBJECT

    Hall* m_hall = nullptr;
    Film* m_film = nullptr;

    QTime m_startTime = QTime();

public:
    explicit Session(const QTime time = QTime(), Hall* hall = nullptr, Film* film = nullptr, QObject *parent = nullptr);

    Hall* const & getHall() const;
    Film* const & getFilm() const;
    QTime const & getStartTime() const;

signals:
    void hallChanged(const Hall* hall);
    void filmChanged(const Film* film);
    void startTimeChanged(const QTime& time);

public slots:
    void setHall(const Hall* hall);
    void setFilm(const Film* film);
    void setStartTime(const QTime startTime);
};

#endif // SESSION_H
