#ifndef SHIP_H
#define SHIP_H

#include <fptc.h>

typedef struct ColorParam {
    uint8_t bg : 4;
    uint8_t fg : 4;
};


typedef struct PixelParam {
    fpt x;
    fpt y;
} PixelParam;

typedef struct LineParam {
    fpt x1;
    fpt y1;
    fpt x2;
    fpt y2;
} LineParam;

typedef struct RectParam {
    fpt x1;
    fpt y1;
    fpt x2;
    fpt y2;
} RectParam;

typedef struct TriParam {
    fpt x1;
    fpt y1;
    fpt x2;
    fpt y2;
    fpt x3;
    fpt y3;
} TriParam;

typedef struct CircleParam {
    fpt x;
    fpt y;
    fpt r;
} CircleParam;

#endif // SHIP_H