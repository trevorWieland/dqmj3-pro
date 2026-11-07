#include "generator.h"

SqGenerator044 *sq_generator_create044(SqPrefixState012 *shared,SqScriptClosure017 *closure)
{
    SqGenerator044 *generator=sq_generator_allocate044(sizeof(*generator));
    if(!generator)return 0;
    generator->reference.prefix=(SqPrototypePrefix011){&sq_generator_vtable044,0,0};
    generator->closure=(SqPrefixObject012){0x01000001u,{.reference=0}};
    generator->stack=(SqPrefixVector012){0};generator->varargs=(SqPrefixVector012){0};
    generator->saved.closure=(SqPrefixObject012){0x01000001u,{.reference=0}};
    generator->saved.varargs_size=generator->saved.varargs_base=0;
    generator->traps=(SqTrapVector028){0};
    if(!closure)sq_generator_assert044();
    SqPrefixObject012 temporary={0x08000100u,{.reference=closure}};
    sq_prefix_retain(temporary.type,temporary.value);
    sq_prefix_assign(&generator->closure,&temporary);sq_prefix_release(temporary.type,temporary.value);
    generator->shared=shared;generator->state=0;generator->saved.generator=0;
    generator->reference.previous=0;generator->reference.next=shared->chain;
    if(shared->chain)shared->chain->previous=&generator->reference;
    shared->chain=&generator->reference;
    return generator;
}
