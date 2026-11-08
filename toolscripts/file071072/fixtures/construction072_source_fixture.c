#include "namespace_fixture071.c"
#include "../src/native/wave072-construction/device072.h"

void __aeabi_memclr4(void *output, __SIZE_TYPE__ bytes)
{
    volatile unsigned char *target = output;
    for (__SIZE_TYPE__ index = 0; index < bytes; ++index) target[index] = 0;
}

typedef struct ConstructionFixture072 {
    EffectFileConstruction072 state;
    EffectFileDeviceOperations068 device_operations;
    EffectFileStreamOperations069 stream_operations;
    EffectFileSdkServices069 destruction_services;
    EffectFileDevice068 probe;
    unsigned char workspace[2][8736];
    EffectFileDevice068 *output[2];
    unsigned int result[2];
    unsigned int native;
    unsigned int mode;
    int priority;
    void *guard_mutex;
    unsigned int handle_count;
    unsigned int handles[16];
    unsigned int files_closed[16];
    unsigned int operations[64][8];
    unsigned int operation_count;
    unsigned int returned;
} ConstructionFixture072;

static ConstructionFixture072 construction_fixture072;
static const unsigned int construction_pool_type072 = 0x0720;
static const unsigned int construction_embedded_type072 = 0x0721;

static void construction_trace072(unsigned int kind, unsigned int a, unsigned int b, unsigned int c,
    unsigned int d, unsigned int e, unsigned int f, unsigned int g)
{
    ConstructionFixture072 *fixture = &construction_fixture072;
    if (fixture->operation_count >= 64) __builtin_trap();
    unsigned int *row = fixture->operations[fixture->operation_count++];
    row[0] = kind; row[1] = a; row[2] = b; row[3] = c;
    row[4] = d; row[5] = e; row[6] = f; row[7] = g;
}

static void construction_lock072(void *context, EffectQueueMutex067 *mutex)
{
    ConstructionFixture072 *fixture = context;
    void *handle = mutex == &fixture->state.guard_mutex ? fixture->guard_mutex
        : mutex == &teardown_fixture068.pool.mutex ? teardown_fixture068.native_mutex
        : mutex == &teardown_fixture068.streams.mutex ? teardown_fixture068.stream_mutex : 0;
    if (!handle && fixture->native) __builtin_trap();
    if (mutex->kind != 1 || mutex->depth) __builtin_trap();
    if (fixture->native && queue_fixture067.api.wait(handle, 0xffffffffu) != 0) __builtin_trap();
    mutex->owner = fixture;
    ++mutex->depth;
}

static void construction_unlock072(void *context, EffectQueueMutex067 *mutex)
{
    ConstructionFixture072 *fixture = context;
    void *handle = mutex == &fixture->state.guard_mutex ? fixture->guard_mutex
        : mutex == &teardown_fixture068.pool.mutex ? teardown_fixture068.native_mutex
        : mutex == &teardown_fixture068.streams.mutex ? teardown_fixture068.stream_mutex : 0;
    if (mutex->owner != fixture || mutex->depth != 1) __builtin_trap();
    mutex->owner = 0;
    --mutex->depth;
    if (fixture->native && !queue_fixture067.api.release_mutex(handle)) __builtin_trap();
}

static int construction_once072(void *context, unsigned int *guard)
{
    (void)context;
    if (*guard) return 0;
    *guard = 1;
    return 1;
}

static int construction_close072(void *context, unsigned int handle)
{
    ConstructionFixture072 *fixture = context;
    if (handle < 0x06800100u || handle >= 0x06800100u + fixture->handle_count) __builtin_trap();
    unsigned int index = handle - 0x06800100u;
    if (fixture->handles[index] != 1) __builtin_trap();
    fixture->handles[index] = 0;
    construction_trace072(3, index, 0, 0, 0, 0, 0, 0);
    return 0;
}

