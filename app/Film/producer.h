#ifndef PRODUCER_H
#define PRODUCER_H

#include "../character.h"

class Producer : public Character
{
public:
    Producer(QString& name, QObject* parent = nullptr);
};

#endif // PRODUCER_H
