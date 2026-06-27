#ifndef ACCOMMODATION_H
#define ACCOMMODATION_H
#include "Entity.h"

class Accommodation : public virtual Entity {
public:
    virtual void allocateRoom() = 0;
    virtual void vacateRoom() = 0;
    virtual ~Accommodation() = default;
};
#endif