static int construction_send072(void *context, unsigned int handle, EffectFileMessage072 *message)
{
    ConstructionFixture072 *fixture = context;
    unsigned int header = message->words[0];
    if (header == 0x08030204) {
        if (handle != 0x06800002u || message->words[1] || message->words[2] != 3
            || message->words[3] != 1 || message->words[4] != 1 || message->words[5] != 2
            || message->words[6] != 12 || message->words[7] != 1 || message->words[8]
            || message->words[9] != 0x4802 || message->words[11] != 0x30002) __builtin_trap();
        const unsigned int *selector = message->input[1];
        if (*(const unsigned char *)message->input[0] || (selector[0] != 0 && selector[0] != 5) || selector[1] || selector[2]) __builtin_trap();
        unsigned int index = fixture->handle_count++;
        if (index >= 16) __builtin_trap();
        fixture->handles[index] = 1;
        construction_trace072(0, selector[0], index, 3, 1, 12, 1, 0);
        message->words[0] = 0x08030042;
        message->words[1] = 0;
        message->words[3] = 0x06800100u + index;
    } else if (header == 0x080200c2) {
        if (handle < 0x06800100u || handle >= 0x06800100u + fixture->handle_count
            || fixture->handles[handle - 0x06800100u] != 1 || message->words[2]
            || message->words[4] != (message->words[3] << 4 | 12)) __builtin_trap();
        unsigned int offset = message->words[1], bytes = message->words[3];
        if (offset > 80 || bytes > 80 - offset) __builtin_trap();
        unsigned int data[20] = {40, 40, 4, 44, 24, 68, 4, 72, 0, 80,
            0, 0, 0xffffffffu, 0xffffffffu, 0xffffffffu, 0xffffffffu, 0, 0xffffffffu, 0, 0};
        unsigned char *output = message->output;
        for (unsigned int index = 0; index < bytes; ++index) output[index] = ((const unsigned char *)data)[offset + index];
        construction_trace072(1, handle - 0x06800100u, offset, bytes, 0, 0, 0, 0);
        message->words[0] = 0x08020080;
        message->words[1] = 0;
        message->words[2] = bytes;
    } else if (header == 0x08630000) {
        if (handle != 0x06800002u) __builtin_trap();
        construction_trace072(2, (unsigned int)fixture->priority, 0, 0, 0, 0, 0, 0);
        message->words[0] = 0x08630080;
        message->words[1] = 0;
        message->words[2] = (unsigned int)fixture->priority;
    } else __builtin_trap();
    return 0;
}

static int construction_close_message072(void *context, unsigned int handle, EffectFileIpc069 *message)
{
    if (message->header != 0x08080000) __builtin_trap();
    ConstructionFixture072 *fixture = context;
    unsigned int index = handle - 0x06800100u;
    if (index >= fixture->handle_count || fixture->handles[index] != 1 || fixture->files_closed[index]) __builtin_trap();
    fixture->files_closed[index] = 1;
    construction_trace072(4, index, 0, 0, 0, 0, 0, 0);
    message->header = 0x08080040;
    message->result = 0;
    return 0;
}

static int construction_read_bridge072(EffectFileStream069 *stream, unsigned int *received,
    unsigned long long offset, void *output, unsigned int bytes)
{
    return effect_file_stream_read072(&construction_fixture072.state, stream, received, offset, output, bytes);
}

static int construction_attach_bridge072(EffectFileDevice068 *device, EffectFileStream069 **output, unsigned int handle)
{
    return effect_file_stream_attach072(&construction_fixture072.state, device, output, handle);
}

static void construction_release_bridge072(EffectFileDevice068 *device)
{
    teardown_fixture068.current = teardown_index068(device);
    effect_file_device_pool_release068(&teardown_fixture068.context, device);
}

static const EffectFileServices072 construction_services072 = {&construction_fixture072,
    construction_send072, construction_close072, construction_lock072, construction_unlock072,
    construction_once072, namespace_fatal071};

