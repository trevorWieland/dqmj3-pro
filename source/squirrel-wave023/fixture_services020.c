#define sq_lookup_invoke020 fixture_invoke020_boundary
#define sq_lookup_format_float020 fixture_float020_unsupported
#define sq_opaque_array_allocate012 fixture_array020_unsupported
#define sq_reallocate fixture_reallocate020_unsupported
#include "../squirrel-wave020/fixture_services.c"
#undef sq_lookup_invoke020
#undef sq_lookup_format_float020
#undef sq_opaque_array_allocate012
#undef sq_reallocate
#include "fixture_internal.h"
#include "float_text.h"

void sq_lookup_format_float020(char *destination, double value)
{
    float narrowed = (float)value;
    SqPrototypeU32 bits;
    __builtin_memcpy(&bits, &narrowed, sizeof(bits));
    if (!sq_float_binary32_text023(destination, bits)) {
        lookup_fixture020.fault = 95;
        for (;;) { }
    }
}

_Bool sq_lookup_invoke020(void *vm, const SqPrefixObject012 *callable, SqPrototypeI32 arguments,
    SqPrototypeI32 base, SqPrefixObject012 *destination, SqPrototypeU32 raise_error)
{
    if (fixture_variant023 >= 200) return fixture_real_invoke023(vm, callable, arguments, base, destination, raise_error);
    return fixture_invoke020_boundary(vm, callable, arguments, base, destination, raise_error);
}

void *sq_opaque_array_allocate012(SqPrototypeU32 bytes) { return fixture_array_allocate023(bytes); }
void *sq_reallocate(void *owner, SqU32 old_bytes, SqU32 new_bytes)
{ return fixture_vector_reallocate023(owner, old_bytes, new_bytes); }
