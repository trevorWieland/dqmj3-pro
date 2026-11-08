#ifndef DQMJ3_EFFECT_RESOURCE065_H
#define DQMJ3_EFFECT_RESOURCE065_H

#include "effect_commands.h"
#include "effect_resource_memory.h"

typedef struct EffectResource065 EffectResource065;
typedef struct EffectPrimitive065 EffectPrimitive065;
typedef struct EffectEmitter065 EffectEmitter065;

typedef struct EffectResourceSystemView065 {
    unsigned char unknown_000[12];
    EffectResource065 **resources;
    unsigned char unknown_010[0x4cc];
    unsigned int texture_storage;
    unsigned int primitive_storage;
} EffectResourceSystemView065;

typedef struct EffectResourceOptions065 {
    unsigned char texture_storage;
    unsigned char primitive_storage;
    unsigned char unknown_02[2];
    void *transfer_context;
} EffectResourceOptions065;

typedef struct EffectTextureStorage065 {
    unsigned char *memory;
    EffectDeviceWord065 device_word;
    unsigned int bytes;
    unsigned int ownership;
} EffectTextureStorage065;

struct EffectEmitter065 {
    unsigned char *serialized;
    const char *name;
    EffectTextureStorage065 textures[3];
    unsigned char *user_data;
};

typedef struct EffectEmitterReference065 {
    unsigned int relative_offset;
    EffectEmitter065 *emitter;
} EffectEmitterReference065;

typedef struct EffectEmitterSetState065 {
    unsigned char *serialized;
    EffectEmitterReference065 *references;
    unsigned int count;
    unsigned int identifier;
} EffectEmitterSetState065;

typedef struct EffectEmitterSet065 {
    EffectEmitterSetState065 current;
    EffectEmitterSetState065 saved;
    const char *name;
    unsigned char unknown_flag;
    unsigned char unknown_padding[3];
    EffectShaderBinding065 **shaders;
    unsigned int shader_count;
    EffectPrimitive065 **primitives;
    unsigned int primitive_count;
    unsigned char *materials;
} EffectEmitterSet065;

struct EffectPrimitive065 {
    unsigned char enabled;
    unsigned char unknown_01[3];
    unsigned int element_count;
    unsigned int unknown_08;
    unsigned int position_components;
    unsigned int position_bytes;
    unsigned char *position_cpu;
    unsigned char *position_device;
    unsigned int unknown_1c;
    unsigned int color_components;
    unsigned int color_bytes;
    unsigned char *color_cpu;
    unsigned char *color_device;
    unsigned int unknown_30;
    unsigned int texcoord_components;
    unsigned int texcoord_bytes;
    unsigned char *texcoord_cpu;
    unsigned char *texcoord_device;
    unsigned int unknown_44;
    unsigned int index_components;
    unsigned int index_bytes;
    unsigned char *indices_cpu;
    unsigned char *indices_device;
    unsigned char *position_effective;
    unsigned char *color_effective;
    unsigned char *texcoord_effective;
    unsigned int unknown_64;
    EffectVertexInput065 vertex_input;
    EffectIndexWords065 index_words;
    unsigned char *indices_effective;
    unsigned char storage;
    unsigned char color_repeat;
    unsigned char unknown_80a[2];
    void *transfer_context;
    EffectDeviceWord065 *commands;
    unsigned int command_count;
};

struct EffectResource065 {
    const void *unidentified_identity;
    EffectResourceSystemView065 *system;
    unsigned int identifier;
    unsigned char *serialized;
    char *names;
    unsigned char *textures;
    EffectEmitterSet065 *sets;
    EffectResourceAllocator065 *allocator;
    EffectShaderBinding065 **shaders;
    unsigned int shader_count;
    EffectPrimitive065 **primitives;
    unsigned int primitive_count;
    unsigned char texture_storage;
    unsigned char primitive_storage;
    unsigned char unknown_32[2];
    void *transfer_context;
    unsigned char *materials;
};

_Static_assert(sizeof(void *) != 4 || sizeof(EffectResource065) == 60, "target resource field view");
_Static_assert(sizeof(void *) != 4 || sizeof(EffectEmitterSet065) == 60, "target runtime set field view");
_Static_assert(sizeof(void *) != 4 || sizeof(EffectPrimitive065) == 0x818, "target complete primitive storage");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(EffectPrimitive065, vertex_input) == 0x68, "primitive vertex view");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(EffectResourceSystemView065, resources) == 12, "system resource table view");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(EffectResourceSystemView065, texture_storage) == 0x4dc, "system texture option view");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(EffectResourceSystemView065, primitive_storage) == 0x4e0, "system primitive option view");

#endif
