#define effect_file_fixture_start068 effect_file_fixture_start_previous068
#include "file068_source_fixture.c"
#undef effect_file_fixture_start068
#include "../src/native/wave068-teardown/device_pool.h"

typedef struct TeardownFixture068 {
    EffectFileDevicePoolContext068 context;
    EffectFileDevicePool068 pool;
    EffectFileDevice068 devices[16];
    unsigned int trace[16][5];
    unsigned int count;
    unsigned int current;
    unsigned int returned;
    void *native_mutex;
    EffectFileSdk069 sdk;
    EffectFileStreamPool069 streams;
    EffectFileStream069 stream_nodes[32];
    EffectFileIpc069 ipc;
    unsigned int sdk_trace[64][8];
    unsigned int sdk_count;
    unsigned int sdk_device;
    unsigned int sdk_device_returns;
    unsigned int sdk_stream_returns;
    unsigned int sdk_embedded_returns;
    unsigned char shadow[16][sizeof(EffectFileDevice068)];
    unsigned int shadow_valid[16];
    void *stream_mutex;
} TeardownFixture068;

static TeardownFixture068 teardown_fixture068;
static const unsigned int sdk_initial_type069 = 1;
static const unsigned int sdk_subtype069 = 2;
static const unsigned int sdk_base_type069 = 3;
static const EffectFileDeviceOperations068 sdk_device_base069;

static unsigned int teardown_index068(EffectFileDevice068 *device)
{
    for (unsigned int index = 0; index < 16; ++index)
        if (device == teardown_fixture068.devices + index) return index;
    return 16;
}

static unsigned int sdk_stream_index069(EffectFileStream069 *stream)
{
    for (unsigned int index = 0; index < 32; ++index)
        if (stream == teardown_fixture068.stream_nodes + index) return index;
    return 32;
}

static void sdk_trace069(unsigned int operation, unsigned int a, unsigned int b, unsigned int c,
    unsigned int d, unsigned int e, unsigned int f, unsigned int g)
{
    TeardownFixture068 *fixture = &teardown_fixture068;
    if (fixture->sdk_count >= 64) __builtin_trap();
    unsigned int *row = fixture->sdk_trace[fixture->sdk_count++];
    row[0] = operation; row[1] = a; row[2] = b; row[3] = c;
    row[4] = d; row[5] = e; row[6] = f; row[7] = g;
}

static void teardown_trace068(unsigned int operation)
{
    TeardownFixture068 *fixture = &teardown_fixture068;
    if (fixture->count >= 16) __builtin_trap();
    unsigned int *row = fixture->trace[fixture->count++];
    row[0] = operation; row[1] = fixture->current;
    row[2] = teardown_index068(fixture->pool.free_devices);
    row[3] = fixture->pool.live_count; row[4] = fixture->pool.mutex.depth;
}

static void teardown_lock068(void *context, void *mutex)
{
    TeardownFixture068 *fixture = context;
    if (mutex != &fixture->pool.mutex || fixture->pool.mutex.kind != 1 || fixture->pool.mutex.depth) __builtin_trap();
    teardown_trace068(1);
    if (queue_fixture067.native && queue_fixture067.api.wait(fixture->native_mutex, 0xffffffffu) != 0) __builtin_trap();
    fixture->pool.mutex.owner = fixture;
    ++fixture->pool.mutex.depth;
}

static void teardown_unlock068(void *context, void *mutex)
{
    TeardownFixture068 *fixture = context;
    if (mutex != &fixture->pool.mutex || fixture->pool.mutex.owner != fixture || fixture->pool.mutex.depth != 1) __builtin_trap();
    teardown_trace068(2);
    --fixture->pool.mutex.depth;
    fixture->pool.mutex.owner = 0;
    if (queue_fixture067.native && !queue_fixture067.api.release_mutex(fixture->native_mutex)) __builtin_trap();
}

static int sdk_send069(void *context, unsigned int handle, EffectFileIpc069 *message)
{
    TeardownFixture068 *fixture = context;
    sdk_trace069(2, fixture->sdk_device, handle, message->header, 0, 0, 0, 0);
    message->header = 0x08080040;
    message->result = 0;
    return 0;
}

static int sdk_close069(void *context, unsigned int handle)
{
    TeardownFixture068 *fixture = context;
    sdk_trace069(3, fixture->sdk_device, handle, 0, 0, 0, 0, 0);
    return 0;
}

