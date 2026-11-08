#include "particle_velocity.h"
typedef unsigned int uint32_t;
typedef unsigned char uint8_t;
typedef __SIZE_TYPE__ size_t;
#define offsetof(type, member) __builtin_offsetof(type, member)

#if defined(_WIN32)
#define PUBLIC019 __declspec(dllexport)
int _fltused = 0;
#else
#define PUBLIC019
#endif

typedef union FloatWord019 {
    uint32_t word;
    float number;
} FloatWord019;

typedef struct ParticleStorage019 {
    ParticleVelocity019 particle;
    uint8_t tail[128];
} ParticleStorage019;

typedef struct ResourceStorage019 {
    ParticleVelocityResource019 resource;
    uint8_t tail[128];
} ResourceStorage019;

static ParticleStorage019 particleStorage;
static ResourceStorage019 resourceStorage;
static FloatWord019 stepValue;
static const uint32_t layout[7] = {
    sizeof(ParticleStorage019), offsetof(ParticleVelocity019, resource),
    sizeof(ResourceStorage019), offsetof(ParticleVelocityResource019, retention),
    sizeof(void *), sizeof(ParticleVelocity019), sizeof(ParticleVelocityResource019)
};

PUBLIC019 void velocity_setup019(uint32_t index, uint32_t x, uint32_t y, uint32_t z, uint32_t retention, uint32_t step) {
    uint8_t *particle = (uint8_t *)&particleStorage;
    uint8_t *resource = (uint8_t *)&resourceStorage;
    FloatWord019 word;
    size_t i;
    for (i = 0; i < sizeof(particleStorage); ++i) particle[i] = (uint8_t)(0xa7u ^ (i * 17u + index * 3u));
    for (i = 0; i < sizeof(resourceStorage); ++i) resource[i] = (uint8_t)(0xa7u ^ (i * 17u + index * 3u));
    word.word = x;
    particleStorage.particle.velocity[0] = word.number;
    word.word = y;
    particleStorage.particle.velocity[1] = word.number;
    word.word = z;
    particleStorage.particle.velocity[2] = word.number;
    word.word = retention;
    resourceStorage.resource.retention = word.number;
    particleStorage.particle.resource = &resourceStorage.resource;
    stepValue.word = step;
}

PUBLIC019 void velocity_load019(const uint8_t *particleRaw, const uint8_t *resourceRaw, uint32_t step) {
    uint8_t *particle = (uint8_t *)&particleStorage;
    uint8_t *resource = (uint8_t *)&resourceStorage;
    size_t i;
    for (i = 0; i < sizeof(particleStorage); ++i) particle[i] = 0xd3;
    for (i = 0; i < sizeof(resourceStorage); ++i) resource[i] = 0xd3;
    for (i = 0; i < 0x144; ++i) particle[i] = particleRaw[i];
    for (i = 0; i < 32; ++i) particle[offsetof(ParticleVelocity019, resource) + sizeof(void *) + i] = particleRaw[0x148 + i];
    for (i = 0; i < 0x304; ++i) resource[i] = resourceRaw[i];
    particleStorage.particle.resource = &resourceStorage.resource;
    stepValue.word = step;
}

PUBLIC019 void velocity_apply019(void) {
    particle_velocity_scale019(&particleStorage.particle, stepValue.number);
}

PUBLIC019 void *velocity_particle019(void) { return &particleStorage; }
PUBLIC019 void *velocity_resource019(void) { return &resourceStorage; }
PUBLIC019 const uint32_t *velocity_layout019(void) { return layout; }
