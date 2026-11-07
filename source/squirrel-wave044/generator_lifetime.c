#include "generator.h"
#include "../squirrel-wave011/prototype_internal.h"

void sq_generator_release044(SqGenerator044 *generator)
{
    generator->reference.prefix.vtable->destroy(generator);
    sq_generator_deallocate044(generator,sizeof(*generator));
}

SqGenerator044 *sq_generator_destroy044(SqGenerator044 *generator)
{
    SqPrefixCollectable012 *reference=&generator->reference;
    reference->prefix.vtable=&sq_generator_vtable044;
    if(!(reference->prefix.references&0x80000000u)) {
        if(reference->previous)reference->previous->next=reference->next;
        else generator->shared->chain=reference->next;
        if(reference->next)reference->next->previous=reference->previous;
        reference->next=reference->previous=0;
    }
    if(generator->traps.capacity)sq_generator_deallocate044(generator->traps.values,
        generator->traps.capacity*sizeof(SqTrap028));
    release_object(&generator->saved.closure);
    SqPrefixVector012 *vectors[]={&generator->varargs,&generator->stack};
    for(SqPrototypeU32 group=0;group<2;group++) {
        SqPrefixVector012 *vector=vectors[group];
        if(vector->capacity) {
            for(SqPrototypeU32 index=0;index<vector->size;index++)release_object(vector->values+index);
            sq_generator_deallocate044(vector->values,vector->capacity*sizeof(SqPrefixObject012));
        }
    }
    release_object(&generator->closure);
    reference->prefix.vtable=&sq_prototype_base_vtable011;
    if(reference->prefix.weak) {
        SqWeakReference014 *weak=reference->prefix.weak;
        weak->object.type=0x01000001u;
        weak->object.value.reference=0;
    }
    return generator;
}
