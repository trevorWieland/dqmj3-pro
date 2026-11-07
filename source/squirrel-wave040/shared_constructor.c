#include "startup.h"

SqSharedState040 *fn_0014c4c8(SqSharedState040 *state)
{
    const SqStartupServices040 *services=sq_startup_services040();
    sq_shared_null_meta040(state);
    SqStartupInitialRefs040 *storage=services->allocate(services->context,
        sizeof(*storage),_Alignof(SqStartupInitialRefs040));
    for (SqPrototypeU32 index=0;index<4;++index) {
        storage->buckets[index]=0;
        sq_startup_null040(&storage->nodes[index].object);
        storage->nodes[index].references=0;
        storage->nodes[index].next=index+1<4?storage->nodes+index+1:0;
    }
    SqStartupRefTable040 *references=sq_shared_references040(state);
    references->capacity=4;
    references->used=0;
    references->nodes=storage->nodes;
    references->free=storage->nodes;
    references->storage=storage;
    sq_startup_null040(sq_shared_registry040(state));
    sq_startup_null040(sq_shared_constants040(state));
    sq_startup_null040(sq_shared_special040(state));
#if __SIZEOF_POINTER__ == 4
    sq_startup_null040(&state->target.constructor_name);
#else
    sq_startup_null040(&state->common.common.constructor_name);
#endif
    for (SqPrototypeU32 index=0;index<10;++index)
        sq_startup_null040(&state->common.common.common.default_delegates[index]);
#if __SIZEOF_POINTER__ == 4
    state->target.callback_00a0=0;
    state->target.callback_00a4=0;
    state->target.flag_00a8=0;
    state->target.flag_00a9=0;
#else
    state->fields.callback_00a0=0;
    state->fields.callback_00a4=0;
    state->fields.flag_00a8=0;
    state->fields.flag_00a9=0;
#endif
    return state;
}
