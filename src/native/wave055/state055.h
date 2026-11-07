#ifndef DQMJ3_NATIVE_STATE055_H
#define DQMJ3_NATIVE_STATE055_H

typedef unsigned int StateWord055;
typedef __UINTPTR_TYPE__ StateAddress055;

typedef struct StatePair055 {
    StateWord055 *cursor;
    StateWord055 *limit;
} StatePair055;

#if defined(_WIN32)
#define STATE_API055 __declspec(dllexport)
#else
#define STATE_API055
#endif

extern STATE_API055 StatePair055 state_pair055;
STATE_API055 StateWord055 state_write055(StateWord055 base,StateWord055 count,const StateWord055 *input);

_Static_assert(sizeof(StateWord055) == 4, "measured input word width");
_Static_assert(sizeof(StatePair055) == sizeof(void *) * 2, "declared pointer pair");

#endif
