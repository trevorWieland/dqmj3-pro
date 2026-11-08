#include "effect_resource_internal.h"
#include "effect_device.h"

static void resource_texture_release065(EffectResourceAllocator065 *allocator, EffectTextureStorage065 *texture,
                                unsigned int converted_bytes)
{
    if (texture->memory != 0) {
        if (converted_bytes == 0)
            effect_resource_release065(allocator, texture->memory);
        else
            effect_device_release065(texture->memory, 0x101);
        texture->memory = 0;
    }
}

static void primitive_release065(EffectResourceAllocator065 *allocator, EffectPrimitive065 *primitive)
{
    if (primitive->position_cpu != 0) {
        effect_resource_release065(allocator, primitive->position_cpu);
        primitive->position_cpu = 0;
    }
    if (primitive->position_device != 0) {
        effect_device_release065(primitive->position_device, 0x102);
        primitive->position_device = 0;
    }
    if (primitive->color_cpu != 0) {
        effect_resource_release065(allocator, primitive->color_cpu);
        primitive->color_cpu = 0;
    }
    if (primitive->color_device != 0) {
        effect_device_release065(primitive->color_device, 0x102);
        primitive->color_device = 0;
    }
    if (primitive->texcoord_cpu != 0) {
        effect_resource_release065(allocator, primitive->texcoord_cpu);
        primitive->texcoord_cpu = 0;
    }
    if (primitive->texcoord_device != 0) {
        effect_device_release065(primitive->texcoord_device, 0x102);
        primitive->texcoord_device = 0;
    }
    if (primitive->indices_cpu != 0) {
        effect_resource_release065(allocator, primitive->indices_cpu);
        primitive->indices_cpu = 0;
    }
    if (primitive->indices_device != 0) {
        effect_device_release065(primitive->indices_device, 0x102);
        primitive->indices_device = 0;
    }
    primitive->element_count = 0;
    primitive->enabled = 0;
    primitive->position_effective = 0;
    primitive->color_effective = 0;
    primitive->texcoord_effective = 0;
    primitive->unknown_64 = 0;
    primitive->indices_effective = 0;
    if (primitive->commands != 0)
        effect_resource_release065(allocator, primitive->commands);
    effect_resource_release065(allocator, primitive);
}

void fn_00160c68(EffectResource065 *resource, EffectResourceAllocator065 *allocator)
{
    if (allocator == 0)
        allocator = resource->allocator;
    unsigned int count = effect_read_u32_065(resource->serialized + 8);
    for (unsigned int index = 0; (int)index < (int)count; ++index) {
        EffectEmitterSet065 *set = resource->sets + index;
        unsigned int emitter_count = effect_read_u32_065(set->current.serialized + 0x10);
        for (unsigned int item = 0; (int)item < (int)emitter_count; ++item) {
            EffectEmitter065 *emitter = set->current.references[item].emitter;
            resource_texture_release065(allocator, emitter->textures, effect_read_u32_065(emitter->serialized + 0xb0));
            resource_texture_release065(allocator, emitter->textures + 1, effect_read_u32_065(emitter->serialized + 0x12c));
            if (effect_read_u32_065(emitter->serialized) == 1 && (effect_read_u32_065(emitter->serialized + 0x548) & 1))
                resource_texture_release065(allocator, emitter->textures + 2, effect_read_u32_065(emitter->serialized + 0x620));
        }
    }
    for (unsigned int index = 0; index < resource->shader_count; ++index) {
        fn_0017db84(resource->shaders[index], &allocator->base);
        effect_resource_release065(allocator, resource->shaders[index]);
    }
    effect_resource_release065(allocator, resource->shaders);
    if (resource->sets != 0) {
        effect_resource_release065(allocator, resource->sets);
        resource->sets = 0;
    }
    if (resource->primitives != 0) {
        for (unsigned int index = 0; index < resource->primitive_count; ++index)
            primitive_release065(allocator, resource->primitives[index]);
        effect_resource_release065(allocator, resource->primitives);
    }
    resource->system = 0;
}
