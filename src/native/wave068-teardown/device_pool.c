#include "device_pool.h"

void effect_file_device_pool_release068(EffectFileDevicePoolContext068 *state, EffectFileDevice068 *device)
{
    device->link.operations->destroy(device);
    EffectFileDevicePool068 *pool = state->pool;
    const EffectFileDevicePoolServices068 *services = state->services;
    services->lock(services->context, &pool->mutex);
    device->link.next = pool->free_devices;
    pool->free_devices = device;
    --pool->live_count;
    services->unlock(services->context, &pool->mutex);
}
