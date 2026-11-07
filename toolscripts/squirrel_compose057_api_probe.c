#include "../source/squirrel-wave057/component.h"

#if defined(__cplusplus)
static_assert(sizeof(SqComposeU32_057)==4,"component U32 ABI");
static_assert(sizeof(SqComposeI32_057)==4,"component I32 ABI");
#else
#include "../source/squirrel-wave040/startup.h"

_Static_assert(__builtin_types_compatible_p(__typeof__(&sq_compose_boot057),
    SqVm040 *(*)(void*,SqPrototypeU32,SqPrototypeU32)),"factory C ABI");
_Static_assert(__builtin_types_compatible_p(__typeof__(&sq_compose_run057),
    SqPrototypeU32 (*)(SqVm040*,SqPrototypeU32,SqPrototypeI32,SqPrototypeU32,SqPrototypeU32,SqPrototypeU32*)),
    "synthetic caller C ABI");
#endif
