#ifndef DQMJ3_EFFECT_TEXTURE_RESOURCE065_H
#define DQMJ3_EFFECT_TEXTURE_RESOURCE065_H

/* The system services this unit consumes; see platform/port/README.md. */
#include "../../../platform/port/graphics.h"
#include "../../../platform/port/memory.h"

typedef struct EffectTextureServices065 {
    void *(*allocate)(void *context, unsigned int region, unsigned int option,
                       unsigned int selector, unsigned int bytes);
    void (*release)(void *context, unsigned int region, unsigned int option,
                     unsigned int selector, void *memory);
    void (*report)(void *context, unsigned int status, unsigned int detail);
    void *context;
} EffectTextureServices065;

int effect_bind_texture_services065(const EffectTextureServices065 *services);
const EffectTextureServices065 *effect_texture_services065(void);
unsigned int fn_0044e7b4(unsigned int format, unsigned int width, unsigned int height,
                         const unsigned char *source, unsigned char *destination, unsigned int *device_format);
unsigned int fn_00535da8(unsigned int format, unsigned int width, unsigned int height,
                         const unsigned char *source, unsigned char *destination);
unsigned int fn_00535dec(unsigned int format);

#endif
