#ifndef SHIP_H
#define SHIP_H

#include "item.h"

#define OTYPE_SHIP (0x00000011)

typedef struct Ship /* extends: Moveable */ {
    // extends: Moveable
    Moveable parent;
    // Collisionable
    Location loca;
    Volume size;
    Volume sbox;
    // Moveable
    Velocity velo;
    // ... more fields
} Ship;


#endif // SHIP_H