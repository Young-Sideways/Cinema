#ifndef GENRE_H
#define GENRE_H

#include <QObject>

class Genre : public QObject
{
    Q_OBJECT

    QString m_title = QString();
    QString m_description = QString();

public:
    explicit Genre(QString& title, QString& description, QObject *parent = nullptr);

    const QString& getTitle() const;
    const QString getDescription() const;

signals:
    void titleChanged(const QString& title);
    void descriptionChanged(const QString& description);

public slots:
    void setTitle(const QString title);
    void setDescription(const QString description);
};

#endif // GENRE_H
