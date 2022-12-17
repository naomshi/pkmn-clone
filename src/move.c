#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "move.h"

Move* initMoveData() {
    Type type;
    int dataSize;
    int allocSize;
    Move* allocatedMoveData;

    Move moveData[] = {
        {
            "Vine Whip",
            grass,
            1.2
        },
        {
            "Bubble",
            water,
            1.2
        },
        {
            "Ember",
            fire,
            1.2
        }
    };

    dataSize = sizeof(moveData);

    allocSize = dataSize + sizeof(Move);

    allocatedMoveData = (Move*)malloc(allocSize); // Allocate extra move slot to check for end of array

    memset(allocatedMoveData, 0, allocSize);

    memcpy(allocatedMoveData, moveData, dataSize);

    return allocatedMoveData; 
}

int getMoveIndex(Move* moveData, char* moveName){
    int i = 0;

    while(1){
        if(moveData[i].name == 0) {
            printf("ERR: Reached end of moveData array without finding move. Exiting...");
            exit(1);
        }

        if(strcmp(moveData[i].name, moveName) == 0){
            return i;
        }

        i++;
    }
}