static void sdk_lock069(void *context, EffectQueueMutex067 *mutex)
{
    TeardownFixture068 *fixture = context;
    if (mutex != &fixture->streams.mutex || mutex->kind != 1 || mutex->depth) __builtin_trap();
    sdk_trace069(5, fixture->sdk_device, sdk_stream_index069(fixture->streams.free_streams), fixture->streams.live_count, mutex->depth, 0, 0, 0);
    if (queue_fixture067.native && queue_fixture067.api.wait(fixture->stream_mutex, 0xffffffffu) != 0) __builtin_trap();
    mutex->owner = fixture;
    ++mutex->depth;
}

static void sdk_unlock069(void *context, EffectQueueMutex067 *mutex)
{
    TeardownFixture068 *fixture = context;
    if (mutex != &fixture->streams.mutex || mutex->owner != fixture || mutex->depth != 1) __builtin_trap();
    sdk_trace069(6, fixture->sdk_device, sdk_stream_index069(fixture->streams.free_streams), fixture->streams.live_count, mutex->depth, 0, 0, 0);
    --mutex->depth;
    mutex->owner = 0;
    if (queue_fixture067.native && !queue_fixture067.api.release_mutex(fixture->stream_mutex)) __builtin_trap();
}

static void sdk_fatal069(void *context) { (void)context; __builtin_trap(); }

static EffectFileEmbedded069 *sdk_embedded_bridge069(EffectFileSdk069 *state, EffectFileEmbedded069 *embedded)
{
    TeardownFixture068 *fixture = &teardown_fixture068;
    unsigned int index = embedded == fixture->devices[fixture->sdk_device].embedded + 1 ? 1 : 0;
    unsigned char saved[sizeof(*embedded)];
    for (__SIZE_TYPE__ offset = 0; offset < sizeof(*embedded); ++offset) saved[offset] = ((unsigned char *)embedded)[offset];
    sdk_trace069(7, fixture->sdk_device, index, embedded->type == state->embedded_subtype,
        embedded->borrowed_view == 0, embedded->required_empty_0c == 0, embedded->head == 0, 0);
    EffectFileEmbedded069 *result = effect_file_sdk_embedded_destroy069(state, embedded);
    unsigned int preserved = 1;
    for (__SIZE_TYPE__ offset = sizeof(void *); offset < sizeof(*embedded); ++offset)
        if (saved[offset] != ((unsigned char *)embedded)[offset]) preserved = 0;
    if (result == embedded) ++fixture->sdk_embedded_returns;
    sdk_trace069(8, fixture->sdk_device, index, result == embedded,
        embedded->type == state->embedded_base_type, preserved, 0, 0);
    return result;
}

static EffectFileStream069 *sdk_stream_bridge069(EffectFileSdk069 *state, EffectFileStream069 *stream)
{
    EffectFileStream069 *result = effect_file_sdk_stream_destroy069(state, stream);
    if (result == stream) ++teardown_fixture068.sdk_stream_returns;
    sdk_trace069(4, teardown_fixture068.sdk_device, sdk_stream_index069(stream), result == stream, stream->handle == 0, 0, 0, 0);
    return result;
}

static void sdk_release_bridge069(EffectFileSdk069 *state, EffectFileStream069 *stream)
{
    TeardownFixture068 *fixture = &teardown_fixture068;
    unsigned int slot = 5;
    for (unsigned int index = 0; index < 5; ++index)
        if (fixture->devices[fixture->sdk_device].children[index] == stream) slot = index;
    sdk_trace069(1, fixture->sdk_device, sdk_stream_index069(stream), slot, 0, 0, 0, 0);
    effect_file_sdk_stream_release069(state, stream);
}

static void sdk_device_bridge069(EffectFileDevice068 *device)
{
    TeardownFixture068 *fixture = &teardown_fixture068;
    fixture->sdk_device = teardown_index068(device);
    teardown_trace068(0);
    sdk_trace069(0, fixture->sdk_device, device->owner != 0, 0, 0, 0, 0, 0);
    EffectFileDevice068 *result = effect_file_sdk_device_destroy069(&fixture->sdk, device);
    if (result == device) ++fixture->sdk_device_returns;
    sdk_trace069(9, fixture->sdk_device, result == device, device->owner == 0,
        device->link.operations == fixture->sdk.device_base_operations, 0, 0, 0);
    for (__SIZE_TYPE__ offset = 0; offset < sizeof(*device); ++offset)
        fixture->shadow[fixture->sdk_device][offset] = ((unsigned char *)device)[offset];
    fixture->shadow_valid[fixture->sdk_device] = 1;
}

