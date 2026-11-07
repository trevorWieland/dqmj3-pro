#include "array_lifetime_fixture.h"

__declspec(dllimport) void *malloc(__SIZE_TYPE__ bytes);
__declspec(dllimport) void free(void *pointer);
__declspec(dllimport) int printf(const char *format, ...);
__declspec(dllimport) __attribute__((noreturn)) void ExitProcess(unsigned int status);

void *fixture_original_assign012(void *destination, const void *source)
{ (void)destination; (void)source; ExitProcess(95); }
void fixture_original_resize012(void *vector, SqU32 requested, const void *fill)
{ (void)vector; (void)requested; (void)fill; ExitProcess(95); }
void *fixture_original_destroy012(void *vector)
{ (void)vector; ExitProcess(95); }
SqOpaqueArray012 *fixture_original_array_create012(SqPrefixState012 *state, SqU32 requested)
{ (void)state; (void)requested; ExitProcess(95); }
SqWeakReference014 *fixture_original_weak_create012(SqPrototypePrefix011 *owner, SqU32 type)
{ (void)owner; (void)type; ExitProcess(95); }

void mainCRTStartup(void)
{
    void *arena = malloc(0x10000);
    if (!arena || !fixture_array_bind012(arena, 0x10000, &sq_native_closure_vtable013,
        &sq_prototype_vtable011, &sq_prototype_base_vtable011, &sq_opaque_array_vtable012, &sq_weak_vtable014)) ExitProcess(96);
    const SqU32 sizes[] = {0, 1, 2, 4, 9};
    for (SqU32 variant = 0; variant < 4; variant++) {
        for (SqU32 index = 0; index < 5; index++) {
            for (SqU32 order = 0; order < 3; order++) {
                for (SqU32 failed = 0; failed < 2; failed++) {
                    fixture_array_prepare012(variant, sizes[index], order, failed);
                    fixture_array_run012(1);
                    SqU32 words[512];
                    SqU32 count = fixture_array_snapshot012(words, 512);
                    if (!count) ExitProcess(97);
                    printf("{\"variant\":%u,\"requested\":%u,\"weak_order\":%u,\"failed\":%u,\"words\":[", variant, sizes[index], order, failed);
                    for (SqU32 field = 0; field < count; field++) printf("%s%u", field ? "," : "", words[field]);
                    printf("]}\n");
                }
            }
        }
    }
    free(arena);
    ExitProcess(0);
}
