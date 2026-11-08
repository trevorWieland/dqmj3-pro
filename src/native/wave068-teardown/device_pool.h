#ifndef DQMJ3_FILE_DEVICE_POOL068_H
#define DQMJ3_FILE_DEVICE_POOL068_H

#include "../wave067-queue/file_queue.h"

#include "../wave069-device/device069.h"

typedef struct EffectFileDevicePoolServices068 {
    void *context;
    void (*lock)(void *context, void *mutex);
    void (*unlock)(void *context, void *mutex);
} EffectFileDevicePoolServices068;

typedef struct EffectFileDevicePool068 {
    unsigned char unknown_00[36];
    EffectFileDevice068 *free_devices;
    unsigned int unknown_28;
    unsigned int live_count;
    EffectQueueMutex067 mutex;
    unsigned int unknown_3c;
} EffectFileDevicePool068;

typedef struct EffectFileDevicePoolContext068 {
    void *unknown_00;
    EffectFileDevicePool068 *pool;
    const EffectFileDevicePoolServices068 *services;
} EffectFileDevicePoolContext068;

void effect_file_device_pool_release068(EffectFileDevicePoolContext068 *state, EffectFileDevice068 *device);

_Static_assert(sizeof(EffectFileDevice068) == (sizeof(void *) == 4 ? 304 : 392), "device logical and native storage");
_Static_assert(__builtin_offsetof(EffectFileDeviceOperations068, destroy) == 13 * sizeof(void *), "device destructor virtual slot");
_Static_assert(__builtin_offsetof(EffectFileDevicePool068, free_devices) == (sizeof(void *) == 4 ? 36 : 40), "device pool free head");
_Static_assert(__builtin_offsetof(EffectFileDevicePool068, live_count) == (sizeof(void *) == 4 ? 44 : 52), "device pool live count");
_Static_assert(__builtin_offsetof(EffectFileDevicePool068, mutex) == (sizeof(void *) == 4 ? 48 : 56), "device pool mutex");

#endif
