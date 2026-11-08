#include "arbiter062a.h"

const SdkWord062s arbiter_layout062a[] = {
    sizeof(void *), sizeof(ArbiterApi062a),
    __builtin_offsetof(ArbiterApi062a, index),
    __builtin_offsetof(ArbiterApi062a, wait_calls),
    __builtin_offsetof(ArbiterApi062a, wake_calls),
    __builtin_offsetof(ArbiterApi062a, wait_returns),
    sizeof(SdkFastMutex062s), __builtin_offsetof(SdkFastMutex062s, owner),
    __builtin_offsetof(SdkFastMutex062s, depth)
};
