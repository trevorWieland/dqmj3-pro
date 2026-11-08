#include "device069_source_fixture.c"
#include "branch_threads070.c"

static void branch_initialize070(void *context)
{
    file_initialize068(context);
    ++branch_fixture070.cycles;
}

static void branch_mount070(void *context, EffectFileSystemKind068 kind, const char *name,
    unsigned int entries, unsigned int entry_bytes, EffectFileWorkspace068 *workspace, unsigned int option)
{
    file_mount068(context, kind, name, entries, entry_bytes, workspace, option);
    TeardownFixture068 *fixture = &teardown_fixture068;
    unsigned int index = kind == EFFECT_FILE_ROM068 ? 0 : 1;
    EffectFileDevice068 *device = fixture->pool.free_devices;
    EffectFileStream069 *stream = fixture->streams.free_streams;
    if (!device || !stream) __builtin_trap();
    fixture->pool.free_devices = device->link.next;
    ++fixture->pool.live_count;
    fixture->streams.free_streams = stream->link.next;
    ++fixture->streams.live_count;
    stream->link.operations = &sdk_stream_operations069;
    stream->handle = 0x06800100u + 4 * (branch_fixture070.cycles - 1) + 2 * index;
    device->link.operations = &sdk_device_initial069;
    device->owner = stream;
    for (unsigned int slot = 0; slot < 5; ++slot) device->children[slot] = 0;
    device->children[2] = stream;
    for (unsigned int slot = 0; slot < 2; ++slot) {
        EffectFileEmbedded069 *embedded = device->embedded + slot;
        embedded->type = &sdk_initial_type069;
        embedded->required_empty_0c = 0;
        embedded->head = 0;
        embedded->entry_bytes = slot ? 24 : 32;
        embedded->capacity_bytes = slot ? (index ? 192 : 384) : (index ? 4096 : 8192);
        embedded->backing = (unsigned char *)workspace->memory + 32 + (slot ? (index ? 4096 : 8192) : 0);
        embedded->borrowed_view = embedded->backing;
        embedded->width = 4;
        embedded->flags = 1;
    }
    branch_fixture070.namespace_device[index] = teardown_index068(device);
    branch_fixture070.namespace_flags[index] = 0;
}

static void branch_alias070(void *context, const char *name, const char *target)
{
    file_alias068(context, name, target);
    if (file_name_key068(target) != file_name_key068("rom:") || !file_fixture068.mounts[0].live) return;
    unsigned int index = file_name_key068(name) == file_name_key068("patch:") ? 1 : 0;
    file_fixture068.mounts[index] = file_fixture068.mounts[0];
    file_fixture068.mounts[index].name = name;
    branch_fixture070.namespace_device[index] = branch_fixture070.namespace_device[0];
    branch_fixture070.namespace_flags[index] = 256;
}

static void branch_unmount070(void *context, const char *name)
{
    unsigned int index = file_name_key068(name) == file_name_key068("patch:") ? 1 : 0;
    unsigned int live = file_fixture068.mounts[index].live;
    unsigned int device = branch_fixture070.namespace_device[index];
    file_unmount068(context, name);
    branch_fixture070.namespace_device[index] = 16;
    if (live && branch_fixture070.namespace_flags[index] != 256) {
        if (device >= 16) __builtin_trap();
        teardown_fixture068.current = device;
        effect_file_device_pool_release068(&teardown_fixture068.context, teardown_fixture068.devices + device);
    }
}

static const EffectFileBootstrapServices068 branch_fs_services070 = {
    &file_fixture068, branch_initialize070, file_requirements068, file_allocate068,
    branch_mount070, branch_alias070, branch_unmount070, file_release068
};

void effect_branch_fixture_prepare070(unsigned int native, const QueueWinApi067 *api, unsigned int mode)
{
    effect_file_fixture_teardown_prepare068(native, api);
    unsigned char *bytes = (unsigned char *)&branch_fixture070;
    for (__SIZE_TYPE__ offset = 0; offset < sizeof(branch_fixture070); ++offset) bytes[offset] = 0;
    branch_fixture070.native = native;
    branch_fixture070.mode = mode;
    branch_fixture070.cpu_identity = 2;
    branch_fixture070.namespace_device[0] = 16;
    branch_fixture070.namespace_device[1] = 16;
    if (native) {
        branch_fixture070.api = *api;
        branch_fixture070.parent_identity = api->thread_id();
    }
    TeardownFixture068 *fixture = &teardown_fixture068;
    fixture->pool.free_devices = fixture->devices;
    fixture->pool.live_count = 0;
    fixture->streams.free_streams = fixture->stream_nodes;
    fixture->streams.live_count = 0;
    for (unsigned int index = 0; index < 16; ++index)
        fixture->devices[index].link.next = index + 1 < 16 ? fixture->devices + index + 1 : 0;
    for (unsigned int index = 0; index < 32; ++index) {
        fixture->stream_nodes[index].link.next = index + 1 < 32 ? fixture->stream_nodes + index + 1 : 0;
        fixture->stream_nodes[index].handle = 0;
    }
    file_fixture068.state.services = &branch_fs_services070;
    if (!effect_queue_bind067(&branch_services070)) __builtin_trap();
    if (mode == 1) graph_fixture065.fail_at = 3;
}

void effect_branch_fixture_start070(void)
{
    if (branch_fixture070.mode == 0) effect_file_filesystem_initialize068(&file_fixture068.state, 0);
    else effect_file_bootstrap_initialize068(&file_fixture068.state);
    branch_fixture070.returned = 1;
}

void effect_branch_fixture_warm070(void)
{
    effect_file_filesystem_shutdown068(&file_fixture068.state);
    effect_file_bootstrap_initialize068(&file_fixture068.state);
    branch_fixture070.returned = 2;
}

void effect_branch_fixture_finish070(void)
{
    effect_file_bootstrap_shutdown068(&file_fixture068.state);
    if (branch_fixture070.native && (!branch_fixture070.api.close(teardown_fixture068.native_mutex)
        || !branch_fixture070.api.close(teardown_fixture068.stream_mutex))) __builtin_trap();
    teardown_fixture068.native_mutex = 0;
    teardown_fixture068.stream_mutex = 0;
    branch_fixture070.finished = 1;
}

__UINTPTR_TYPE__ effect_branch_fixture_observe070(unsigned int field)
{
    BranchFixture070 *fixture = &branch_fixture070;
    if (field == 0) return graph_fixture065.allocations;
    if (field == 1) return graph_fixture065.attempts;
    if (field == 2) return fixture->cycles;
    if (field >= 3 && field <= 7) {
        unsigned int result = 0;
        for (unsigned int index = 0; index < 2; ++index) {
            BranchThreadSlot070 *slot = fixture->slots + index;
            if (field == 3) result += slot->creates;
            if (field == 4) result += slot->joins;
            if (field == 5) result += slot->closes;
            if (field == 6) result += slot->sleeps;
            if (field == 7) result += slot->exited;
        }
        return result;
    }
    if (field == 8) return fixture->returned;
    if (field == 9) return fixture->finished;
    if (field == 10 || field == 11) return (__UINTPTR_TYPE__)fixture->managers[field - 10];
    if (field == 12 || field == 13) return fixture->namespace_device[field - 12];
    if (field == 14 || field == 15) return fixture->namespace_flags[field - 14];
    if (field == 16) return fixture->manager_count;
    __builtin_trap();
}
