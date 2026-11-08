#include "effect_queue067_source_fixture.c"
#include "../src/native/wave068-bootstrap/bootstrap.h"

typedef struct FileMountFixture068 {
    EffectFileSystemKind068 kind;
    const char *name;
    void *workspace;
    unsigned int logical_bytes;
    unsigned int entries;
    unsigned int entry_bytes;
    unsigned int option;
    unsigned int live;
} FileMountFixture068;

typedef struct FileBootstrapFixture068 {
    EffectFileBootstrap068 state;
    unsigned int initialized;
    unsigned int returned;
    unsigned int count;
    unsigned int trace[32][8];
    FileMountFixture068 mounts[2];
} FileBootstrapFixture068;

static FileBootstrapFixture068 file_fixture068;

static unsigned long long file_name_key068(const char *name)
{
    unsigned long long key = 0;
    while (*name != 0 && *name != ':')
        key = (key << 8) | (unsigned char)*name++;
    return key;
}

static void file_trace068(unsigned int operation, unsigned int kind, unsigned int entries,
    unsigned int entry_bytes, unsigned int logical, unsigned int option, const char *name)
{
    unsigned int slot = file_fixture068.count++;
    if (slot >= 32)
        __builtin_trap();
    unsigned int *row = file_fixture068.trace[slot];
    unsigned long long key = name != 0 ? file_name_key068(name) : 0;
    row[0] = operation;
    row[1] = kind;
    row[2] = entries;
    row[3] = entry_bytes;
    row[4] = logical;
    row[5] = option;
    row[6] = (unsigned int)key;
    row[7] = (unsigned int)(key >> 32);
}

static void file_initialize068(void *context)
{
    if (context != &file_fixture068)
        __builtin_trap();
    file_fixture068.initialized = 1;
    file_trace068(0, 0, 0, 0, 0, 0, 0);
}

static EffectFileWorkspaceSize068 file_requirements068(void *context, EffectFileSystemKind068 kind,
    unsigned int entries, unsigned int entry_bytes, unsigned int option)
{
    if (context != &file_fixture068 || !file_fixture068.initialized)
        __builtin_trap();
    file_trace068(1, kind, entries, entry_bytes, 0, option, 0);
    unsigned int bytes = kind == EFFECT_FILE_ROM068 ? 8608 : 4320;
    EffectFileWorkspaceSize068 result = {bytes, bytes, _Alignof(void *)};
    return result;
}

static void *file_allocate068(void *context, EffectFileSystemKind068 kind, const EffectFileWorkspaceSize068 *size)
{
    if (context != &file_fixture068)
        __builtin_trap();
    file_trace068(2, kind, 0, 0, size->logical_bytes, 0, 0);
    return graph_allocate065(0x680000u + kind, size->logical_bytes, size->native_bytes, size->native_alignment, 0);
}

static void file_mount068(void *context, EffectFileSystemKind068 kind, const char *name,
    unsigned int entries, unsigned int entry_bytes, EffectFileWorkspace068 *workspace, unsigned int option)
{
    if (context != &file_fixture068 || workspace->memory == 0)
        __builtin_trap();
    FileMountFixture068 *mount = file_fixture068.mounts + (kind == EFFECT_FILE_ROM068 ? 0 : 1);
    mount->kind = kind;
    mount->name = name;
    mount->workspace = workspace->memory;
    mount->logical_bytes = workspace->size.logical_bytes;
    mount->entries = entries;
    mount->entry_bytes = entry_bytes;
    mount->option = option;
    mount->live = 1;
    file_trace068(3, kind, entries, entry_bytes, workspace->size.logical_bytes, option, name);
}

static void file_alias068(void *context, const char *name, const char *target)
{
    if (context != &file_fixture068)
        __builtin_trap();
    unsigned long long key = file_name_key068(target);
    file_trace068(4, (unsigned int)key, 0, 0, 0, 0, name);
}

static void file_unmount068(void *context, const char *name)
{
    if (context != &file_fixture068)
        __builtin_trap();
    unsigned long long key = file_name_key068(name);
    for (unsigned int index = 0; index != 2; ++index)
        if (file_fixture068.mounts[index].name != 0 && file_name_key068(file_fixture068.mounts[index].name) == key)
            file_fixture068.mounts[index].live = 0;
    file_trace068(5, 0, 0, 0, 0, 0, name);
}

static void file_release068(void *context, EffectFileSystemKind068 kind, EffectFileWorkspace068 *workspace)
{
    if (context != &file_fixture068)
        __builtin_trap();
    file_trace068(6, kind, 0, 0, workspace->size.logical_bytes, 0, 0);
    graph_release065(workspace->memory, 0, 0);
}

static const EffectFileBootstrapServices068 file_services068 = {
    &file_fixture068, file_initialize068, file_requirements068, file_allocate068,
    file_mount068, file_alias068, file_unmount068, file_release068
};

void effect_file_fixture_prepare068(unsigned int native, const QueueWinApi067 *api)
{
    unsigned char *bytes = (unsigned char *)&file_fixture068;
    for (__SIZE_TYPE__ index = 0; index < sizeof(file_fixture068); ++index)
        bytes[index] = 0;
    file_fixture068.state.services = &file_services068;
    effect_queue_fixture_initialize067(native, api);
}

void effect_file_fixture_start068(void)
{
    effect_file_bootstrap_initialize068(&file_fixture068.state);
    file_fixture068.returned = 1;
}

unsigned int effect_file_fixture_count068(void) { return file_fixture068.count; }
const unsigned int *effect_file_fixture_trace068(void) { return file_fixture068.trace[0]; }

__UINTPTR_TYPE__ effect_file_fixture_observe068(unsigned int field)
{
    EffectFileBootstrap068 *state = &file_fixture068.state;
    EffectQueueWorker067 *worker = state->manager != 0 ? state->manager->worker : 0;
    switch (field) {
    case 0: return (__UINTPTR_TYPE__)state->manager;
    case 1: return (__UINTPTR_TYPE__)state->rom.memory;
    case 2: return (__UINTPTR_TYPE__)state->patch.memory;
    case 3: return (__UINTPTR_TYPE__)worker;
    case 4: return worker != 0 ? worker->running : 0;
    case 5: return worker != 0 && worker->pending != 0;
    case 6: return worker != 0 && worker->deferred != 0;
    case 7: return worker != 0 && worker->current != 0;
    case 8: return state->rom.size.logical_bytes;
    case 9: return state->patch.size.logical_bytes;
    case 10: return state->rom.size.native_bytes;
    case 11: return state->patch.size.native_bytes;
    case 12: return file_fixture068.mounts[0].live;
    case 13: return file_fixture068.mounts[1].live;
    case 14: return (__UINTPTR_TYPE__)file_fixture068.mounts[0].workspace;
    case 15: return (__UINTPTR_TYPE__)file_fixture068.mounts[1].workspace;
    case 16: return (__UINTPTR_TYPE__)file_fixture068.mounts[0].name;
    case 17: return (__UINTPTR_TYPE__)file_fixture068.mounts[1].name;
    case 18: return queue_fixture067.creates;
    case 19: return (__UINTPTR_TYPE__)state->unknown_00;
    case 20: return file_fixture068.mounts[0].kind;
    case 21: return file_fixture068.mounts[1].kind;
    case 22: return (__UINTPTR_TYPE__)state->services;
    case 23: return sizeof(void *);
    case 24: return sizeof(file_services068);
    case 25: return file_fixture068.returned;
    }
    __builtin_trap();
}
