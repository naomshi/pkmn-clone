#include <stdio.h>
#include <stdlib.h>

#include "pokemon.h"
#include "type.h"
#include "move.h"

int main() {
    Move* moveData = initMoveData();
    Pokemon* pokemonData = initPokemonData(moveData);

    printPokemonData(pokemonData, moveData);
}