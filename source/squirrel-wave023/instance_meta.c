#include "instance_meta.h"

_Bool sq_instance_get_meta023(SqLookupInstanceStorage020 *instance, void *vm,
    SqPrototypeU32 selector, SqPrefixObject012 *destination)
{
    (void)vm;
    const SqPrefixObject012 *method = instance->klass->values56.values + selector;
    if (method->type == 0x01000001u) return 0;
    sq_prefix_assign(destination, method);
    return 1;
}