static const EffectFileDeviceOperations068 sdk_device_initial069 = {.destroy = sdk_device_bridge069};
static const EffectFileDeviceOperations068 sdk_device_base069 = {.destroy = sdk_device_bridge069};
static const EffectFileStreamOperations069 sdk_stream_operations069 = {.release = sdk_release_bridge069, .destroy = sdk_stream_bridge069};
static const EffectFileDevicePoolServices068 teardown_pool_services068 = {&teardown_fixture068, teardown_lock068, teardown_unlock068};
static const EffectFileSdkServices069 sdk_services069 = {&teardown_fixture068, sdk_send069, sdk_close069, sdk_lock069, sdk_unlock069, sdk_fatal069};

static void teardown_unmount068(void *context, const char *name)
{
    unsigned int slot = file_name_key068(name) == file_name_key068("patch:") ? 1 : 0;
    teardown_fixture068.current = slot;
    file_unmount068(context, name);
    effect_file_device_pool_release068(&teardown_fixture068.context, teardown_fixture068.devices + slot);
}

static const EffectFileBootstrapServices068 teardown_services068 = {
    &file_fixture068, file_initialize068, file_requirements068, file_allocate068,
    file_mount068, file_alias068, teardown_unmount068, file_release068
};

void effect_file_fixture_teardown_prepare068(unsigned int native, const QueueWinApi067 *api)
{
    effect_file_fixture_prepare068(native, api);
    unsigned char *bytes = (unsigned char *)&teardown_fixture068;
    for (__SIZE_TYPE__ index = 0; index < sizeof(teardown_fixture068); ++index) bytes[index] = 0;
    TeardownFixture068 *fixture = &teardown_fixture068;
    fixture->context.pool = &fixture->pool;
    fixture->context.services = &teardown_pool_services068;
    fixture->pool.free_devices = fixture->devices + 2;
    fixture->pool.live_count = 2;
    fixture->pool.mutex.kind = 1;
    fixture->sdk.stream_pool = &fixture->streams;
    fixture->sdk.device_base_operations = &sdk_device_base069;
    fixture->sdk.embedded_subtype = &sdk_subtype069;
    fixture->sdk.embedded_base_type = &sdk_base_type069;
    fixture->sdk.ipc = &fixture->ipc;
    fixture->sdk.services = &sdk_services069;
    fixture->sdk.embedded_destroy = sdk_embedded_bridge069;
    fixture->streams.free_streams = fixture->stream_nodes + 2;
    fixture->streams.live_count = 2;
    fixture->streams.mutex.kind = 1;
    for (unsigned int index = 0; index < 32; ++index) {
        fixture->stream_nodes[index].link.operations = &sdk_stream_operations069;
        if (index < 2) fixture->stream_nodes[index].handle = 0x06800100u + 2 * index;
        else fixture->stream_nodes[index].link.next = index + 1 < 32 ? fixture->stream_nodes + index + 1 : 0;
    }
    for (unsigned int index = 0; index < 16; ++index) {
        EffectFileDevice068 *device = fixture->devices + index;
        device->link.operations = &sdk_device_initial069;
        for (unsigned int offset = 0; offset < 152; ++offset) device->unknown_20[offset] = (unsigned char)(0xa0 + index);
        if (index >= 2) device->link.next = index + 1 < 16 ? fixture->devices + index + 1 : 0;
        else {
            device->owner = fixture->stream_nodes + index;
            device->children[2] = fixture->stream_nodes + index;
            for (unsigned int slot = 0; slot < 2; ++slot) {
                EffectFileEmbedded069 *embedded = device->embedded + slot;
                embedded->type = &sdk_initial_type069;
                embedded->entry_bytes = slot ? 24 : 32;
                embedded->capacity_bytes = slot ? (index ? 192 : 384) : (index ? 4096 : 8192);
                embedded->width = 4;
                embedded->mutex.kind = 1;
            }
        }
    }
    if (native) {
        fixture->native_mutex = api->create_mutex(0, 0, 0);
        fixture->stream_mutex = api->create_mutex(0, 0, 0);
        if (!fixture->native_mutex || !fixture->stream_mutex) __builtin_trap();
    }
    file_fixture068.state.services = &teardown_services068;
}

