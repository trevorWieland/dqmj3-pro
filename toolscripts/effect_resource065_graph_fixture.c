#include "effect_resource_internal.h"
#include "effect_device.h"
#include "effect_texture.h"

typedef struct EffectGraphAllocationFixture065 {
    unsigned int logical_bytes;
    unsigned int physical_bytes;
    unsigned int alignment;
    unsigned int role;
    unsigned int region;
    unsigned int live;
} EffectGraphAllocationFixture065;

typedef struct EffectGraphFixture065 {
    EffectResource065 resource;
    EffectResourceSystemView065 system;
    EffectResource065 *resources[4];
    EffectResourceOptions065 options;
    EffectResourceAllocator065 source_allocator;
    EffectAllocator065 original_allocator;
    EffectShaderPool065 shaders;
    unsigned int shader_words[30][4];
    unsigned int attempts;
    unsigned int allocations;
    unsigned int events;
    unsigned int fail_at;
    const unsigned char *image;
    unsigned int image_bytes;
    EffectGraphAllocationFixture065 records[64];
    unsigned int log[512][6];
    unsigned char heap[64][8448] __attribute__((aligned(256)));
} EffectGraphFixture065;

static EffectGraphFixture065 graph_fixture065;

static void graph_event065(unsigned int operation, unsigned int a, unsigned int b,
                            unsigned int c, unsigned int d, unsigned int e)
{
    unsigned int slot = graph_fixture065.events++;
    if (slot >= 512)
        __builtin_trap();
    unsigned int *row = graph_fixture065.log[slot];
    row[0] = operation;
    row[1] = a;
    row[2] = b;
    row[3] = c;
    row[4] = d;
    row[5] = e;
}

static unsigned int graph_slot065(const void *memory)
{
    for (unsigned int slot = 0; slot < graph_fixture065.allocations; ++slot)
        if (memory == graph_fixture065.heap[slot] + 128)
            return slot;
    __builtin_trap();
}

static void *graph_allocate065(unsigned int role, unsigned int logical, __SIZE_TYPE__ physical,
                              unsigned int alignment, unsigned int region)
{
    unsigned int attempt = ++graph_fixture065.attempts;
    if (physical > 8192 || alignment > 128)
        __builtin_trap();
    if (attempt == graph_fixture065.fail_at) {
        graph_event065(1, logical, alignment, region, 0xffffffff, attempt);
        return 0;
    }
    unsigned int slot = graph_fixture065.allocations++;
    if (slot >= 64)
        __builtin_trap();
    EffectGraphAllocationFixture065 *record = graph_fixture065.records + slot;
    record->logical_bytes = logical;
    record->physical_bytes = (unsigned int)physical;
    record->alignment = alignment;
    record->role = role;
    record->region = region;
    record->live = 1;
    graph_event065(1, logical, alignment, region, slot, attempt);
    return graph_fixture065.heap[slot] + 128;
}

static void graph_release065(void *memory, unsigned int region, unsigned int option)
{
    unsigned int slot = memory == 0 ? 0xffffffff : graph_slot065(memory);
    if (slot != 0xffffffff) {
        if (!graph_fixture065.records[slot].live)
            __builtin_trap();
        graph_fixture065.records[slot].live = 0;
    }
    graph_event065(2, region, option, slot, 0, 0);
}

static void *graph_source_allocate065(void *context, EffectResourceAllocation065 role, unsigned int logical,
                                     __SIZE_TYPE__ physical, unsigned int alignment)
{
    if (context != &graph_fixture065)
        __builtin_trap();
    return graph_allocate065(role, logical, physical, alignment, 0);
}

static void graph_source_release065(void *context, void *memory)
{
    if (context != &graph_fixture065)
        __builtin_trap();
    graph_release065(memory, 0, 0);
}

static void graph_uninvoked065(void)
{
    __builtin_trap();
}

static void *graph_original_allocate065(EffectAllocator065 *allocator, unsigned int bytes, unsigned int alignment)
{
    if (allocator != &graph_fixture065.original_allocator)
        __builtin_trap();
    return graph_allocate065(0xffffffff, bytes, bytes, alignment, 0);
}

static void graph_original_release065(EffectAllocator065 *allocator, void *memory)
{
    if (allocator != &graph_fixture065.original_allocator)
        __builtin_trap();
    graph_release065(memory, 0, 0);
}

static const EffectAllocatorOperations065 graph_original_operations065 = {
    graph_uninvoked065, graph_uninvoked065, graph_original_allocate065, graph_original_release065
};

static const EffectResourceMemory065 graph_source_memory065 = {
    graph_source_allocate065, graph_source_release065, &graph_fixture065
};

void *effect_graph_original_bank_allocate065(unsigned int region, unsigned int option, unsigned int selector, unsigned int bytes)
{
    graph_event065(3, region, option, selector, bytes, 0);
    return graph_allocate065(EFFECT_RESOURCE_TEXTURE065, bytes, bytes, 128, region);
}

