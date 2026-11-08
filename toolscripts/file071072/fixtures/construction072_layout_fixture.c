unsigned int effect_construction_fixture_layout072(unsigned int index)
{
    unsigned int offset, pointer = 0;
    if (index == 76) return sizeof(EffectFileDevice068);
    if (index == 77) return sizeof(EffectFileStream069);
    if (index == 78) return sizeof(EffectFilePool072);
    if (index == 0) { offset = __builtin_offsetof(EffectFileDevice068, link); pointer = 1; }
    else if (index == 1) offset = __builtin_offsetof(EffectFileDevice068, unknown_04);
    else if (index == 2) { offset = __builtin_offsetof(EffectFileDevice068, owner); pointer = 1; }
    else if (index < 8) { offset = __builtin_offsetof(EffectFileDevice068, children) + (index - 3) * sizeof(void *); pointer = 1; }
    else if (index < 16 || (index >= 18 && index < 26)) {
        unsigned int slot = index < 16 ? index - 8 : index - 18;
        offset = index < 16 ? __builtin_offsetof(EffectFileDevice068, interior.directory) : __builtin_offsetof(EffectFileDevice068, interior.files);
        offset += (slot / 4) * sizeof(EffectFileCache072);
        if (slot % 4 < 3) offset += slot % 4 * 4;
        else { offset += __builtin_offsetof(EffectFileCache072, view); pointer = 1; }
    } else if (index < 18) offset = __builtin_offsetof(EffectFileDevice068, interior.directory_state) + (index - 16) * 4;
    else if (index < 28) offset = __builtin_offsetof(EffectFileDevice068, interior.file_state) + (index - 26) * 4;
    else if (index < 44) {
        unsigned int slot = index - 28;
        offset = __builtin_offsetof(EffectFileDevice068, interior.views) + slot / 4 * sizeof(EffectFileView072);
        if (slot % 4 == 0) { offset += __builtin_offsetof(EffectFileView072, memory); pointer = 1; }
        else if (slot % 4 == 1) offset += __builtin_offsetof(EffectFileView072, bytes);
        else if (slot % 4 == 2) { offset += __builtin_offsetof(EffectFileView072, reader); pointer = 1; }
        else { offset += __builtin_offsetof(EffectFileView072, position); pointer = 1; }
    } else if (index < 46) offset = __builtin_offsetof(EffectFileDevice068, interior.data_offset) + (index - 44) * 4;
    else if (index < 76) {
        unsigned int slot = (index - 46) % 15;
        offset = __builtin_offsetof(EffectFileDevice068, embedded) + (index - 46) / 15 * sizeof(EffectFileEmbedded069);
        if (slot == 0) { offset += __builtin_offsetof(EffectFilePool072, type); pointer = 1; }
        else if (slot == 1) offset += __builtin_offsetof(EffectFilePool072, unknown_04);
        else if (slot == 2) offset += __builtin_offsetof(EffectFilePool072, unknown_08);
        else if (slot == 3) { offset += __builtin_offsetof(EffectFilePool072, required_empty_0c); pointer = 1; }
        else if (slot == 4) { offset += __builtin_offsetof(EffectFilePool072, head); pointer = 1; }
        else if (slot == 5) offset += __builtin_offsetof(EffectFilePool072, header_flags);
        else if (slot == 6) offset += __builtin_offsetof(EffectFilePool072, entry_bytes);
        else if (slot == 7) { offset += __builtin_offsetof(EffectFilePool072, backing); pointer = 1; }
        else if (slot == 8) offset += __builtin_offsetof(EffectFilePool072, capacity_bytes);
        else if (slot == 9) { offset += __builtin_offsetof(EffectFilePool072, free_nodes); pointer = 1; }
        else if (slot == 10) offset += __builtin_offsetof(EffectFilePool072, alignment);
        else if (slot == 11) offset += __builtin_offsetof(EffectFilePool072, live_count);
        else if (slot == 12) offset += __builtin_offsetof(EffectFilePool072, mutex.kind);
        else if (slot == 13) { offset += __builtin_offsetof(EffectFilePool072, mutex.owner); pointer = 1; }
        else offset += __builtin_offsetof(EffectFilePool072, mutex.depth);
    } else __builtin_trap();
    return offset | pointer << 16;
}

__UINTPTR_TYPE__ effect_construction_fixture_types072(unsigned int index)
{
    if (index == 0) return (__UINTPTR_TYPE__)construction_fixture072.state.device_operations;
    if (index == 1) return (__UINTPTR_TYPE__)construction_fixture072.state.embedded_type;
    if (index == 2) return (__UINTPTR_TYPE__)construction_fixture072.state.stream_operations;
    if (index == 3) return (__UINTPTR_TYPE__)teardown_fixture068.sdk.device_base_operations;
    if (index == 4) return (__UINTPTR_TYPE__)teardown_fixture068.sdk.embedded_base_type;
    __builtin_trap();
}
