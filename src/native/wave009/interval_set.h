#ifndef DQMJ3_WAVE009_INTERVAL_SET_H
#define DQMJ3_WAVE009_INTERVAL_SET_H

typedef struct IntervalNode {
    unsigned int unknown_00;
    struct IntervalNode *next;
    unsigned short first;
    unsigned short last;
} IntervalNode;

typedef struct IntervalSet {
    void *destination;
    unsigned char kind;
    unsigned short value;
    IntervalNode intervals;
} IntervalSet;

enum {
    INTERVAL_SET_SINGLE = 2,
    INTERVAL_SET_LIST = 3
};

_Static_assert(sizeof(unsigned int) == 4 && sizeof(unsigned short) == 2 && sizeof(unsigned char) == 1, "scalar widths");

#endif
