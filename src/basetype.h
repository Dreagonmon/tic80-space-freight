#ifndef BASETYPE_H
#define BASETYPE_H

#include <stdint.h>
#include <fptc.h>

#define OBJ_T(T) (* T)
#define OBJ_AS(O,T) ((* T) O)

typedef struct Location {
    int32_t w_x; // world x
    int32_t w_y; // world y
    fpt l_x; // local x
    fpt l_y; // local y
    fpt rot; // rotation (radian)
} Location;

typedef struct Volume {
    fpt w; // width
    fpt h; // height
} Volume;

typedef struct Velocity {
    fpt v_x; // velocity x
    fpt v_y; // velocity y
    fpt v_r; // velocity rotation
    fpt a_x; // acceleration x
    fpt a_y; // acceleration y
    fpt a_r; // acceleration rotation
} Velocity;

typedef struct Object {
    uint32_t otyp; /* object type */
} Object;

#endif // BASETYPE_H