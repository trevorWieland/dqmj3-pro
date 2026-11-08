#include "effect_resource_internal.h"

static const unsigned char resource_unidentified_identity065;

void fn_0053fe5c(EffectResource065 *resource, EffectResourceAllocator065 *allocator,
                  unsigned char *image, unsigned int identifier, EffectResourceSystemView065 *system,
                  const EffectResourceOptions065 *options)
{
    resource->system = system;
    resource->shaders = 0;
    resource->allocator = allocator;
    resource->shader_count = 0;
    resource->primitives = 0;
    resource->primitive_count = 0;
    resource->identifier = identifier;
    resource->serialized = image;
    resource->names = (char *)image + effect_read_u32_065(image + 0x10);
    resource->textures = image + effect_read_u32_065(image + 0x14);
    if (effect_read_u32_065(image + 8) != 0) {
        if (options == 0) {
            resource->texture_storage = (unsigned char)system->texture_storage;
            resource->primitive_storage = (unsigned char)system->primitive_storage;
            resource->transfer_context = 0;
        } else {
            resource->texture_storage = options->texture_storage;
            resource->primitive_storage = options->primitive_storage;
            resource->transfer_context = options->transfer_context;
        }
        effect_resource_shaders065(resource);
        effect_resource_primitives065(resource);
        effect_resource_sets065(resource);
    }
}

EffectResource065 *fn_005411a4(EffectResource065 *resource, EffectResourceAllocator065 *allocator,
                               unsigned char *image, unsigned int identifier, EffectResourceSystemView065 *system,
                               const EffectResourceOptions065 *options)
{
    resource->unidentified_identity = &resource_unidentified_identity065;
    resource->texture_storage = 0;
    resource->primitive_storage = 0;
    resource->transfer_context = 0;
    fn_0053fe5c(resource, allocator, image, identifier, system, options);
    return resource;
}

void fn_0053ea1c(EffectResourceSystemView065 *system, EffectResourceAllocator065 *allocator,
                  unsigned char *image, unsigned int slot, const EffectResourceOptions065 *options)
{
    EffectResource065 *old = system->resources[slot];
    if (old != 0) {
        EffectResourceAllocator065 *owner = old->allocator;
        fn_00160c68(old, owner);
        effect_resource_release065(owner, system->resources[slot]);
        system->resources[slot] = 0;
    }
    EffectResource065 *resource = effect_resource_allocate065(allocator, EFFECT_RESOURCE_HEADER065,
        60, sizeof(*resource), 128);
    if (resource != 0)
        resource = fn_005411a4(resource, allocator, image, slot, system, options);
    system->resources[slot] = resource;
}
