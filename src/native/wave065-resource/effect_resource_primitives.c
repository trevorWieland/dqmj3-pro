#include "effect_resource_internal.h"
#include "effect_device.h"

static unsigned int quotient065(unsigned int value, unsigned int divisor)
{
    if (divisor == 0)
        __builtin_trap();
    unsigned long long remainder = 0;
    unsigned int result = 0;
    for (int bit = 31; bit >= 0; --bit) {
        remainder = remainder * 2 + ((value >> bit) & 1);
        if (remainder >= divisor) {
            remainder -= divisor;
            result |= 1u << bit;
        }
    }
    return result;
}

static void copy_bytes065(void *destination, const void *source, unsigned int bytes)
{
    unsigned char *out = destination;
    const unsigned char *in = source;
    for (unsigned int index = 0; index < bytes; ++index)
        out[index] = in[index];
}

static EffectPrimitive065 *primitive_new065(EffectResourceAllocator065 *allocator)
{
    EffectPrimitive065 *primitive = effect_resource_allocate065(allocator, EFFECT_RESOURCE_PRIMITIVE065,
        0x818, sizeof(*primitive), 128);
    if (primitive == 0)
        return 0;
    primitive->unknown_08 = 0;
    primitive->position_components = 0;
    primitive->position_bytes = 0;
    primitive->position_cpu = 0;
    primitive->position_device = 0;
    primitive->unknown_1c = 0;
    primitive->color_components = 0;
    primitive->color_bytes = 0;
    primitive->color_cpu = 0;
    primitive->color_device = 0;
    primitive->unknown_30 = 0;
    primitive->texcoord_components = 0;
    primitive->texcoord_bytes = 0;
    primitive->texcoord_cpu = 0;
    primitive->texcoord_device = 0;
    primitive->unknown_44 = 0;
    primitive->index_components = 0;
    primitive->index_bytes = 0;
    primitive->indices_cpu = 0;
    primitive->indices_device = 0;
    for (unsigned int slot = 0; slot < 12; ++slot)
        fn_0015d258(primitive->vertex_input.bindings + slot);
    for (unsigned int slot = 0; slot < 12; ++slot)
        fn_0015d210(primitive->vertex_input.constants + slot);
    primitive->vertex_input.cache_word = 0;
    for (unsigned int word = 0; word < 84; ++word)
        primitive->vertex_input.unknown_words[word] = 0;
    for (unsigned int slot = 0; slot < 12; ++slot) {
        primitive->vertex_input.attributes_enabled[slot] = 0;
        fn_0015d21c(primitive->vertex_input.bindings + slot);
        primitive->vertex_input.constants[slot].enabled = 0;
        for (unsigned int component = 0; component < 4; ++component)
            primitive->vertex_input.constants[slot].values[component] = 0.0f;
    }
    primitive->index_words.buffer_word = 0;
    primitive->index_words.element_count = 0;
    primitive->index_words.use_byte_indices = 0;
    primitive->enabled = 0;
    primitive->element_count = 0;
    primitive->position_effective = 0;
    primitive->color_effective = 0;
    primitive->texcoord_effective = 0;
    primitive->unknown_64 = 0;
    primitive->indices_effective = 0;
    primitive->storage = 0;
    primitive->color_repeat = 0;
    primitive->transfer_context = 0;
    primitive->commands = 0;
    primitive->command_count = 0;
    return primitive;
}

static unsigned char *primitive_buffer065(EffectResource065 *resource, EffectResourceAllocation065 role, unsigned int bytes)
{
    return effect_resource_allocate065(resource->allocator, role, bytes, bytes, 128);
}

static unsigned char *primitive_effective065(EffectPrimitive065 *primitive, unsigned char *cpu,
                                             unsigned int bytes, unsigned char **device)
{
    if (primitive->storage == 0)
        return cpu;
    *device = 0;
    unsigned char *effective = fn_005411ec(cpu, bytes, primitive->storage, 0x102, primitive->transfer_context, 0);
    if (effective != cpu)
        *device = effective;
    return effective;
}

