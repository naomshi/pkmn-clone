#include <stdio.h>

#include "pokemon.h"
#include "type.h"

int main() {
    Effectiveness effectiveness;

    int* effectivenessTable = initEffectivenessTable();

    const char* typeName[3] = {"fire", "grass", "water"};
    const char* effectivenessName[3] = {"normal", "super", "weak"};

    int e = getAttackEffectiveness(effectivenessTable, fire, water);

    printf("%s is %s against %s!\n", typeName[fire], effectivenessName[e], typeName[water]);

}