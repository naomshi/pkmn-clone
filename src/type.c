#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "type.h"

int* initEffectivenessTable() {
    Type types;
    Effectiveness effectiveness;
    int totalAllocations;
    int* effectivenessTable;

    // calculate total space needed
    totalAllocations = pow(totalTypes, 2);

    // allocate table
    effectivenessTable = malloc(sizeof(int) * totalAllocations);

    // initialise the table
    for(int i = 0; i < totalAllocations; i++) {
        effectivenessTable[i] = normal;
    }

    // insert specific weaknesses and strengths
    effectivenessTable[totalTypes * fire  + grass] = super;
    effectivenessTable[totalTypes * fire  + water] = weak;
    effectivenessTable[totalTypes * water + fire] = super;
    effectivenessTable[totalTypes * water + grass] = weak;
    effectivenessTable[totalTypes * grass + water] = super;
    effectivenessTable[totalTypes * grass + fire] = weak;

    return effectivenessTable;
}

int getAttackEffectiveness(int* effectivenessTable, int attackType, int targetType){
    Effectiveness effectiveness;
    
    return effectivenessTable[totalTypes * attackType + targetType];
}