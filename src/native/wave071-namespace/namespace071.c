#include "namespace071.h"

static unsigned long long namespace_key071(const unsigned char *name)
{
    unsigned long long key = 0;
    for (unsigned int index = 0; index < 8; ++index) {
        signed char value = (signed char)name[index];
        if (value == ':') return key;
        key = (key << 8) | (unsigned long long)(long long)value;
    }
    return 0;
}

static unsigned long long namespace_normalize071(EffectFileNamespace071 *state, const unsigned char *name)
{
    unsigned char local[8];
    for (unsigned int index = 0; index < 8; ++index) {
        unsigned char value = name[index];
        if (!value || value == ':') {
            local[index] = ':';
            return namespace_key071(local);
        }
        local[index] = value;
    }
    state->fatal(state->context);
    return 0;
}

EffectFileNamespaceEntry071 *effect_file_namespace_construct071(EffectFileNamespaceEntry071 *entry)
{
    entry->key = 0;
    entry->device = 0;
    return entry;
}

unsigned int effect_file_namespace_register071(EffectFileNamespace071 *state, const unsigned char *name,
    EffectFileDevice068 *device, int config, int borrowed)
{
    unsigned long long key = namespace_normalize071(state, name);
    if (!key) return 0xe0e046bcu;
    for (unsigned int index = 0; index < 32; ++index) {
        EffectFileNamespaceEntry071 *entry = state->entries + index;
        if (!entry->device) {
            entry->key = key;
            entry->device = device;
            entry->config = (unsigned char)config;
            entry->borrowed = (unsigned char)borrowed;
            return 0;
        }
        if (entry->key == key) return 0xc82044b4u;
    }
    return 0xd8604659u;
}

unsigned int effect_file_namespace_alias071(EffectFileNamespace071 *state, const unsigned char *name,
    const unsigned char *target)
{
    unsigned long long key = namespace_key071(target);
    if (key) {
        for (unsigned int index = 0; index < 32; ++index) {
            EffectFileNamespaceEntry071 *entry = state->entries + index;
            if (entry->key == key)
                return effect_file_namespace_register071(state, name, entry->device, (signed char)entry->config, 1);
        }
    }
    return 0xc8804465u;
}

unsigned int effect_file_namespace_unmount071(EffectFileNamespace071 *state, const unsigned char *name)
{
    unsigned long long key = namespace_normalize071(state, name);
    for (unsigned int index = 0; index < 32; ++index) {
        EffectFileNamespaceEntry071 *entry = state->entries + index;
        if (entry->key == key) {
            EffectFileDevice068 *device = entry->device;
            entry->device = 0;
            entry->key = 0;
            if (!device) return 0xc8804465u;
            if (!entry->borrowed) {
                device->link.operations->release(device);
                if (state->default_device == device) state->default_device = 0;
            }
            return 0;
        }
    }
    return 0xc8804465u;
}
