#include "mixed_lifetime_fixture.h"

__declspec(dllimport) void *malloc(unsigned long long bytes);
__declspec(dllimport) void free(void *pointer);
__declspec(dllimport) int printf(const char *format, ...);
__declspec(dllimport) void ExitProcess(unsigned int result) __attribute__((noreturn));

void *fixture_original_assign012(void *destination, const void *source) { (void)source; ExitProcess(95); return destination; }
void fixture_original_resize012(void *vector, SqU32 requested, const void *fill) { (void)vector; (void)requested; (void)fill; ExitProcess(95); }
void *fixture_original_destroy012(void *vector) { ExitProcess(95); return vector; }

void mainCRTStartup(void)
{
    unsigned char *arena = malloc(0x10000);
    if (!fixture_mixed_bind012(arena, 0x10000, &sq_native_closure_vtable013, &sq_prototype_vtable011, &sq_prototype_base_vtable011)) ExitProcess(96);
    for (SqU32 variant = 0; variant < 4; variant++) {
        for (SqU32 operation = 0; operation < 3; operation++) {
            fixture_mixed_prepare012(variant, operation);
            fixture_mixed_source012(operation);
            SqU32 output[160];
            SqU32 count = fixture_mixed_snapshot012(output, 160);
            printf("{\"variant\":%u,\"operation\":%u,\"words\":[", variant, operation);
            for (SqU32 index = 0; index < count; index++) printf(index ? ",%u" : "%u", output[index]);
            printf("]}\n");
        }
    }
    free(arena);
    ExitProcess(0);
}
