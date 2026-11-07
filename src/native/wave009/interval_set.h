#ifndef DQMJ3_WAVE009_INTERVAL_SET_H
#define DQMJ3_WAVE009_INTERVAL_SET_H

struct FixedArena;

typedef struct IntrusiveLink {
    struct IntrusiveLink *previous;
    struct IntrusiveLink *next;
} IntrusiveLink;

typedef struct IntervalNode {
    IntrusiveLink link;
    unsigned short first;
    unsigned short last;
} IntervalNode;

typedef struct IntervalRing {
    IntrusiveLink head;
    struct FixedArena *owner;
} IntervalRing;

typedef union IntervalValue {
    unsigned short character;
    unsigned char control_bit;
} IntervalValue;

typedef struct IntervalSet {
    void *destination;
    unsigned char kind;
    IntervalValue value;
    IntervalRing intervals;
} IntervalSet;

enum {
    INTERVAL_SET_EPSILON = 1,
    INTERVAL_SET_SINGLE = 2,
    INTERVAL_SET_LIST = 3,
    INTERVAL_SET_CONTROL = 4
};

_Static_assert(sizeof(unsigned int) == 4 && sizeof(unsigned short) == 2 && sizeof(unsigned char) == 1, "scalar widths");

#endif