static void primitive_commands065(EffectResource065 *resource, EffectPrimitive065 *primitive)
{
    static const EffectAttributeKey065 position = {{0, 1}, 0};
    static const EffectAttributeKey065 color = {{0, 1}, 2};
    static const EffectAttributeKey065 texcoord = {{0, 1}, 1};
    static const float white[4] = {1.0f, 1.0f, 1.0f, 1.0f};
    if (primitive->position_effective != 0)
        fn_0015d0e0(&primitive->vertex_input, &position, effect_device_word065(primitive->position_effective), 11);
    if (primitive->color_effective == 0)
        fn_0044f3b8(&primitive->vertex_input, &color, 4, white);
    else
        fn_0015d0e0(&primitive->vertex_input, &color, effect_device_word065(primitive->color_effective), 15);
    if (primitive->texcoord_effective != 0)
        fn_0015d0e0(&primitive->vertex_input, &texcoord, effect_device_word065(primitive->texcoord_effective), 7);
    if (primitive->indices_effective != 0) {
        primitive->index_words.buffer_word = effect_device_word065(primitive->indices_effective);
        primitive->index_words.use_byte_indices = 0;
        primitive->index_words.element_count = primitive->element_count;
    }
    EffectDeviceWord065 temporary[102] = {0};
    if (primitive->vertex_input.cache_word == 0) {
        EffectDeviceWord065 *end = fn_001830e0(&primitive->vertex_input, primitive->vertex_input.unknown_words);
        primitive->vertex_input.cache_word = (unsigned int)(end - primitive->vertex_input.unknown_words);
    }
    unsigned int words = primitive->vertex_input.cache_word;
    copy_bytes065(temporary, primitive->vertex_input.unknown_words, words * 4);
    EffectDeviceWord065 *end = fn_006cf79c(&primitive->vertex_input, temporary + words, &primitive->index_words);
    words = (unsigned int)(end - temporary);
    if (primitive->commands != 0 && primitive->command_count != 0)
        effect_resource_release065(resource->allocator, primitive->commands);
    primitive->commands = 0;
    primitive->command_count = 0;
    primitive->commands = effect_resource_allocate065(resource->allocator, EFFECT_RESOURCE_COMMANDS065, words * 4, words * 4, 128);
    if (primitive->commands != 0) {
        copy_bytes065(primitive->commands, temporary, words * 4);
        primitive->command_count = words;
    }
}

