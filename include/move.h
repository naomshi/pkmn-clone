#ifndef MOVE_H_INCLUDED
#define MOVE_H_INCLUDED

#include "type.h"

typedef struct Move {
    char* name;
    int type;
    float dmgMultiplier;
} Move;

Move* initMoveData();

int getMoveIndex();

#endif