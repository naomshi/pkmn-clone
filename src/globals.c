#include "globals.h"

char* globalTypeNames(int index) {
    char* typeNames[] = {"fire", "grass", "water"};

    return typeNames[index];
};

char* globalEffectivenessNames(int index) {
    char* effectivenessNames[] = {"normal", "super", "weak"};

    return effectivenessNames[index];
}