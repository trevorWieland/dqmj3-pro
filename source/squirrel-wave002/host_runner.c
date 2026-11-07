#include "array_views.h"

__declspec(dllimport) void *malloc(__SIZE_TYPE__ size);
__declspec(dllimport) void *realloc(void *pointer, __SIZE_TYPE__ size);
__declspec(dllimport) void free(void *pointer);
__declspec(dllimport) int printf(const char *format, ...);
__declspec(dllimport) void ExitProcess(unsigned code);

static SqU32 releases;

static void release_reference(SqRef *reference)
{
    if (reference->references == 0) {
        releases++;
    }
}

const SqVTable sq_array_vtable = {0, 0, release_reference};

void *sq_allocate(SqU32 bytes)
{
    return malloc(bytes);
}

void *sq_reallocate(void *pointer, SqU32 old_bytes, SqU32 new_bytes)
{
    (void)old_bytes;
    return realloc(pointer, new_bytes);
}

static int exercise(void)
{
    SqState state = {0};
    SqRef node = {&sq_array_vtable, 0, 0, 0, 0};
    SqObject fill;
    SqArray *first = fn_00665a44(&state, 3);
    SqArray *second;
    if (!first || state.chain != &first->reference || first->shared != &state) {
        return 1;
    }
    if (first->vector.size != 3 || first->vector.capacity != 3 || first->reference.references != 0) {
        return 2;
    }
    for (SqU32 index = 0; index < 3; index++) {
        if (first->vector.values[index].type != 0x01000001u || first->vector.values[index].value.bits != 0) {
            return 3;
        }
    }
    second = fn_00665a44(&state, 0);
    if (!second || state.chain != &second->reference || second->reference.next != &first->reference
        || first->reference.previous != &second->reference) {
        return 4;
    }
    fill.type = 0x08000040u;
    fill.value.reference = &node;
    fn_0019d320(&first->vector, 9, &fill);
    if (node.references != 6 || first->vector.size != 9 || first->vector.capacity != 9) {
        return 5;
    }
    for (SqU32 index = 3; index < 9; index++) {
        if (first->vector.values[index].type != fill.type || first->vector.values[index].value.reference != &node) {
            return 6;
        }
    }
    fn_0019d320(&first->vector, 3, &fill);
    if (node.references != 0 || releases != 1 || first->vector.capacity != 9 || first->vector.size != 3) {
        return 7;
    }
    fn_0019d320(&first->vector, 0, &fill);
    if (releases != 1 || first->vector.size != 0) {
        return 8;
    }
    free(first->vector.values);
    free(first);
    free(second);
    return 0;
}

void mainCRTStartup(void)
{
    int result = exercise();
    printf("{\"component\":\"authored-array-lifecycle\",\"result\":%d,\"pointerBytes\":%u,\"objectBytes\":%u,\"arrayBytes\":%u,\"releaseCallbacks\":%u}\n",
           result, (unsigned)sizeof(void *), (unsigned)sizeof(SqObject), (unsigned)sizeof(SqArray), releases);
    ExitProcess((unsigned)result);
}
