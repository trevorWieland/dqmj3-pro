#include "startup.h"

static const SqStartupServices040 *startup_services;

_Bool sq_startup_bind040(const SqStartupServices040 *services)
{
    if (!services || !services->allocate || !services->vm_operations || !services->live_null_template)
        return 0;
    startup_services=services;
    return 1;
}

const SqStartupServices040 *sq_startup_services040(void)
{
    return startup_services;
}

SqPrefixState012 *sq_shared_prefix040(SqSharedState040 *state)
{
    return &state->common.common.common.common;
}

SqStartupRefTable040 *sq_shared_references040(SqSharedState040 *state)
{
#if __SIZEOF_POINTER__ == 4
    return &state->target.references;
#else
    return &state->fields.references;
#endif
}

SqPrefixObject012 *sq_shared_registry040(SqSharedState040 *state)
{
#if __SIZEOF_POINTER__ == 4
    return &state->target.registry;
#else
    return &state->fields.registry;
#endif
}

SqPrefixObject012 *sq_shared_constants040(SqSharedState040 *state)
{
#if __SIZEOF_POINTER__ == 4
    return &state->target.constants;
#else
    return &state->fields.constants;
#endif
}

SqPrefixObject012 *sq_shared_special040(SqSharedState040 *state)
{
#if __SIZEOF_POINTER__ == 4
    return &state->target.special;
#else
    return &state->fields.special;
#endif
}

void sq_shared_null_meta040(SqSharedState040 *state)
{
#if __SIZEOF_POINTER__ == 4
    sq_startup_null040(&state->target.meta_map);
#else
    state->fields.meta_map_type=0x01000001u;
    state->common.meta_indices=0;
#endif
}

void sq_startup_null040(SqPrefixObject012 *object)
{
    object->type=0x01000001u;
    object->value.reference=0;
}
