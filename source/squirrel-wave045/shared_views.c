#include "initialization.h"

SqSharedState040 *sq_startup_full_shared045(SqPrefixState012 *prefix)
{
    SqLookupSharedStorage020 *lookup=(void*)prefix;
    SqClassSharedStorage030 *classes=(void*)lookup;
    SqClassSharedStorage034 *indexed=(void*)classes;
    return (void*)indexed;
}

SqPrefixVector012 *sq_startup_metamethod_names045(SqSharedState040 *shared)
{
#if __SIZEOF_POINTER__ == 4
    return shared->target.system_strings;
#else
    return shared->fields.system_strings;
#endif
}

SqPrefixVector012 *sq_startup_type_names045(SqSharedState040 *shared)
{
#if __SIZEOF_POINTER__ == 4
    return shared->target.meta_methods;
#else
    return shared->fields.meta_methods;
#endif
}

SqPrefixVector012 *sq_startup_auxiliary_vector045(SqSharedState040 *shared)
{
#if __SIZEOF_POINTER__ == 4
    return shared->target.type_names;
#else
    return shared->fields.type_names;
#endif
}

SqStringTable015 *sq_startup_strings045(const SqSharedState040 *shared)
{
#if __SIZEOF_POINTER__ == 4
    return shared->target.strings;
#else
    return shared->fields.strings;
#endif
}

SqPrefixObject012 *sq_startup_constructor_name045(SqSharedState040 *shared)
{
#if __SIZEOF_POINTER__ == 4
    return &shared->target.constructor_name;
#else
    return &shared->common.common.constructor_name;
#endif
}

void sq_startup_set_strings045(SqSharedState040 *shared,SqStringTable015 *strings)
{
#if __SIZEOF_POINTER__ == 4
    shared->target.strings=strings;
#else
    shared->fields.strings=strings;
#endif
}

void sq_startup_set_vector045(SqSharedState040 *shared,SqStartupVectorRole045 role,SqPrefixVector012 *vector)
{
#if __SIZEOF_POINTER__ == 4
    switch (role) {
    case SQ_STARTUP_METAMETHOD_NAMES045:shared->target.system_strings=vector;break;
    case SQ_STARTUP_TYPE_NAMES045:shared->target.meta_methods=vector;break;
    case SQ_STARTUP_AUXILIARY045:shared->target.type_names=vector;break;
    }
#else
    switch (role) {
    case SQ_STARTUP_METAMETHOD_NAMES045:shared->fields.system_strings=vector;break;
    case SQ_STARTUP_TYPE_NAMES045:shared->fields.meta_methods=vector;break;
    case SQ_STARTUP_AUXILIARY045:shared->fields.type_names=vector;break;
    }
#endif
}

SqPrefixObject012 sq_startup_meta045(const SqSharedState040 *shared)
{
#if __SIZEOF_POINTER__ == 4
    return shared->target.meta_map;
#else
    SqPrefixObject012 object={shared->fields.meta_map_type,{.reference=shared->common.meta_indices}};
    return object;
#endif
}

void sq_startup_assign_meta045(SqSharedState040 *shared,const SqPrefixObject012 *object)
{
#if __SIZEOF_POINTER__ == 4
    sq_prefix_assign(&shared->target.meta_map,object);
#else
    SqPrefixObject012 incoming=*object,previous=sq_startup_meta045(shared);
    sq_prefix_retain(incoming.type,incoming.value);
    shared->fields.meta_map_type=incoming.type;
    shared->common.meta_indices=incoming.value.reference;
    sq_prefix_release(previous.type,previous.value);
#endif
}