void effect_graph_original_bank_release065(unsigned int region, unsigned int option, unsigned int selector, void *memory)
{
    graph_event065(4, region, option, selector, memory == 0 ? 0xffffffff : graph_slot065(memory), 0);
    graph_release065(memory, region, option);
}

void effect_graph_original_report065(unsigned int status, unsigned int detail)
{
    graph_event065(7, status, detail, 0, 0, 0);
}

static void *graph_bank_allocate065(void *context, unsigned int region, unsigned int option, unsigned int selector, unsigned int bytes)
{
    if (context != &graph_fixture065)
        __builtin_trap();
    return effect_graph_original_bank_allocate065(region, option, selector, bytes);
}

static void graph_bank_release065(void *context, unsigned int region, unsigned int option, unsigned int selector, void *memory)
{
    if (context != &graph_fixture065)
        __builtin_trap();
    effect_graph_original_bank_release065(region, option, selector, memory);
}

static void graph_report065(void *context, unsigned int status, unsigned int detail)
{
    if (context != &graph_fixture065)
        __builtin_trap();
    effect_graph_original_report065(status, detail);
}

static unsigned int graph_device_word065(void *context, const void *memory)
{
    if (context != &graph_fixture065)
        __builtin_trap();
    if (memory == 0)
        return 0;
    __UINTPTR_TYPE__ value = (__UINTPTR_TYPE__)memory;
    __UINTPTR_TYPE__ heap = (__UINTPTR_TYPE__)graph_fixture065.heap;
    if (value >= heap && value < heap + sizeof(graph_fixture065.heap))
        return 0x30000000 + (unsigned int)(value - heap);
    __UINTPTR_TYPE__ image = (__UINTPTR_TYPE__)graph_fixture065.image;
    if (value >= image && value < image + graph_fixture065.image_bytes)
        return 0x50000000 + (unsigned int)(value - image);
    __builtin_trap();
}

static void graph_flush065(void *context, const void *memory, unsigned int bytes)
{
    if (context != &graph_fixture065)
        __builtin_trap();
    unsigned int slot = graph_slot065(memory);
    if (!graph_fixture065.records[slot].live || bytes > graph_fixture065.records[slot].physical_bytes)
        __builtin_trap();
    graph_event065(8, slot, bytes, 0, 0, 0);
}

static void graph_transfer_uninvoked065(void *context, void *queue, const void *source, void *destination, unsigned int bytes)
{
    (void)context;
    (void)queue;
    (void)source;
    (void)destination;
    (void)bytes;
    __builtin_trap();
}

static int graph_contains065(void *context, unsigned int region, const void *memory)
{
    if (context != &graph_fixture065)
        __builtin_trap();
    for (unsigned int slot = 0; slot < graph_fixture065.allocations; ++slot)
        if (memory == graph_fixture065.heap[slot] + 128)
            return graph_fixture065.records[slot].region == region;
    return 0;
}

static void graph_device_release_uninvoked065(void *context, void *memory, unsigned int option)
{
    (void)context;
    (void)memory;
    (void)option;
    __builtin_trap();
}

static const EffectTextureServices065 graph_texture_services065 = {
    graph_bank_allocate065, graph_bank_release065, graph_report065, &graph_fixture065
};

static const EffectDeviceServices065 graph_device_services065 = {
    graph_device_word065, graph_flush065, graph_transfer_uninvoked065,
    graph_contains065, graph_device_release_uninvoked065, &graph_fixture065
};

EffectGraphFixture065 *effect_graph_fixture065(void)
{
    return &graph_fixture065;
}

EffectAllocator065 *effect_graph_fixture_original_allocator065(void)
{
    return &graph_fixture065.original_allocator;
}

EffectResourceAllocator065 *effect_graph_fixture_source_allocator065(void)
{
    return &graph_fixture065.source_allocator;
}

void effect_graph_fixture_reset065(unsigned int fail_at, unsigned int storage, unsigned int pattern)
{
    unsigned char *bytes = (unsigned char *)&graph_fixture065;
    for (__SIZE_TYPE__ index = 0; index < __builtin_offsetof(EffectGraphFixture065, heap); ++index)
        bytes[index] = (unsigned char)pattern;
    graph_fixture065.attempts = 0;
    graph_fixture065.allocations = 0;
    graph_fixture065.events = 0;
    graph_fixture065.fail_at = fail_at;
    graph_fixture065.original_allocator.operations = &graph_original_operations065;
    graph_fixture065.system.resources = graph_fixture065.resources;
    graph_fixture065.system.texture_storage = storage;
    graph_fixture065.system.primitive_storage = storage;
    graph_fixture065.options.texture_storage = (unsigned char)storage;
    graph_fixture065.options.primitive_storage = (unsigned char)storage;
    graph_fixture065.options.transfer_context = 0;
    for (unsigned int slot = 0; slot < 4; ++slot)
        graph_fixture065.resources[slot] = 0;
    for (unsigned int slot = 0; slot < 30; ++slot) {
        graph_fixture065.shaders.programs[slot].commands = graph_fixture065.shader_words[slot];
        graph_fixture065.shaders.programs[slot].command_word_count = slot % 4 + 1;
        graph_fixture065.shaders.programs[slot].owner = 0;
        for (unsigned int word = 0; word < 4; ++word)
            graph_fixture065.shader_words[slot][word] = 0x65000000 | slot << 8 | word;
    }
}

