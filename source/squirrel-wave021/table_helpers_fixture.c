#include "table_helpers_fixture.h"

extern SqTable019 *fixture_original_initialize019(SqTable019 *,SqPrefixState012 *,SqPrototypeI32);
extern SqPrototypeU32 fixture_original_new_slot019(SqTable019 *,const SqPrefixObject012 *,const SqPrefixObject012 *);
extern SqPrototypeU32 fixture_original_set019(SqTable019 *,const SqPrefixObject012 *,const SqPrefixObject012 *);
extern void fixture_original_rehash021(SqTable019 *,SqPrototypeU32);
extern SqPrototypeU32 fixture_original_delegate021(SqTable019 *,SqTable019 *);
extern void fixture_original_release019(SqTable019 *);
extern void *fixture_original_assign019(void *,const void *);
extern SqWeakReference014 *fixture_original_weak_create019(SqPrototypePrefix011 *,SqPrototypeU32);
extern void fixture_original_native_release021(SqNativeClosure013 *);

static SqPrototypeU32 mode021,requested021,flags021,results021[32],result_count021;

SqTable019 *fixture_helpers_table021(SqPrototypeU32 index)
{ return (void *)(table_fixture019.memory+0x9000+index*0x400); }

SqPrototypeU32 fixture_identity019(const void *pointer)
{
    for(SqPrototypeU32 index=1;index<3;index++)if(pointer==fixture_helpers_table021(index))return index+1;
    return fixture_base_identity019(pointer);
}

SqPrototypeU32 fixture_helpers_observer021(void)
{
    if(mode021==3)return sq_prefix_count(fixture_helpers_table021(2));
    if(mode021==4)return fixture_weak019()->object.type;
    return 0;
}

void fixture_helpers_prepare021(SqPrototypeU32 mode,SqPrototypeU32 requested,SqPrototypeU32 flags)
{
    mode021=mode;requested021=requested;flags021=flags;result_count021=0;
    fixture_table_prepare019(1,0,0);
}

static void assign(SqPrototypeU32 source,SqPrefixObject012 *destination,const SqPrefixObject012 *value)
{
    if(source)sq_prefix_assign(destination,value);else fixture_original_assign019(destination,value);
}

static void initialize(SqPrototypeU32 source,SqTable019 *table,SqPrototypeI32 requested)
{
    if(source)sq_table_initialize019(table,fixture_state019(0),requested);
    else fixture_original_initialize019(table,fixture_state019(0),requested);
}

static void slot(SqPrototypeU32 source,SqTable019 *table,const SqPrefixObject012 *key,const SqPrefixObject012 *value)
{
    results021[result_count021++]=source?sq_table_new_slot019(table,key,value):fixture_original_new_slot019(table,key,value);
}

static void set(SqPrototypeU32 source,SqTable019 *table,const SqPrefixObject012 *key,const SqPrefixObject012 *value)
{
    results021[result_count021++]=source?sq_table_set019(table,key,value):fixture_original_set019(table,key,value);
}

static void rehash(SqPrototypeU32 source,SqTable019 *table,SqPrototypeU32 force)
{
    if(source)sq_table_rehash019(table,force);else fixture_original_rehash021(table,force);
    results021[result_count021++]=(SqPrototypeU32)table->node_count;
}

static void delegate(SqPrototypeU32 source,SqTable019 *table,SqTable019 *other)
{
    results021[result_count021++]=source?sq_table_delegate019(table,other):fixture_original_delegate021(table,other);
}

