#include "fixture.h"

SqPrototypeU32 fixture_capture_identity038(const void *pointer)
{
    if(pointer==table_fixture019.memory+0x1d000)return 500;
    SqPrototypeU32 id=fixture_owned030(pointer);
    return id?1000+id:fixture_id020(pointer);
}

static SqPrototypeU32 payload(SqPrefixObject012 value)
{
    return value.type&0x08000000u?fixture_capture_identity038(value.value.reference):value.value.bits;
}

static SqPrototypeU32 references(SqPrefixObject012 value)
{
    if(!(value.type&0x08000000u)||!value.value.reference)return 0;
    const SqPrototypePrefix011 *prefix=value.value.reference;return prefix->references;
}

void fixture_capture_observe038(SqPrototypeU32 stage)
{
    SqCaptureFixture038 *fixture=&capture_fixture038;
    SqPrototypeU32 *out=fixture->observations+fixture->observation_count;
    *out++=stage;*out++=references(fixture->parent);*out++=references(fixture->child);
    *out++=fixture->result_value.type;*out++=payload(fixture->result_value);
    const SqScriptClosure017 *child=fixture->child.value.reference;
    *out++=child?references(child->function):0;
    *out++=child?child->outers.size:0;*out++=child?child->defaults.size:0;
    const SqPrefixObject012 null={0x01000001u,{.reference=0}};
    SqPrefixObject012 captured=child&&child->outers.size?child->outers.values[0]:null;
    SqPrefixObject012 defaults=child&&child->defaults.size?child->defaults.values[0]:null;
    *out++=captured.type;*out++=payload(captured);*out++=references(captured);
    *out++=defaults.type;*out++=payload(defaults);*out++=references(defaults);
    SqPrefixCollectable012 *node=fixture_shared020()->common.chain,*previous=0;SqPrototypeU32 count=0;
    while(node) {
        if(node->previous!=previous||count++==64)sq_class_failure030();
        previous=node;node=node->next;
    }
    *out++=count;
    const SqOpaqueArray012 *array=fixture->result_value.type==0x08000040u?fixture->result_value.value.reference:0;
    *out++=array?array->vector.size:0;*out++=array?array->vector.capacity:0;
    for(SqPrototypeU32 index=0;index<2;index++) {
        SqPrefixObject012 value=array&&index<array->vector.size?array->vector.values[index]:null;
        *out++=value.type;*out++=payload(value);*out++=references(value);
    }
    fixture->observation_count=(SqPrototypeU32)(out-fixture->observations);
}

static SqPrototypeU32 vector(SqPrototypeU32 *out,const SqPrefixVector012 *values)
{
    SqPrototypeU32 at=0;out[at++]=values->size;out[at++]=values->capacity;
    for(SqPrototypeU32 index=0;index<values->size;index++) {
        out[at++]=values->values[index].type;out[at++]=payload(values->values[index]);
        out[at++]=references(values->values[index]);
    }
    return at;
}

static SqPrototypeU32 pointer(SqPrototypeU32 *out,const void *storage)
{
    __UINTPTR_TYPE__ address=(__UINTPTR_TYPE__)storage;out[0]=(SqPrototypeU32)address;
#if __SIZEOF_POINTER__ == 8
    out[1]=(SqPrototypeU32)(address>>32);
#else
    out[1]=0;
#endif
    return 2;
}

#ifdef _WIN32
__declspec(dllexport)
#endif
SqPrototypeU32 fixture_snapshot038(SqPrototypeU32 *out,SqPrototypeU32 capacity)
{
    if(capacity<4096)return 0;
    SqCaptureFixture038 *fixture=&capture_fixture038;SqPrototypeU32 at=0;
    out[at++]=1;out[at++]=0;out[at++]=0;out[at++]=0;out[at++]=0;
    out[at++]=0x038038;out[at++]=sizeof(void*);out[at++]=sizeof(SqScriptClosure017);
    out[at++]=__builtin_offsetof(SqPrototype011,instructions);
    out[at++]=sizeof(SqPrefixObject012);out[at++]=sizeof(SqPrototypeOuter011);
    __UINTPTR_TYPE__ base=(__UINTPTR_TYPE__)table_fixture019.memory;
    out[at++]=(SqPrototypeU32)base;
#if __SIZEOF_POINTER__ == 8
    out[at++]=(SqPrototypeU32)(base>>32);
#else
    out[at++]=0;
#endif
    out[at++]=fixture->variant;out[at++]=fixture->cleanup;out[at++]=fixture->result;
    out[at++]=fixture->parent_calls;out[at++]=fixture->child_calls;
    out[at++]=fixture->observation_count;
    for(SqPrototypeU32 index=0;index<fixture->observation_count;index++)out[at++]=fixture->observations[index];
    out[at++]=fixture->meta_calls;out[at++]=fixture->meta_function;out[at++]=fixture->meta_references;
    out[at++]=fixture->meta_outers;out[at++]=fixture->meta_defaults;
    out[at++]=class_fixture030.allocations;
    for(SqPrototypeU32 index=0;index<class_fixture030.allocations;index++) {
        const SqClassAllocation030 *block=class_fixture030.blocks+index;
        out[at++]=block->kind;out[at++]=block->bytes;out[at++]=block->frees;
        if(block->kind==6) {
            const SqScriptClosure017 *closure=block->pointer;
            out[at++]=closure->reference.prefix.references;out[at++]=fixture_capture_identity038(closure->shared);
            out[at++]=fixture_capture_identity038(closure->reference.next);
            out[at++]=fixture_capture_identity038(closure->reference.previous);
            out[at++]=closure->function.type;out[at++]=payload(closure->function);
            out[at++]=references(closure->function);
            at+=vector(out+at,&closure->outers);at+=vector(out+at,&closure->defaults);
        } else if(block->kind==7) {
            const SqPrototype011 *function=block->pointer;
            out[at++]=function->reference.references;out[at++]=(SqPrototypeU32)function->instruction_count;
            out[at++]=(SqPrototypeU32)function->literal_count;out[at++]=(SqPrototypeU32)function->parameter_count;
            out[at++]=(SqPrototypeU32)function->function_count;out[at++]=(SqPrototypeU32)function->outer_count;
            out[at++]=(SqPrototypeU32)function->default_count;
        }
        out[at++]=block->kind==6||block->kind==7?7:1;at+=pointer(out+at,block->pointer);
        if(block->kind==6) {
            const SqScriptClosure017 *closure=block->pointer;
            at+=pointer(out+at,closure->shared);at+=pointer(out+at,closure->reference.next);
            at+=pointer(out+at,closure->reference.previous);at+=pointer(out+at,closure->function.value.reference);
            at+=pointer(out+at,closure->outers.values);at+=pointer(out+at,closure->defaults.values);
        } else if(block->kind==7) {
            const SqPrototype011 *function=block->pointer;
            at+=pointer(out+at,function->instructions);at+=pointer(out+at,function->literals);
            at+=pointer(out+at,function->parameters);at+=pointer(out+at,function->functions);
            at+=pointer(out+at,function->outers);at+=pointer(out+at,function->defaults);
        }
    }
    for(SqPrototypeU32 index=0;index<6;index++)out[at++]=class_fixture030.graph_flags[index];
    out[at++]=class_fixture030.fault;out[at++]=table_fixture019.fault;
    return at;
}
