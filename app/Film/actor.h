#ifndef ACTOR_H
#define ACTOR_H

#include "../character.h"

class Actor : public Character
{
public:
    Actor(QString& name, QObject *parent = nullptr);;
};

#endif // ACTOR_H
