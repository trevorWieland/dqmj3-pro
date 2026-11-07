#include "fixture.h"

static SqPrototypeU32 payload(SqPrefixObject012 value)
{return value.type&0x08000000u?fixture_identity044(value.value.reference):value.value.bits;}
static SqPrototypeU32 references(SqPrefixObject012 value)
{return value.type&0x08000000u?sq_prefix_count(value.value.reference):0;}
static SqPrototypeU32 vector(SqPrototypeU32 *out,const SqPrefixVector012 *values)
{
    SqPrototypeU32 at=0;out[at++]=values->size;out[at++]=values->capacity;
    for(SqPrototypeU32 i=0;i<values->size;i++) {
        out[at++]=values->values[i].type;out[at++]=payload(values->values[i]);out[at++]=references(values->values[i]);
    }
    return at;
}
static SqPrototypeU32 untouched(const SqGenerator044 *generator)
{
    const SqVmCallFrame022 *frame=&generator->saved;SqPrototypeU32 mask=0;
    const unsigned char *fields[]={ (const void*)&frame->instruction,(const void*)&frame->literals,
        (const void*)&frame->traps,(const void*)&frame->previous_base,(const void*)&frame->previous_top,
        (const void*)&frame->target,(const void*)&frame->calls,(const void*)&frame->root };
    for(SqPrototypeU32 field=0;field<8;field++) {
        SqPrototypeU32 bytes=field<2?sizeof(void*):4;_Bool same=1;
        for(SqPrototypeU32 i=0;i<bytes;i++)if(fields[field][i]!=0xa5)same=0;
        mask|=(SqPrototypeU32)same<<field;
    }
    return mask;
}

SqPrototypeU32 fixture_snapshot044(SqPrototypeU32 *out,SqPrototypeU32 capacity)
{
    if(capacity<4096)return 0;
    SqGeneratorFixture044 *fixture=&generator_fixture044;SqPrototypeU32 at=0;
    out[at++]=0x044044;out[at++]=sizeof(void*);out[at++]=sizeof(SqGenerator044);
    out[at++]=sizeof(SqVmCallFrame022);out[at++]=sizeof(SqTrap028);
    __UINTPTR_TYPE__ base=(__UINTPTR_TYPE__)fixture->memory;out[at++]=(SqPrototypeU32)base;
#if __SIZEOF_POINTER__ == 8
    out[at++]=(SqPrototypeU32)(base>>32);
#else
    out[at++]=0;
#endif
    out[at++]=fixture->variant;out[at++]=fixture->cleanup;out[at++]=fixture->result;out[at++]=fixture->fault;
    out[at++]=fixture->blocks;
    for(SqPrototypeU32 i=0;i<fixture->blocks;i++) {
        const SqGeneratorBlock044 *block=fixture->block+i;
        out[at++]=block->kind;out[at++]=block->bytes;out[at++]=block->frees;
        if(block->kind==6) {
            const SqGenerator044 *generator=block->pointer;
            out[at++]=generator->reference.prefix.references;out[at++]=fixture_identity044(generator->shared);
            out[at++]=fixture_identity044(generator->reference.next);out[at++]=fixture_identity044(generator->reference.previous);
            out[at++]=generator->state;out[at++]=untouched(generator);
            out[at++]=generator->saved.closure.type;out[at++]=payload(generator->saved.closure);out[at++]=references(generator->saved.closure);
            out[at++]=generator->closure.type;out[at++]=payload(generator->closure);out[at++]=references(generator->closure);
            at+=vector(out+at,&generator->varargs);at+=vector(out+at,&generator->stack);
            out[at++]=generator->traps.size;out[at++]=generator->traps.capacity;
        } else if(block->kind==1)out[at++]=((const SqPrototype011*)block->pointer)->reference.references;
        else if(block->kind==2) {
            const SqScriptClosure017 *script=block->pointer;
            out[at++]=script->reference.prefix.references;out[at++]=payload(script->function);out[at++]=references(script->function);
        } else if(block->kind==3)out[at++]=((const SqNativeClosure013*)block->pointer)->reference.prefix.references;
        else if(block->kind==4) {
            const SqString015 *string=block->pointer;
            out[at++]=string->reference.references;out[at++]=(SqPrototypeU32)string->length;out[at++]=string->hash;
            for(SqPrototypeI32 n=0;n<string->length;n++)out[at++]=(unsigned char)string->value[n];
        } else if(block->kind==5) {
            const SqWeakReference014 *weak=block->pointer;
            out[at++]=sq_prefix_count(weak);out[at++]=weak->object.type;out[at++]=payload(weak->object);
        }
    }
    out[at++]=fixture->events;
    for(SqPrototypeU32 i=0;i<fixture->events;i++)for(SqPrototypeU32 n=0;n<6;n++)out[at++]=fixture->event[i][n];
    out[at++]=fixture_identity044(fixture_shared044()->chain);
    out[at++]=fixture->weak.type;
    return at;
}

const void *fixture_vtable044(SqPrototypeU32 index)
{
    const SqPrototypeVTable011 *tables[]={&sq_generator_vtable044,&sq_prototype_vtable011,
        &sq_script_closure_vtable017,&sq_native_closure_vtable013,&sq_weak_vtable014,&sq_string_vtable015,&sq_prototype_base_vtable011};
    return index<7?tables[index]:0;
}
