#ifndef DQMJ3_SQUIRREL_WAVE002_ARRAY_VIEWS_H
#define DQMJ3_SQUIRREL_WAVE002_ARRAY_VIEWS_H

#include "../../src/native/wave005/vm_views.h"

typedef VmU32 SqU32;
typedef VmI32 SqI32;
typedef VmRefNode SqRef;
typedef VmRefVTable SqVTable;
typedef VmValue SqValue;
typedef VmObject SqObject;
typedef struct SqState SqState;

typedef struct {
    SqObject *values;
    SqU32 size;
    SqU32 capacity;
} SqVector;

typedef struct {
    SqRef reference;
    SqState *shared;
    SqVector vector;
} SqArray;

struct SqState {
    unsigned char unknown_0000[68];
    SqRef *chain;
};

_Static_assert(sizeof(SqU32) == 4, "Original unsigned word width");
_Static_assert(sizeof(void *) != 4 || sizeof(SqObject) == 8, "Original tagged object stride");
_Static_assert(sizeof(void *) != 4 || sizeof(SqArray) == 36, "Original array allocation extent");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqArray, vector) == 24, "Original vector offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqState, chain) == 68, "Original shared chain offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqRef, previous) == 16, "Original chain backlink");

extern const SqVTable sq_array_vtable;
void *sq_allocate(SqU32 bytes);
void *sq_reallocate(void *pointer, SqU32 old_bytes, SqU32 new_bytes);
void fn_0019d320(SqVector *vector, SqU32 requested, const SqObject *fill);
SqArray *fn_00665a44(SqState *state, SqU32 requested);
void fn_0019e8c4(SqRef **head, SqRef *node);

#endif