void effect_resource_primitives065(EffectResource065 *resource)
{
    const unsigned char *table = resource->serialized + effect_read_u32_065(resource->serialized + 0x2c);
    resource->primitive_count = effect_read_u32_065(table);
    const unsigned char *records = table + effect_read_u32_065(table + 8);
    const unsigned char *data = records + (__SIZE_TYPE__)resource->primitive_count * 80;
    if (resource->primitive_count == 0)
        return;
    resource->primitives = effect_resource_allocate065(resource->allocator, EFFECT_RESOURCE_PRIMITIVE_ARRAY065,
        resource->primitive_count * 4, (__SIZE_TYPE__)resource->primitive_count * sizeof(*resource->primitives), 128);
    for (unsigned int index = 0; index < resource->primitive_count; ++index) {
        const unsigned char *record = records + (__SIZE_TYPE__)index * 80;
        EffectPrimitive065 *primitive = primitive_new065(resource->allocator);
        resource->primitives[index] = primitive;
        const unsigned char *position = data + effect_read_u32_065(record + 8);
        const unsigned char *color = effect_read_u32_065(record + 24) ? data + effect_read_u32_065(record + 24) : 0;
        const unsigned char *texcoord = data + effect_read_u32_065(record + 40);
        const unsigned char *indices = data + effect_read_u32_065(record + 72);
        unsigned int color_bytes = 0;
        if (color != 0) {
            unsigned int stride = effect_read_u32_065(record + 20);
            unsigned int colors = quotient065(effect_read_u32_065(record + 16), stride);
            unsigned int positions = quotient065(effect_read_u32_065(record), effect_read_u32_065(record + 4));
            if (colors == 1 && positions != 1) {
                primitive->color_repeat = 1;
                color_bytes = stride * positions * 4;
            } else {
                color_bytes = effect_read_u32_065(record + 28);
            }
        }
        primitive->storage = resource->primitive_storage == 1 || resource->primitive_storage == 2 ? resource->primitive_storage : 0;
        primitive->transfer_context = resource->transfer_context;
        if (position != 0 && texcoord != 0 && indices != 0) {
            primitive->enabled = 1;
            primitive->element_count = effect_read_u32_065(record + 64);
            primitive->position_bytes = effect_read_u32_065(record + 12);
            primitive->position_components = 3;
            primitive->position_cpu = primitive_buffer065(resource, EFFECT_RESOURCE_POSITION065, primitive->position_bytes);
            copy_bytes065(primitive->position_cpu, position, primitive->position_bytes);
            primitive->position_effective = primitive_effective065(primitive, primitive->position_cpu, primitive->position_bytes, &primitive->position_device);
            if (primitive->position_cpu != 0)
                effect_device_flush065(primitive->position_cpu, primitive->position_bytes);
            primitive->color_components = 4;
            primitive->color_bytes = color == 0 ? primitive->element_count * 16 : color_bytes;
            primitive->color_cpu = primitive_buffer065(resource, EFFECT_RESOURCE_COLOR065, primitive->color_bytes);
            if (color == 0) {
                for (unsigned int offset = 0; offset < primitive->color_bytes; offset += 4)
                    effect_write_u32_065(primitive->color_cpu + offset, 0x3f800000);
            } else if (primitive->color_repeat) {
                for (unsigned int offset = 0; offset < color_bytes; offset += 16)
                    copy_bytes065(primitive->color_cpu + offset, color, 16);
            } else {
                copy_bytes065(primitive->color_cpu, color, color_bytes);
            }
            primitive->color_effective = primitive_effective065(primitive, primitive->color_cpu, primitive->color_bytes, &primitive->color_device);
            if (primitive->color_cpu != 0)
                effect_device_flush065(primitive->color_cpu, primitive->color_bytes);
            unsigned int texcoord_bytes = effect_read_u32_065(record + 44);
            primitive->texcoord_components = 2;
            primitive->texcoord_bytes = texcoord != 0 && texcoord_bytes != 0 ? texcoord_bytes : primitive->element_count * 8;
            primitive->texcoord_cpu = primitive_buffer065(resource, EFFECT_RESOURCE_TEXCOORD065, primitive->texcoord_bytes);
            if (texcoord == 0 || texcoord_bytes == 0) {
                for (unsigned int offset = 0; offset < primitive->texcoord_bytes; offset += 4)
                    effect_write_u32_065(primitive->texcoord_cpu + offset, 0x3f800000);
            } else {
                copy_bytes065(primitive->texcoord_cpu, texcoord, texcoord_bytes);
            }
            primitive->texcoord_effective = primitive_effective065(primitive, primitive->texcoord_cpu, primitive->texcoord_bytes, &primitive->texcoord_device);
            if (primitive->texcoord_cpu != 0)
                effect_device_flush065(primitive->texcoord_cpu, primitive->texcoord_bytes);
            if (indices != 0 && effect_read_u32_065(record + 76) != 0) {
                primitive->index_components = 1;
                primitive->index_bytes = primitive->element_count * 2;
                primitive->indices_cpu = primitive_buffer065(resource, EFFECT_RESOURCE_INDICES065, primitive->index_bytes);
                for (unsigned int item = 0; item < primitive->element_count; ++item) {
                    unsigned int value = effect_read_u32_065(indices + item * 4);
                    primitive->indices_cpu[item * 2] = (unsigned char)value;
                    primitive->indices_cpu[item * 2 + 1] = (unsigned char)(value >> 8);
                }
                primitive->indices_effective = primitive_effective065(primitive, primitive->indices_cpu, primitive->index_bytes, &primitive->indices_device);
            }
        }
        primitive_commands065(resource, primitive);
    }
}
