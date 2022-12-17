#ifndef POKEMON_H_INCLUDED
#define POKEMON_H_INCLUDED

#include "type.h"
#include "move.h"

typedef struct Pokemon {
    char* name;
    int type;
    int hitpoints;
    int attackDamage;
    int move;
} Pokemon;

Pokemon* initPokemonData(Move* moveData);

void printPokemonData(Pokemon* pokemonData, Move* moveData);

#endif