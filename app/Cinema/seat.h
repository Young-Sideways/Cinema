#ifndef SEAT_H
#define SEAT_H

#include <QObject>

class Seat : public QObject {
    Q_OBJECT
    Q_DISABLE_COPY(Seat);

public:
    enum class Type {
        Normal,
        VIP
    };

private:

    Type m_type;
    bool m_busy;

public:
    explicit Seat(Type type = Type::Normal, QObject *parent = nullptr);
    ~Seat() = default;

    Type getType() const;
    bool getBusy() const;
    double getCostMultipier() const;

public slots:
    void setBusy(const bool busy);
    void setType(Type type);

signals:
    void busyChanged(const bool busy);
    void typeChanged(const Type type);
};

#endif // SEAT_H