void effect_construction_fixture_prepare072(unsigned int native, const QueueWinApi067 *api, unsigned int mode, int priority)
{
    effect_branch_fixture_prepare070(native, api, 0);
    ConstructionFixture072 *fixture = &construction_fixture072;
    unsigned char *bytes = (unsigned char *)fixture;
    for (__SIZE_TYPE__ offset = 0; offset < sizeof(*fixture); ++offset) bytes[offset] = 0;
    fixture->native = native;
    fixture->mode = mode;
    fixture->priority = priority;
    fixture->state.device_pool = &teardown_fixture068.pool;
    fixture->state.stream_pool = &teardown_fixture068.streams;
    fixture->state.devices = teardown_fixture068.devices;
    fixture->state.streams = teardown_fixture068.stream_nodes;
    fixture->state.device_slots = 16;
    fixture->state.services = &construction_services072;
    fixture->state.destruction = &teardown_fixture068.sdk;
    fixture->state.pool_type = &construction_pool_type072;
    fixture->state.embedded_type = &construction_embedded_type072;
    fixture->state.service_ready = 1;
    fixture->state.service_handle = 0x06800002u;
    fixture->device_operations = sdk_device_initial069;
    fixture->device_operations.release = construction_release_bridge072;
    fixture->device_operations.attach = construction_attach_bridge072;
    fixture->stream_operations = sdk_stream_operations069;
    fixture->stream_operations.read = construction_read_bridge072;
    fixture->state.device_operations = &fixture->device_operations;
    fixture->state.stream_operations = &fixture->stream_operations;
    fixture->destruction_services = *teardown_fixture068.sdk.services;
    fixture->destruction_services.context = fixture;
    fixture->destruction_services.send_sync = construction_close_message072;
    fixture->destruction_services.close_handle = construction_close072;
    fixture->destruction_services.lock = construction_lock072;
    fixture->destruction_services.unlock = construction_unlock072;
    teardown_fixture068.sdk.services = &fixture->destruction_services;
    effect_file_mutex_initialize072(&fixture->state.guard_mutex);
    effect_file_pool_initialize072(&teardown_fixture068.streams, sizeof(EffectFileStream069),
        teardown_fixture068.stream_nodes, sizeof(teardown_fixture068.stream_nodes), 4, 0);
    effect_file_mutex_initialize072(&teardown_fixture068.streams.mutex);
    if (native) {
        fixture->guard_mutex = api->create_mutex(0, 0, 0);
        if (!fixture->guard_mutex) __builtin_trap();
    }
    for (unsigned int index = 0; index < 2; ++index)
        for (unsigned int offset = 0; offset < sizeof(fixture->workspace[index]); ++offset) fixture->workspace[index][offset] = 0xa5;
    bytes = (unsigned char *)&fixture->probe;
    for (__SIZE_TYPE__ offset = 0; offset < sizeof(fixture->probe); ++offset) bytes[offset] = (unsigned char)(offset * 17 + 0x53);

}

void effect_construction_fixture_probe072(void)
{
    effect_file_device_construct072(&construction_fixture072.state, &construction_fixture072.probe);
}

int effect_construction_fixture_start072(void)
{
    ConstructionFixture072 *fixture = &construction_fixture072;
    unsigned int count = fixture->mode == 0 ? 2 : 1;
    for (unsigned int index = 0; index < count; ++index) {
        unsigned int selector[3] = {index ? 5 : 0, 0, 0};
        unsigned int entries = index ? 128 : 256, entry_bytes = index ? 8 : 16;
        unsigned int bytes = fixture->mode == 2 ? 8500 : index ? 4320 : 8608;
        fixture->result[index] = (unsigned int)effect_file_device_factory072(&fixture->state, fixture->output + index,
            entries, entry_bytes, fixture->workspace[index] + 64, bytes, fixture->mode == 0, selector);
    }
    fixture->returned = 1;
    return (int)fixture->result[0];
}

void effect_construction_fixture_finish072(void)
{
    ConstructionFixture072 *fixture = &construction_fixture072;
    for (unsigned int index = 2; index-- > 0;)
        if (fixture->output[index]) fixture->output[index]->link.operations->release(fixture->output[index]);
    fixture->returned = 2;
    if (fixture->native && (!queue_fixture067.api.close(fixture->guard_mutex)
        || !queue_fixture067.api.close(teardown_fixture068.native_mutex)
        || !queue_fixture067.api.close(teardown_fixture068.stream_mutex))) __builtin_trap();
}

__UINTPTR_TYPE__ effect_construction_fixture_observe072(unsigned int field)
{
    ConstructionFixture072 *fixture = &construction_fixture072;
    if (field == 0) return (__UINTPTR_TYPE__)&fixture->state;
    if (field == 1) return (__UINTPTR_TYPE__)fixture->output[0];
    if (field == 2) return (__UINTPTR_TYPE__)fixture->output[1];
    if (field == 3) return fixture->result[0];
    if (field == 4) return fixture->result[1];
    if (field == 5) return fixture->state.device_pool->live_count;
    if (field == 6) return fixture->state.stream_pool->live_count;
    if (field == 7) return fixture->returned;
    if (field == 8) return fixture->handle_count;
    if (field == 9) { unsigned int live = 0; for (unsigned int index = 0; index < fixture->handle_count; ++index) live += fixture->handles[index]; return live; }
    if (field == 10) return (__UINTPTR_TYPE__)fixture->operations;
    if (field == 11) return fixture->operation_count;
    if (field == 12) return (__UINTPTR_TYPE__)&fixture->probe;
    if (field == 13) return (__UINTPTR_TYPE__)fixture->workspace[0];
    if (field == 14) return (__UINTPTR_TYPE__)fixture->workspace[1];
    if (field == 15) return (__UINTPTR_TYPE__)fixture->state.devices;
    if (field == 16) return (__UINTPTR_TYPE__)fixture->state.streams;
    __builtin_trap();
}

#include "construction072_layout_fixture.c"
