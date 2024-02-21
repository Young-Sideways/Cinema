#ifndef CINEMA_H
#define CINEMA_H

#include <QObject>

#include <QString>
#include <QMap>
#include <QVector>
#include <QSharedPointer>
#include <QWeakPointer>

#include "hall.h"

class Cinema : public QObject
{
    Q_OBJECT

    Q_DISABLE_COPY(Cinema);

    const QString m_name;
    const QString m_address;

    QVector<QWeakPointer<Hall*>> halls;
public:
    explicit Cinema(QString& name, QString& address, QObject *parent = nullptr);
    ~Cinema() = default;

signals:

};

#endif // CINEMA_H
