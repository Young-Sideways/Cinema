#ifndef LIMITATION_H
#define LIMITATION_H

#include <QObject>

#include <QString>

class Limitation : public QObject
{
    Q_OBJECT

public:
    explicit Limitation(QObject *parent = nullptr) : QObject{parent} {}
    virtual ~Limitation() = default;

public:
    virtual const QString& getName() const = 0;
};

#endif // LIMITATION_H
