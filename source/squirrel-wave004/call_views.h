#ifndef DQMJ3_SQUIRREL_WAVE004_CALL_VIEWS_H
#define DQMJ3_SQUIRREL_WAVE004_CALL_VIEWS_H

#include "../squirrel-wave002/array_views.h"

typedef struct SqCallVM SqCallVM;
typedef struct SqNativeClosure SqNativeClosure;

_Static_assert(__CHAR_BIT__ == 8, "Measured eight-bit error literals");

typedef struct {
    const SqVTable *vtable;
    SqU32 references;
    void *weak;
} SqWeakPrefix;

typedef struct {
    void *instruction;
    SqObject *literals;
    SqObject closure;
    void *generator;
    SqI32 traps;
    SqI32 previous_base;
    SqI32 previous_top;
    SqI32 target;
    SqI32 calls;
    SqI32 root;
    unsigned short varargs_size;
    unsigned short varargs_base;
} SqCallInfo;

typedef struct {
    SqCallInfo *values;
    SqU32 size;
    SqU32 capacity;
} SqCallVector;

typedef struct {
    void *values;
    SqU32 size;
    SqU32 capacity;
} SqOpaqueVector;

struct SqCallVM {
    VmStackView frame;
    SqObject root_table;
    SqObject last_error;
    SqObject error_handler;
    SqObject debug_hook;
    SqObject temporary;
    SqCallInfo *call_stack;
    SqI32 call_count;
    SqI32 allocated_calls;
    SqCallVector call_data;
    SqOpaqueVector traps;
    SqCallInfo *current;
    void *foreign;
    SqState *shared;
    SqI32 native_calls;
};

struct SqNativeClosure {
    SqRef reference;
    SqState *shared;
    SqI32 parameter_check;
    SqOpaqueVector type_checks;
    SqVector outers;
    SqObject environment;
    SqI32 (*function)(SqCallVM *);
    SqObject name;
};

_Static_assert(sizeof(void *) != 4 || sizeof(SqCallInfo) == 48, "Native call frame size");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqCallVM, call_stack) == 96, "Native call stack pointer");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqCallVM, current) == 132, "Native current frame");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqCallVM, shared) == 140, "Native shared state");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqCallVM, native_calls) == 144, "Native call depth");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqNativeClosure, function) == 60, "Native closure callback");
_Static_assert(sizeof(void *) != 4 || sizeof(SqWeakPrefix) == 12, "Native weak reference prefix");

static inline SqVector sq_call_stack_vector(SqCallVM *vm)
{
    SqVector vector;
    __builtin_memcpy(&vector, &vm->frame.stack, sizeof(vector));
    return vector;
}

static inline void sq_call_publish_stack(SqCallVM *vm, SqVector vector)
{
    __builtin_memcpy(&vm->frame.stack, &vector, sizeof(vector));
}

void sq_call_error(SqCallVM *vm, const char *message);
void sq_call_type_error(SqCallVM *vm, SqI32 index, SqI32 mask, SqU32 type);
void sq_assert_array(SqU32 condition, const SqObject *object) __attribute__((noreturn));
void fn_0019d408(SqCallVector *vector, SqU32 requested, const SqCallInfo *fill);
void fn_00198230(SqCallVM *vm, const SqObject *error);
_Bool fn_00196f6c(SqCallVM *vm, SqNativeClosure *closure, SqI32 arguments, SqI32 base, SqObject *result, _Bool *suspend);
SqI32 fn_001b33dc(SqCallVM *vm);

#endif
