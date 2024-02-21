#ifndef CINEMA_H
#define CINEMA_H

#include <QObject>

class Cinema : public QObject
{
    Q_OBJECT
public:
    explicit Cinema(QObject *parent = nullptr);

signals:

};

#endif // CINEMA_H