void effect_graph_fixture_bind065(void)
{
    if (!effect_resource_allocator_init065(&graph_fixture065.source_allocator, &graph_source_memory065))
        __builtin_trap();
    effect_bind_shader_pool065(&graph_fixture065.shaders);
    effect_bind_texture_services065(&graph_texture_services065);
    effect_bind_device_services065(&graph_device_services065);
    effect_bind_command_base065(0);
}

void effect_graph_fixture_image065(const unsigned char *image, unsigned int bytes)
{
    graph_fixture065.image = image;
    graph_fixture065.image_bytes = bytes;
}

#define GRAPH_OFFSET065(field) __builtin_offsetof(EffectGraphFixture065, field)
#define RESOURCE_OFFSET065(field) __builtin_offsetof(EffectResource065, field)
#define SET_OFFSET065(field) __builtin_offsetof(EffectEmitterSet065, field)
#define PRIMITIVE_OFFSET065(field) __builtin_offsetof(EffectPrimitive065, field)

const unsigned int effect_graph_fixture_layout065[] = {
    sizeof(EffectGraphFixture065), sizeof(void *), GRAPH_OFFSET065(resource), GRAPH_OFFSET065(system),
    GRAPH_OFFSET065(resources), GRAPH_OFFSET065(options), GRAPH_OFFSET065(source_allocator), GRAPH_OFFSET065(original_allocator),
    GRAPH_OFFSET065(shaders), GRAPH_OFFSET065(attempts), GRAPH_OFFSET065(allocations), GRAPH_OFFSET065(events),
    GRAPH_OFFSET065(fail_at), GRAPH_OFFSET065(records), GRAPH_OFFSET065(log), GRAPH_OFFSET065(heap), 8448, 128,
    sizeof(EffectResource065), sizeof(EffectEmitterSet065), sizeof(EffectEmitterReference065), sizeof(EffectEmitter065),
    RESOURCE_OFFSET065(unidentified_identity), RESOURCE_OFFSET065(system), RESOURCE_OFFSET065(identifier), RESOURCE_OFFSET065(serialized),
    RESOURCE_OFFSET065(names), RESOURCE_OFFSET065(textures), RESOURCE_OFFSET065(sets), RESOURCE_OFFSET065(allocator),
    RESOURCE_OFFSET065(shaders), RESOURCE_OFFSET065(shader_count), RESOURCE_OFFSET065(primitives), RESOURCE_OFFSET065(primitive_count),
    RESOURCE_OFFSET065(texture_storage), RESOURCE_OFFSET065(primitive_storage), RESOURCE_OFFSET065(transfer_context), RESOURCE_OFFSET065(materials),
    SET_OFFSET065(current), SET_OFFSET065(saved), SET_OFFSET065(name), SET_OFFSET065(unknown_flag), SET_OFFSET065(shaders),
    SET_OFFSET065(shader_count), SET_OFFSET065(primitives), SET_OFFSET065(primitive_count), SET_OFFSET065(materials),
    GRAPH_OFFSET065(shader_words), sizeof(EffectPrimitive065),
    PRIMITIVE_OFFSET065(enabled), PRIMITIVE_OFFSET065(element_count), PRIMITIVE_OFFSET065(unknown_08),
    PRIMITIVE_OFFSET065(position_components), PRIMITIVE_OFFSET065(position_bytes), PRIMITIVE_OFFSET065(position_cpu), PRIMITIVE_OFFSET065(position_device),
    PRIMITIVE_OFFSET065(unknown_1c), PRIMITIVE_OFFSET065(color_components), PRIMITIVE_OFFSET065(color_bytes), PRIMITIVE_OFFSET065(color_cpu), PRIMITIVE_OFFSET065(color_device),
    PRIMITIVE_OFFSET065(unknown_30), PRIMITIVE_OFFSET065(texcoord_components), PRIMITIVE_OFFSET065(texcoord_bytes), PRIMITIVE_OFFSET065(texcoord_cpu), PRIMITIVE_OFFSET065(texcoord_device),
    PRIMITIVE_OFFSET065(unknown_44), PRIMITIVE_OFFSET065(index_components), PRIMITIVE_OFFSET065(index_bytes), PRIMITIVE_OFFSET065(indices_cpu), PRIMITIVE_OFFSET065(indices_device),
    PRIMITIVE_OFFSET065(position_effective), PRIMITIVE_OFFSET065(color_effective), PRIMITIVE_OFFSET065(texcoord_effective), PRIMITIVE_OFFSET065(unknown_64),
    PRIMITIVE_OFFSET065(vertex_input), PRIMITIVE_OFFSET065(index_words), PRIMITIVE_OFFSET065(indices_effective), PRIMITIVE_OFFSET065(storage),
    PRIMITIVE_OFFSET065(transfer_context), PRIMITIVE_OFFSET065(commands), PRIMITIVE_OFFSET065(command_count)
};
