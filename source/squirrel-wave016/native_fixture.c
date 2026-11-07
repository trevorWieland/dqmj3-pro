#include "fixture.h"

__declspec(dllimport) void *malloc(__SIZE_TYPE__ bytes);
__declspec(dllimport) void free(void *pointer);
__declspec(dllimport) int printf(const char *format, ...);
__declspec(dllimport) __attribute__((noreturn)) void ExitProcess(unsigned int status);

void fixture_original_create016(void *vm, SqNativeCallable013 function, SqPrototypeU32 captures)
{
    (void)vm; (void)function; (void)captures;
    ExitProcess(95);
}

void fixture_original_pop016(void *vm)
{
    (void)vm;
    ExitProcess(96);
}

void mainCRTStartup(void)
{
    void *arena = malloc(0x10000);
    if (!arena || !fixture_native_bind016(arena, 0x10000, &sq_native_closure_vtable013,
        &sq_prototype_vtable011, &sq_prototype_base_vtable011)) ExitProcess(97);
    const SqPrototypeU32 captures[] = {0, 1, 2, 4, 5, 8, 9};
    for (SqPrototypeU32 index = 0; index < 7; index++) {
        for (SqPrototypeU32 flags = 0; flags < 8; flags++) {
            for (SqPrototypeU32 cleanup = 0; cleanup < 2; cleanup++) {
                fixture_native_prepare016(captures[index], flags);
                fixture_native_run016(1, captures[index], cleanup);
                SqPrototypeU32 words[512];
                SqPrototypeU32 count = fixture_native_snapshot016(words, 512);
                if (!count) ExitProcess(98);
                printf("{\"captures\":%u,\"flags\":%u,\"cleanup\":%u,\"words\":[", captures[index], flags, cleanup);
                for (SqPrototypeU32 field = 0; field < count; field++) printf("%s%u", field ? "," : "", words[field]);
                printf("]}\n");
            }
        }
    }
    free(arena);
    ExitProcess(0);
}
