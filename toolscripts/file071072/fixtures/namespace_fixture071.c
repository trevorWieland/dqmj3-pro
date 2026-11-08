#include "branch_source_fixture070.c"
#include "../src/native/wave071-namespace/namespace071.h"

typedef struct NamespaceFixture071 {
    EffectFileNamespaceEntry071 entries[32];
    EffectFileNamespaceEntry071 probe;
    EffectFileNamespace071 state;
    EffectFileDeviceOperations068 operations;
    unsigned char names[2][16];
    unsigned int releases;
    unsigned int probe_returned;
    unsigned int returned;
} NamespaceFixture071;

static NamespaceFixture071 namespace_fixture071;

static void namespace_release071(EffectFileDevice068 *device)
{
    ++namespace_fixture071.releases;
    teardown_fixture068.current = teardown_index068(device);
    effect_file_device_pool_release068(&teardown_fixture068.context, device);
}

static void namespace_fatal071(void *context)
{
    (void)context;
    __builtin_trap();
}

static void namespace_mount071(void *context, EffectFileSystemKind068 kind, const char *name,
    unsigned int entries, unsigned int entry_bytes, EffectFileWorkspace068 *workspace, unsigned int option)
{
    branch_mount070(context, kind, name, entries, entry_bytes, workspace, option);
    unsigned int index = kind == EFFECT_FILE_ROM068 ? 0 : 1;
    EffectFileDevice068 *device = teardown_fixture068.devices + branch_fixture070.namespace_device[index];
    device->link.operations = &namespace_fixture071.operations;
    if (effect_file_namespace_register071(&namespace_fixture071.state, (const unsigned char *)name, device, 0, 0)) __builtin_trap();
}

static void namespace_alias071(void *context, const char *name, const char *target)
{
    effect_file_namespace_alias071(&namespace_fixture071.state, (const unsigned char *)name, (const unsigned char *)target);
    file_alias068(context, name, target);
}

static void namespace_unmount071(void *context, const char *name)
{
    effect_file_namespace_unmount071(&namespace_fixture071.state, (const unsigned char *)name);
    file_unmount068(context, name);
}

static const EffectFileBootstrapServices068 namespace_fs_services071 = {
    &file_fixture068, branch_initialize070, file_requirements068, file_allocate068,
    namespace_mount071, namespace_alias071, namespace_unmount071, file_release068
};

void effect_namespace_fixture_prepare071(unsigned int native, const QueueWinApi067 *api)
{
    effect_branch_fixture_prepare070(native, api, 0);
    unsigned char *bytes = (unsigned char *)&namespace_fixture071;
    for (__SIZE_TYPE__ index = 0; index < sizeof(namespace_fixture071); ++index) bytes[index] = 0;
    namespace_fixture071.state.entries = namespace_fixture071.entries;
    namespace_fixture071.state.fatal = namespace_fatal071;
    namespace_fixture071.operations = sdk_device_initial069;
    namespace_fixture071.operations.release = namespace_release071;
    for (unsigned int index = 0; index < 32; ++index) effect_file_namespace_construct071(namespace_fixture071.entries + index);
    EffectFileNamespaceEntry071 *probe = &namespace_fixture071.probe;
    probe->key = 0x0706050403020100ull;
    probe->device = (EffectFileDevice068 *)(__UINTPTR_TYPE__)0x0b0a0908u;
    probe->config = 12;
    probe->borrowed = 13;
    probe->reserved[0] = 14;
    probe->reserved[1] = 15;
    namespace_fixture071.probe_returned = effect_file_namespace_construct071(probe) == probe;
    file_fixture068.state.services = &namespace_fs_services071;
    effect_file_filesystem_initialize068(&file_fixture068.state, 0);
    namespace_fixture071.returned = 1;
}

unsigned int effect_namespace_fixture_operation071(unsigned int operation, int config, int borrowed)
{
    NamespaceFixture071 *fixture = &namespace_fixture071;
    unsigned int result;
    fixture->returned = 0;
    if (operation == 0) result = effect_file_namespace_alias071(&fixture->state, fixture->names[0], fixture->names[1]);
    else if (operation == 1) result = effect_file_namespace_unmount071(&fixture->state, fixture->names[0]);
    else if (operation == 2) result = effect_file_namespace_register071(&fixture->state, fixture->names[0], teardown_fixture068.devices, config, borrowed);
    else {
        effect_file_filesystem_shutdown068(&file_fixture068.state);
        if (branch_fixture070.native && (!branch_fixture070.api.close(teardown_fixture068.native_mutex)
            || !branch_fixture070.api.close(teardown_fixture068.stream_mutex))) __builtin_trap();
        teardown_fixture068.native_mutex = 0;
        teardown_fixture068.stream_mutex = 0;
        result = 0;
    }
    fixture->returned = 1;
    return result;
}

__UINTPTR_TYPE__ effect_namespace_fixture_input071(unsigned int slot)
{
    return (__UINTPTR_TYPE__)namespace_fixture071.names[slot];
}

__UINTPTR_TYPE__ effect_namespace_fixture_observe071(unsigned int field)
{
    NamespaceFixture071 *fixture = &namespace_fixture071;
    if (field == 0) return (__UINTPTR_TYPE__)fixture->entries;
    if (field == 1) return fixture->state.default_device != 0;
    if (field == 2) return fixture->releases;
    if (field == 3) return fixture->probe_returned;
    if (field == 4) return fixture->probe.key;
    if (field == 5) return (__UINTPTR_TYPE__)fixture->probe.device;
    if (field == 6) return fixture->probe.config | (fixture->probe.borrowed << 8) | (fixture->probe.reserved[0] << 16) | (fixture->probe.reserved[1] << 24);
    if (field == 7) return fixture->returned;
    __builtin_trap();
}
