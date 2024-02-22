#ifndef FILM_H
#define FILM_H

#include <QObject>
#include <QTime>
#include <QVector>

#include "limitation/agelimitation.h"
#include "limitation/physlimitation.h"

class Film : public QObject
{
    Q_OBJECT

    QString title;
    QString description;
    QTime timing;

    QVector<Limitation*> limitations;


public:
    explicit Film(QString& title, QString& description, QTime timing = QTime(), QVector<Limitation*>& limitations, QObject *parent = nullptr);


signals:

};

#endif // FILM_H
