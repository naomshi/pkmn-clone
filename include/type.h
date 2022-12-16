#ifndef TYPE_H_INCLUDED
#define TYPE_H_INCLUDED

typedef enum Effectiveness {
    normal,
    super,
    weak
} Effectiveness;

typedef enum Type {
    fire,
    grass,
    water,
    totalTypes
} Type;

int* initEffectivenessTable();

#endif