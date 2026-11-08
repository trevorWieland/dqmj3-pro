#include "effect_resource_internal.h"

void effect_resource_shaders065(EffectResource065 *resource)
{
    unsigned char *table = resource->serialized + effect_read_u32_065(resource->serialized + 0x1c);
    resource->shader_count = effect_read_u32_065(table);
    const unsigned char *record = table + effect_read_u32_065(table + 16);
    resource->shaders = effect_resource_allocate065(resource->allocator, EFFECT_RESOURCE_SHADER_ARRAY065,
        resource->shader_count * 4, (__SIZE_TYPE__)resource->shader_count * sizeof(*resource->shaders), 128);
    for (unsigned int index = 0; index < resource->shader_count; ++index) {
        EffectShaderBinding065 *binding = effect_resource_allocate065(resource->allocator, EFFECT_RESOURCE_SHADER065,
            40, sizeof(*binding), 128);
        if (binding != 0)
            fn_0053a688(binding);
        resource->shaders[index] = binding;
        for (unsigned int key = 0; key < 6; ++key)
            binding->keys[key] = effect_read_u32_065(record + key * 4);
        fn_0053e2c4(binding);
        record += 44;
    }
}
