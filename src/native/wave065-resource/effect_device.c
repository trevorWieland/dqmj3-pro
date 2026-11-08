#include "effect_device.h"
#include "effect_texture.h"

static const EffectDeviceServices065 *active_device_services065;

int effect_bind_device_services065(const EffectDeviceServices065 *services)
{
    active_device_services065 = services;
    return services != 0;
}

EffectDeviceWord065 effect_device_word065(const void *memory)
{
    return active_device_services065->address_word(active_device_services065->context, memory);
}

void effect_device_flush065(const void *memory, unsigned int bytes)
{
    active_device_services065->flush(active_device_services065->context, memory, bytes);
}

void effect_device_release065(void *memory, unsigned int option)
{
    const EffectDeviceServices065 *services = active_device_services065;
    if (services->contains(services->context, 0x20000, memory) ||
        services->contains(services->context, 0x30000, memory))
        services->enqueue_release(services->context, memory, option);
}

unsigned char *fn_005411ec(unsigned char *source, unsigned int bytes, unsigned int storage,
                            unsigned int option, void *queue, unsigned int allow_null)
{
    if (bytes != 0)
        effect_device_flush065(source, bytes);
    if (storage != 1 && storage != 2)
        return source;
    const EffectTextureServices065 *memory = effect_texture_services065();
    unsigned char *destination = memory->allocate(memory->context, storage == 1 ? 0x20000 : 0x30000, option, 0, bytes);
    if (destination == 0 && allow_null == 0)
        return source;
    active_device_services065->enqueue_transfer(active_device_services065->context, queue, source, destination, bytes);
    return destination;
}
