#include "native_effect065_resource_graph_fixture.c"
#include "../src/native/wave065-owner/effect_owner.h"

typedef struct EffectOriginalBankFixture065 {
    EffectResourceSystemView065 *system;
    EffectAllocator065 *allocator;
    EffectResourceSlot065 *begin;
    EffectResourceSlot065 *end;
} EffectOriginalBankFixture065;

typedef struct EffectOriginalRegistrationFixture065 {
    unsigned int unknown_00;
    EffectOriginalBankFixture065 *bank;
} EffectOriginalRegistrationFixture065;

typedef struct EffectOwnerFixture065 {
    EffectRegistrationView065 source;
    EffectOriginalRegistrationFixture065 original;
    EffectRegistrationBankView065 source_bank;
    EffectOriginalBankFixture065 original_bank;
    EffectResourceSlot065 slots[4];
    unsigned int release_hook_enabled;
    unsigned int release_hook_slot;
    unsigned int release_hook_calls;
} EffectOwnerFixture065;

static EffectOwnerFixture065 owner_fixture065;

static void owner_release_hook065(void)
{
    if (owner_fixture065.release_hook_enabled) {
        owner_fixture065.release_hook_enabled = 0;
        ++owner_fixture065.release_hook_calls;
        graph_fixture065.resources[owner_fixture065.release_hook_slot] = 0;
        graph_event065(9, owner_fixture065.release_hook_slot, 0, 0, 0, 0);
    }
}

static void owner_source_release065(void *context, void *memory)
{
    graph_source_release065(context, memory);
    owner_release_hook065();
}

static void owner_original_release065(EffectAllocator065 *allocator, void *memory)
{
    graph_original_release065(allocator, memory);
    owner_release_hook065();
}

static const EffectResourceMemory065 owner_source_memory065 = {
    graph_source_allocate065, owner_source_release065, &graph_fixture065
};

static const EffectAllocatorOperations065 owner_original_operations065 = {
    graph_uninvoked065, graph_uninvoked065, graph_original_allocate065, owner_original_release065
};

void effect_owner_fixture_callbacks065(unsigned int reference, unsigned int enabled, unsigned int slot)
{
    owner_fixture065.release_hook_enabled = enabled;
    owner_fixture065.release_hook_slot = slot;
    owner_fixture065.release_hook_calls = 0;
    if (reference)
        graph_fixture065.original_allocator.operations = &owner_original_operations065;
    else if (!effect_resource_allocator_init065(&graph_fixture065.source_allocator, &owner_source_memory065))
        __builtin_trap();
}

void effect_owner_fixture_reset065(unsigned int used, unsigned int pattern)
{
    unsigned char *bytes = (unsigned char *)&owner_fixture065;
    for (__SIZE_TYPE__ index = 0; index < sizeof(owner_fixture065); ++index)
        bytes[index] = (unsigned char)pattern;
    owner_fixture065.source.bank = &owner_fixture065.source_bank;
    owner_fixture065.original.bank = &owner_fixture065.original_bank;
    owner_fixture065.source_bank.system = &graph_fixture065.system;
    owner_fixture065.source_bank.allocator = &graph_fixture065.source_allocator;
    owner_fixture065.source_bank.begin = owner_fixture065.slots;
    owner_fixture065.source_bank.end = owner_fixture065.slots + 4;
    owner_fixture065.original_bank.system = &graph_fixture065.system;
    owner_fixture065.original_bank.allocator = &graph_fixture065.original_allocator;
    owner_fixture065.original_bank.begin = owner_fixture065.slots;
    owner_fixture065.original_bank.end = owner_fixture065.slots + 4;
    owner_fixture065.release_hook_enabled = 0;
    owner_fixture065.release_hook_slot = 0;
    owner_fixture065.release_hook_calls = 0;
    for (unsigned int slot = 0; slot < 4; ++slot) {
        owner_fixture065.slots[slot].identifier = slot;
        owner_fixture065.slots[slot].used = (used >> slot) & 1;
    }
}

EffectOwnerFixture065 *effect_owner_fixture065(void)
{
    return &owner_fixture065;
}

void *effect_owner_fixture_registration065(unsigned int reference)
{
    return reference ? (void *)&owner_fixture065.original : (void *)&owner_fixture065.source;
}

const unsigned int effect_owner_fixture_layout065[] = {
    sizeof(EffectOwnerFixture065), __builtin_offsetof(EffectOwnerFixture065, source),
    __builtin_offsetof(EffectOwnerFixture065, original), __builtin_offsetof(EffectOwnerFixture065, source_bank),
    __builtin_offsetof(EffectOwnerFixture065, original_bank), __builtin_offsetof(EffectOwnerFixture065, slots),
    sizeof(EffectRegistrationView065), sizeof(EffectRegistrationBankView065),
    __builtin_offsetof(EffectOwnerFixture065, release_hook_enabled),
    __builtin_offsetof(EffectOwnerFixture065, release_hook_slot),
    __builtin_offsetof(EffectOwnerFixture065, release_hook_calls)
};
