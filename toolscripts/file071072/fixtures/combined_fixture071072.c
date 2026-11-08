#include "construction072_dependency_fixture.c"

static unsigned int combined_mode071072;

static void combined_release071072(EffectFileDevice068 *device)
{
    ++namespace_fixture071.releases;
    construction_release_bridge072(device);
}

static unsigned int combined_slot071072(const char *name)
{
    return file_name_key068(name) == file_name_key068("patch:") ? 1 : 0;
}

static EffectFileNamespaceEntry071 *combined_entry071072(const char *name)
{
    unsigned long long key = file_name_key068(name);
    for (unsigned int index = 0; index < 32; ++index)
        if (namespace_fixture071.entries[index].key == key && namespace_fixture071.entries[index].device)
            return namespace_fixture071.entries + index;
    return 0;
}

static void combined_mount071072(void *context, EffectFileSystemKind068 kind, const char *name,
    unsigned int entries, unsigned int entry_bytes, EffectFileWorkspace068 *workspace, unsigned int option)
{
    unsigned int selector[3] = {kind == EFFECT_FILE_ROM068 ? 0 : 5, 0, 0};
    EffectFileDevice068 *device = 0;
    int result = effect_file_device_factory072(&construction_fixture072.state, &device, entries,
        entry_bytes, workspace->memory, workspace->size.logical_bytes, option, selector);
    if (result || !device) __builtin_trap();
    if (effect_file_namespace_register071(&namespace_fixture071.state, (const unsigned char *)name, device, 0, 0)) __builtin_trap();
    file_mount068(context, kind, name, entries, entry_bytes, workspace, option);
    unsigned int index = combined_slot071072(name);
    branch_fixture070.namespace_device[index] = teardown_index068(device);
    branch_fixture070.namespace_flags[index] = 0;
}

static void combined_alias071072(void *context, const char *name, const char *target)
{
    (void)effect_file_namespace_alias071(&namespace_fixture071.state, (const unsigned char *)name, (const unsigned char *)target);
    file_alias068(context, name, target);
    EffectFileNamespaceEntry071 *entry = combined_entry071072(name);
    unsigned int index = combined_slot071072(name), source = combined_slot071072(target);
    if (!entry) {
        branch_fixture070.namespace_device[index] = 16;
        return;
    }
    file_fixture068.mounts[index] = file_fixture068.mounts[source];
    file_fixture068.mounts[index].name = name;
    branch_fixture070.namespace_device[index] = teardown_index068(entry->device);
    branch_fixture070.namespace_flags[index] = entry->config | (unsigned int)entry->borrowed << 8;
}

static void combined_unmount071072(void *context, const char *name)
{
    unsigned int index = combined_slot071072(name);
    EffectFileNamespaceEntry071 *entry = combined_entry071072(name);
    (void)effect_file_namespace_unmount071(&namespace_fixture071.state, (const unsigned char *)name);
    file_unmount068(context, name);
    branch_fixture070.namespace_device[index] = 16;
    if (entry) branch_fixture070.namespace_flags[index] = entry->config | (unsigned int)entry->borrowed << 8;
}

static const EffectFileBootstrapServices068 combined_services071072 = {
    &file_fixture068, branch_initialize070, file_requirements068, file_allocate068,
    combined_mount071072, combined_alias071072, combined_unmount071072, file_release068
};

void effect_combined_fixture_prepare071072(unsigned int native, const QueueWinApi067 *api, unsigned int mode)
{
    effect_construction_fixture_prepare072(native, api, 0, 0);
    combined_mode071072 = mode;
    branch_fixture070.mode = mode;
    if (mode == 1) graph_fixture065.fail_at = 3;
    unsigned char *bytes = (unsigned char *)&namespace_fixture071;
    for (__SIZE_TYPE__ index = 0; index < sizeof(namespace_fixture071); ++index) bytes[index] = 0;
    namespace_fixture071.state.entries = namespace_fixture071.entries;
    namespace_fixture071.state.fatal = namespace_fatal071;
    construction_fixture072.device_operations.release = combined_release071072;
    for (unsigned int index = 0; index < 32; ++index) effect_file_namespace_construct071(namespace_fixture071.entries + index);
    EffectFileNamespaceEntry071 *probe = &namespace_fixture071.probe;
    probe->key = 0x0706050403020100ull;
    probe->device = (EffectFileDevice068 *)(__UINTPTR_TYPE__)0x0b0a0908u;
    probe->config = 12; probe->borrowed = 13; probe->reserved[0] = 14; probe->reserved[1] = 15;
    namespace_fixture071.probe_returned = effect_file_namespace_construct071(probe) == probe;
    file_fixture068.state.services = &combined_services071072;
}

void effect_combined_namespace_prepare071072(unsigned int native, const QueueWinApi067 *api)
{
    effect_combined_fixture_prepare071072(native, api, 0);
    effect_file_filesystem_initialize068(&file_fixture068.state, 0);
    namespace_fixture071.returned = 1;
}

void effect_combined_fixture_finish071072(void)
{
    effect_branch_fixture_finish070();
    if (construction_fixture072.native && !queue_fixture067.api.close(construction_fixture072.guard_mutex)) __builtin_trap();
}

unsigned int effect_combined_namespace_operation071072(unsigned int operation, int config, int borrowed)
{
    unsigned int result = effect_namespace_fixture_operation071(operation, config, borrowed);
    if (operation == 3 && construction_fixture072.native
        && !queue_fixture067.api.close(construction_fixture072.guard_mutex)) __builtin_trap();
    return result;
}

__UINTPTR_TYPE__ effect_combined_fixture_observe071072(unsigned int field)
{
    if (field == 0) return construction_fixture072.handle_count;
    if (field == 1) return effect_construction_fixture_observe072(9);
    if (field == 2) return construction_fixture072.operation_count;
    if (field == 3) return (__UINTPTR_TYPE__)construction_fixture072.operations;
    if (field == 4) return namespace_fixture071.releases;
    if (field == 5) return combined_mode071072;
    __builtin_trap();
}
