#ifndef ITEM_H
#define ITEM_H

#include "basetype.h"

typedef struct Collisionable {
    // extends: Object
    Object parent;
    // Collisionable
    Location loca; // center location
    fpt cdist_min; // minimal collision distance
    fpt cdist_max; // maxmal collision distance
    // ... more fields
} Collisionable;


typedef struct Moveable {
    // extends: Collisionable
    Collisionable parent;
    // Moveable
    Velocity velo;
    // ... more fields
} Moveable;

#endif // ITEM_H