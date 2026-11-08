#ifndef DQMJ3_FILE_DEVICE_POOL072_TYPES_H
#define DQMJ3_FILE_DEVICE_POOL072_TYPES_H

#include "device_types072.h"

typedef struct EffectFileDevicePoolServices068 {
    void *context;
    void (*lock)(void *context, void *mutex);
    void (*unlock)(void *context, void *mutex);
} EffectFileDevicePoolServices068;

typedef EffectFilePool072 EffectFileDevicePool068;

typedef struct EffectFileDevicePoolContext068 {
    void *unknown_00;
    EffectFileDevicePool068 *pool;
    const EffectFileDevicePoolServices068 *services;
} EffectFileDevicePoolContext068;

void effect_file_device_pool_release068(EffectFileDevicePoolContext068 *state, EffectFileDevice068 *device);

#endif