void fixture_helpers_run021(SqPrototypeU32 source)
{
    SqTable019 *a=fixture_table019();
    SqPrefixObject012 empty={0x01000001u,{.reference=0}};
    SqPrefixObject012 key={0x05000002u,{.integer=0}};
    SqPrefixObject012 primitive={0x05000002u,{.integer=99}};
    SqPrefixObject012 native={0x08000200u,{.reference=fixture_native019(0)}};
    initialize(source,a,(SqPrototypeI32)requested021);
    if(mode021==0) {
        slot(source,a,&key,&native);
        key.value.integer=9;set(source,a,&key,&primitive);
        key.value.integer=0;set(source,a,&key,&primitive);
        key.type=0x01000008u;key.value.bits=1;
        slot(source,a,&key,&primitive);set(source,a,&key,&primitive);
    }
    if(mode021==1) {
        set(source,a,&empty,&native);
        if(flags021&1)slot(source,a,&key,&primitive);
        else rehash(source,a,flags021>>1);
    }
    if(mode021==2) {
        SqPrototypeU32 count=flags021&7;
        for(SqPrototypeU32 index=0;index<count;index++) {
            key.value.integer=(SqPrototypeI32)index;
            if(index==0 && flags021&32)key=(SqPrefixObject012){0x08000200u,{.reference=fixture_native019(2)}};
            else key.type=0x05000002u;
            slot(source,a,&key,index==0?&native:&primitive);
        }
        rehash(source,a,flags021>>3);
    }
    if(mode021==4) {
        slot(source,a,&key,&native);
        SqWeakReference014 *weak=source?fn_00233b7c(&a->reference.prefix,0x0a000020u):
            fixture_original_weak_create019(&a->reference.prefix,0x0a000020u);
        SqPrefixObject012 owner=empty,incoming={0x08010000u,{.reference=weak}};
        assign(source,&owner,&incoming);
        if(flags021&1)assign(source,&owner,&empty);
        if(source)sq_table_release019(a);else fixture_original_release019(a);
        assign(source,&owner,&empty);
    }
    if(mode021==3) {
        SqTable019 *b=fixture_helpers_table021(1),*c=fixture_helpers_table021(2);
        initialize(source,b,4);initialize(source,c,4);
        SqPrefixObject012 *owners=(void *)(table_fixture019.memory+0x29400);
        for(SqPrototypeU32 index=0;index<3;index++) {
            owners[index]=empty;
            SqPrefixObject012 incoming={0x0a000020u,{.reference=fixture_helpers_table021(index)}};
            assign(source,owners+index,&incoming);
        }
        delegate(source,a,a);delegate(source,a,b);
        if(flags021&2)delegate(source,a,b);
        delegate(source,b,c);delegate(source,c,a);
        if(flags021&1)assign(source,owners+1,&empty);
        delegate(source,a,c);
        assign(source,owners,&empty);assign(source,owners+1,&empty);assign(source,owners+2,&empty);
    } else if(mode021!=4) {
        if(source)sq_table_release019(a);else fixture_original_release019(a);
    }
    for(SqPrototypeU32 index=0;index<3;index+=2) {
        SqNativeClosure013 *object=fixture_native019(index);
        if(object->reference.prefix.vtable!=table_fixture019.base_vtable) {
            if(source)fn_00299518(object);else fixture_original_native_release021(object);
        }
    }
}

SqPrototypeU32 fixture_helpers_snapshot021(SqPrototypeU32 *output,SqPrototypeU32 capacity)
{
    SqPrototypeU32 needed=31+result_count021+table_fixture019.event_count*8;
    if(capacity<needed)return 0;
    SqPrototypeU32 cursor=0;
    output[cursor++]=table_fixture019.fault;output[cursor++]=mode021;
    output[cursor++]=requested021;output[cursor++]=flags021;
    output[cursor++]=table_fixture019.node_allocations;output[cursor++]=table_fixture019.frees;
    output[cursor++]=table_fixture019.event_count;output[cursor++]=result_count021;
    output[cursor++]=fixture_identity019(fixture_state019(0)->chain);
    for(SqPrototypeU32 index=0;index<3;index++)output[cursor++]=sq_prefix_count(fixture_helpers_table021(index));
    output[cursor++]=sq_prefix_count(fixture_native019(0));output[cursor++]=sq_prefix_count(fixture_native019(2));
    output[cursor++]=sq_prefix_count(fixture_prototype019(0));output[cursor++]=sizeof(SqTable019);
    for(SqPrototypeU32 index=0;index<3;index++) {
        SqTable019 *table=fixture_helpers_table021(index);
        output[cursor++]=(SqPrototypeU32)table->node_count;
        output[cursor++]=(SqPrototypeU32)table->used;
        output[cursor++]=table->nodes?(SqPrototypeU32)(table->first_free-table->nodes):0;
    }
    __UINTPTR_TYPE__ key_pointer=(__UINTPTR_TYPE__)fixture_native019(2);
    output[cursor++]=sizeof(void *);output[cursor++]=(SqPrototypeU32)key_pointer;
    output[cursor++]=sizeof(key_pointer)==8?(SqPrototypeU32)((unsigned long long)key_pointer>>32):0;
    for(SqPrototypeU32 index=0;index<3;index++) {
        SqTable019 *table=fixture_helpers_table021(index);
        output[cursor++]=!table->nodes || (table->first_free->key.type==0x01000001u && !table->first_free->next);
    }
    for(SqPrototypeU32 index=0;index<result_count021;index++)output[cursor++]=results021[index];
    for(SqPrototypeU32 index=0;index<table_fixture019.event_count;index++)
        for(SqPrototypeU32 field=0;field<8;field++)output[cursor++]=table_fixture019.events[index][field];
    return cursor;
}
