#ifndef CHARACTER_H
#define CHARACTER_H

#include <QObject>

#include <QString>

class Character : public QObject
{
    Q_OBJECT

    QString m_name = QString(tr("No name"));
public:
    explicit Character(QString& name, QObject *parent = nullptr);

    const QString& getName() const;

signals:
    void nameChanged(const QString& name);

public slots:
    void setName(const QString& name);

};

#endif // CHARACTER_H
