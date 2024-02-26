#ifndef STAFF_H
#define STAFF_H

#include "../character.h"

class Staff : public Character
{

public:
    explicit Staff(QString& name, QObject *parent = nullptr);
};

#endif // STAFF_H
