#ifndef DQMJ3_EFFECT_DEVICE_RESOURCE065_H
#define DQMJ3_EFFECT_DEVICE_RESOURCE065_H

/* The system services this unit consumes; see platform/port/README.md. */
#include "../../../platform/port/graphics.h"
#include "../../../platform/port/memory.h"
#include "../../../platform/port/thread.h"

#include "../wave065/effect_shader.h"

typedef struct EffectDeviceServices065 {
    EffectDeviceWord065 (*address_word)(void *context, const void *memory);
    void (*flush)(void *context, const void *memory, unsigned int bytes);
    void (*enqueue_transfer)(void *context, void *queue, const void *source, void *destination, unsigned int bytes);
    int (*contains)(void *context, unsigned int region, const void *memory);
    void (*enqueue_release)(void *context, void *memory, unsigned int option);
    void *context;
} EffectDeviceServices065;

int effect_bind_device_services065(const EffectDeviceServices065 *services);
EffectDeviceWord065 effect_device_word065(const void *memory);
void effect_device_flush065(const void *memory, unsigned int bytes);
void effect_device_release065(void *memory, unsigned int option);
unsigned char *fn_005411ec(unsigned char *source, unsigned int bytes, unsigned int storage,
                            unsigned int option, void *queue, unsigned int allow_null);

#endif
