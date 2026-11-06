#ifndef DQMJ3_MEMORY_TEST_API_H
#define DQMJ3_MEMORY_TEST_API_H
typedef unsigned char u8;
typedef unsigned int u32;
typedef __SIZE_TYPE__ usize;
_Static_assert(sizeof(u32) == 4, "u32 width");
_Static_assert(sizeof(void *) == 8, "host64 pointer width");
typedef struct {
    usize handle_size;
    usize record_size;
    usize pointer_offset;
    usize field_offset;
    usize handle_alignment;
    usize record_alignment;
    u32 width;
    u32 setter;
    void (*prepare)(void *handle, void *record);
    u32 (*invoke)(void *handle, u32 value);
} TestSpec;
const TestSpec *memory_test_lookup(u32 id);
u32 memory_test_count(void);
void memory_test_run(const TestSpec *spec, u32 value, u32 geometry, u32 result[5]);
#endif
