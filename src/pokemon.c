#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "pokemon.h"
#include "move.h"
#include "globals.h"

Pokemon* initPokemonData(Move* moveData) {
    Type type;
    int dataSize;
    int allocSize;
    Pokemon* allocatedPokemonData;

    Pokemon pokemonData[] = {
        {
            "Bulbasaur",
            grass,
            100,
            25,
            getMoveIndex(moveData, "Vine Whip")
        },
        {
            "Squirtle",
            water,
            100,
            25,
            getMoveIndex(moveData, "Bubble")
        },
        {
            "Charmander",
            fire,
            100,
            25,
            getMoveIndex(moveData, "Ember")
        }
    };

    dataSize = sizeof(pokemonData);

    allocSize = dataSize + sizeof(Pokemon);

    allocatedPokemonData = (Pokemon*)malloc(allocSize); // Allocate extra move slot to check for end of array

    memset(allocatedPokemonData, 0, allocSize);

    memcpy(allocatedPokemonData, pokemonData, dataSize);

    return allocatedPokemonData;
};

void printPokemonData(Pokemon* pokemonData, Move* moveData) {
    int i = 0;

    while(1) {
        Pokemon currentPokemon = pokemonData[i];

        if(currentPokemon.name == 0){
            return;
        }

        printf("Name: %s\n", currentPokemon.name);
        printf("Type: %s\n", globalTypeNames(i));
        printf("Hitpoints: %d\n", currentPokemon.hitpoints);
        printf("Attack damage: %d\n", currentPokemon.attackDamage);
        printf("Move: %s\n\n", moveData[currentPokemon.move].name);

        i++;
    }
}