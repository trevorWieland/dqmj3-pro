#include "test_api.h"

#if defined(_WIN32)
__declspec(dllimport) void *GetProcessHeap(void);
__declspec(dllimport) void *HeapAlloc(void *heap, u32 flags, usize size);
__declspec(dllimport) int HeapFree(void *heap, u32 flags, void *memory);
static void *allocate(usize size) { return HeapAlloc(GetProcessHeap(), 0, size); }
static void release(void *memory) { if (memory) HeapFree(GetProcessHeap(), 0, memory); }
#else
extern void *malloc(usize size);
extern void free(void *memory);
static void *allocate(usize size) { return malloc(size); }
static void release(void *memory) { free(memory); }
#endif

static void fill(u8 *memory, usize size) {
    usize i;
    for (i = 0; i < size; ++i) memory[i] = 0xa5;
}

static void copy(u8 *target, const u8 *source, usize size) {
    usize i;
    for (i = 0; i < size; ++i) target[i] = source[i];
}

static int equal(const u8 *left, const u8 *right, usize size) {
    usize i;
    for (i = 0; i < size; ++i) if (left[i] != right[i]) return 0;
    return 1;
}

static void bits_write(u8 *target, u32 value, u32 width) {
    u32 i;
    for (i = 0; i < width; ++i) target[i] = (u8)(value >> (i * 8));
}

static u32 bits_read(const u8 *source, u32 width) {
    u32 i;
    u32 value = 0;
    for (i = 0; i < width; ++i) value |= (u32)source[i] << (i * 8);
    return value;
}

void memory_test_run(const TestSpec *spec, u32 value, u32 geometry, u32 result[5]) {
    usize root_size = spec->handle_size * 2;
    usize data_size = spec->record_size * 2;
    u8 *roots = allocate(root_size);
    u8 *records = allocate(data_size);
    u8 *root_before = allocate(root_size);
    u8 *record_expected = allocate(data_size);
    u32 index = geometry & 1u;
    u8 *root = roots ? roots + index * spec->handle_size : (u8 *)0;
    u8 *record = records ? records + index * spec->record_size : (u8 *)0;
    u32 returned = 0;
    result[0] = 0;
    result[1] = 0;
    result[2] = (u32)spec->pointer_offset;
    result[3] = sizeof(void *);
    result[4] = index;
    if (!roots || !records || !root_before || !record_expected) goto cleanup;
    fill(roots, root_size);
    fill(records, data_size);
    if (!spec->setter) bits_write(record + spec->field_offset, value, spec->width);
    spec->prepare(root, record);
    copy(root_before, roots, root_size);
    copy(record_expected, records, data_size);
    if (spec->setter) bits_write(record_expected + index * spec->record_size + spec->field_offset, value, spec->width);
    returned = spec->invoke(root, value);
    result[0] = spec->setter ? bits_read(record + spec->field_offset, spec->width) : returned;
    result[1] = 1;
    if (equal(roots, root_before, root_size) && equal(records, record_expected, data_size)) result[1] |= 2;
    if ((usize)root % spec->handle_alignment == 0 && (usize)record % spec->record_alignment == 0) result[1] |= 4;
    if (!spec->setter || returned == 1) result[1] |= 8;
cleanup:
    release(record_expected);
    release(root_before);
    release(records);
    release(roots);
}
