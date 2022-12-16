#ifndef POKEMON_H_INCLUDED
#define POKEMON_H_INCLUDED

#include "type.h"
#include "move.h"

struct Pokemon {
    char* name;
    Type type;
    int hitpoints;
    int attackDamage;
    Move* move;
};

#endif