void effect_file_fixture_start068(void)
{
    effect_file_fixture_start_previous068();
    TeardownFixture068 *fixture = &teardown_fixture068;
    for (unsigned int index = 0; index < 2; ++index) {
        unsigned char *workspace = index ? file_fixture068.state.patch.memory : file_fixture068.state.rom.memory;
        for (unsigned int slot = 0; slot < 2; ++slot) {
            EffectFileEmbedded069 *embedded = fixture->devices[index].embedded + slot;
            embedded->backing = workspace + 32 + (slot ? (index ? 4096 : 8192) : 0);
            embedded->borrowed_view = embedded->backing;
        }
    }
}

void effect_file_fixture_shutdown068(void)
{
    effect_file_bootstrap_shutdown068(&file_fixture068.state);
    if (queue_fixture067.native && (!queue_fixture067.api.close(teardown_fixture068.native_mutex)
        || !queue_fixture067.api.close(teardown_fixture068.stream_mutex))) __builtin_trap();
    teardown_fixture068.native_mutex = 0;
    teardown_fixture068.stream_mutex = 0;
    teardown_fixture068.returned = 1;
}

unsigned int effect_file_fixture_pool_count068(void) { return teardown_fixture068.count; }
const unsigned int *effect_file_fixture_pool_trace068(void) { return teardown_fixture068.trace[0]; }
unsigned int effect_file_fixture_sdk_count069(void) { return teardown_fixture068.sdk_count; }
const unsigned int *effect_file_fixture_sdk_trace069(void) { return teardown_fixture068.sdk_trace[0]; }

__UINTPTR_TYPE__ effect_file_fixture_pool_observe068(unsigned int field)
{
    TeardownFixture068 *fixture = &teardown_fixture068;
    if (field == 0) return fixture->pool.live_count;
    if (field == 1) return teardown_index068(fixture->pool.free_devices);
    if (field == 2) return fixture->pool.mutex.depth;
    if (field == 3) return fixture->returned;
    if (field == 4) return (__UINTPTR_TYPE__)fixture->native_mutex;
    if (field >= 5 && field < 21) return teardown_index068(fixture->devices[field - 5].link.next);
    if (field == 21) {
        for (unsigned int index = 0; index < 2; ++index) {
            if (!fixture->shadow_valid[index]) return 0;
            for (__SIZE_TYPE__ offset = sizeof(void *); offset < sizeof(EffectFileDevice068); ++offset)
                if (fixture->shadow[index][offset] != ((unsigned char *)(fixture->devices + index))[offset]) return 0;
        }
        return 1;
    }
    __builtin_trap();
}

__UINTPTR_TYPE__ effect_file_fixture_sdk_observe069(unsigned int field)
{
    TeardownFixture068 *fixture = &teardown_fixture068;
    if (field == 0) return fixture->streams.live_count;
    if (field == 1) return sdk_stream_index069(fixture->streams.free_streams);
    if (field == 2) return fixture->streams.mutex.depth;
    if (field == 3) return fixture->ipc.header;
    if (field == 4) return (unsigned int)fixture->ipc.result;
    if (field == 5) return fixture->sdk_device_returns;
    if (field == 6) return fixture->sdk_stream_returns;
    if (field == 7) return fixture->sdk_embedded_returns;
    if (field >= 8 && field < 40) return sdk_stream_index069(fixture->stream_nodes[field - 8].link.next);
    if (field == 40) return fixture->stream_nodes[0].handle;
    if (field == 41) return fixture->stream_nodes[1].handle;
    if (field == 42) return fixture->devices[0].embedded[0].borrowed_view == 0 && fixture->devices[0].embedded[1].borrowed_view == 0;
    if (field == 43) return fixture->devices[1].embedded[0].borrowed_view == 0 && fixture->devices[1].embedded[1].borrowed_view == 0;
    if (field == 44) {
        for (unsigned int index = 0; index < 16; ++index)
            for (unsigned int offset = 0; offset < 152; ++offset)
                if (fixture->devices[index].unknown_20[offset] != (unsigned char)(0xa0 + index)) return 0;
        return 1;
    }
    __builtin_trap();
}
