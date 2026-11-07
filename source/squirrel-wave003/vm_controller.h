#ifndef DQMJ3_SQUIRREL_WAVE003_VM_CONTROLLER_H
#define DQMJ3_SQUIRREL_WAVE003_VM_CONTROLLER_H

#include "../squirrel-wave002/array_views.h"

typedef struct {
    VmStackView frame;
    unsigned char unknown_0038[84];
    SqState *shared;
} SqControllerVM;

_Static_assert(__builtin_offsetof(SqControllerVM, frame) == 0, "VM prefix identity");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqControllerVM, shared) == 140, "Original shared-state pointer");

void sq_assert_array(SqU32 condition, const SqObject *object) __attribute__((noreturn));
SqI32 fn_001b33dc(SqControllerVM *vm);

#endif
