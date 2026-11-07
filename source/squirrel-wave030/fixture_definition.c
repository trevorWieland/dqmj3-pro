#include "fixture_internal.h"

static SqPrefixObject012 tail_string(const char *text)
{
    SqString015 *string=fn_0019ba68(&fixture_shared020()->common,(const SqStringByte015*)text,-1);
    return (SqPrefixObject012){0x08000010u,{.reference=string}};
}

static SqPrototypeI32 fixture_class_hook030(void *pointer,SqPrototypeI32 zero)
{
    SqClass030 *klass=pointer;
    if(zero)class_fixture030.fault=8;
    class_fixture030.class_hooks++;
    fixture_event030(7,klass,klass->common.reference.prefix.references,klass->common.members32.size);
    if((class_fixture030.variant==21||class_fixture030.variant==25)&&klass==class_fixture030.classes[0]) {
        SqClass030 *dying=class_fixture030.classes[1];
        SqPrefixObject012 object=tail_string("revived tail attribute");
        sq_prefix_assign(&dying->common.attributes,&object);
        object=tail_string("revived tail metadata");
        dying->common.values56.values[0]=(SqPrefixObject012){0x01000001u,{.reference=0}};
        sq_prefix_assign(dying->common.values56.values,&object);dying->common.values56.size=1;
        object=tail_string("revived tail field");
        SqLookupMember020 fill={object,object};
        if(class_fixture030.variant==25)fill.primary=(SqPrefixObject012){0x05000002u,{.integer=42}};
        sq_class_member_resize030(&dying->common.members32,1,&fill);
        object=tail_string("revived tail method");
        fill=(SqLookupMember020){object,object};
        if(class_fixture030.variant==25)fill.primary=(SqPrefixObject012){0x05000002u,{.integer=43}};
        sq_class_member_resize030(&dying->common.members44,1,&fill);
    }
    return 0;
}

void fixture_define030(SqClass030 *klass,SqPrototypeU32 fields,_Bool constructor)
{
    const SqPrefixObject012 null={0x01000001u,{.reference=0}};
    SqLookupMember020 fill={null,null};
    sq_class_member_resize030(&klass->common.members32,fields,&fill);
    for(SqPrototypeU32 index=0;index<fields;index++) {
        SqPrefixObject012 value=index? (SqPrefixObject012){0x08002000u,{.reference=fixture_prototype019(0)}} :
            (SqPrefixObject012){0x08000010u,{.reference=fn_0019ba68(&fixture_shared020()->common,
                (const SqStringByte015*)"owned field default",-1)}};
        sq_prefix_assign(&klass->common.members32.values[index].primary,&value);
        SqPrefixObject012 attribute={0x08000010u,{.reference=class_fixture030.constructor_name.value.reference}};
        sq_prefix_assign(&klass->common.members32.values[index].secondary,&attribute);
    }
    if(constructor) {
        sq_class_member_resize030(&klass->common.members44,1,&fill);
        SqNativeClosure013 *closure=fixture_native019(2);
        closure->function=fixture_native_constructor030;closure->parameter_check=1;
        SqPrefixObject012 method={0x08000200u,{.reference=closure}};
        sq_prefix_assign(&klass->common.members44.values[0].primary,&method);
        SqPrefixObject012 descriptor={0x05000002u,{.bits=0x01000000u}};
        if(!sq_table_new_slot019(klass->common.members,&class_fixture030.constructor_name,&descriptor))
            class_fixture030.fault=4;
        if(class_fixture030.variant==5||class_fixture030.variant==6||class_fixture030.variant==15) {
            sq_prefix_clear(&klass->common.members44.values[0].primary);
            SqPrefixObject012 object={0x08000200u,{.reference=closure}};
            if(class_fixture030.variant!=15) {
                SqWeakReference014 *weak=fn_00233b7c(&closure->reference.prefix,0x08000200u);
                object=(SqPrefixObject012){0x08010000u,{.reference=weak}};
            }
            sq_prefix_assign(&klass->common.members32.values[2].primary,&object);
            descriptor.value.bits=0x02000002u;
            sq_table_set019(klass->common.members,&class_fixture030.constructor_name,&descriptor);
        }
    }
    SqPrefixObject012 metadata={0x08000010u,{.reference=class_fixture030.constructor_name.value.reference}};
    sq_prefix_assign(&klass->common.attributes,&metadata);
    SqPrefixObject012 native={0x08000200u,{.reference=fixture_native019(2)}};
    sq_prefix_assign(klass->common.values56.values+15,&native);
    if(class_fixture030.variant>=11) {
        klass->common.uninvoked_type_tag=klass;
        klass->common.uninvoked_release_hook=fixture_class_hook030;
    }
}

void fixture_attach_weak030(void)
{
    SqPrototypeU32 variant=class_fixture030.variant;
    if(variant<11||variant>14)return;
    SqPrototypePrefix011 *prefix=variant<=12?&class_fixture030.classes[0]->common.reference.prefix:
        &class_fixture030.instance->reference.prefix;
    SqWeakReference014 *weak=fn_00233b7c(prefix,variant<=12?0x08004000u:0x0a008000u);
    SqPrefixObject012 object={0x08010000u,{.reference=weak}};
    sq_prefix_assign(&class_fixture030.weak,&object);
}

static SqPrototypeI32 fixture_instance_hook030(void *pointer,SqPrototypeI32 zero)
{
    SqClassInstance030 *instance=class_fixture030.instance;
    if(pointer!=instance->user_pointer||zero)class_fixture030.fault=5;
    class_fixture030.instance_hooks++;
    fixture_event030(5,instance,instance->reference.prefix.references,
        fixture_identity030(instance->klass));
    if(class_fixture030.variant==10&&class_fixture030.instance_hooks==1) {
        SqPrefixObject012 owner={0x0a008000u,{.reference=instance}};
        sq_prefix_assign(&class_fixture030.external,&owner);
    }
    return 0;
}

SqPrototypeI32 fixture_native_constructor030(void *vm)
{
    SqPrefixObject012 *receiver=sq_lookup_stack020(vm)+sq_lookup_base020(vm);
    if(receiver->type!=0x0a008000u) { class_fixture030.fault=6;return -1; }
    SqClassInstance030 *instance=receiver->value.reference;
    class_fixture030.instance=instance;
    class_fixture030.constructor_calls++;
    if(class_fixture030.variant==18)instance->klass->common.shared=&fixture_shared020()->common;
    fixture_event030(4,instance,instance->allocation_bytes,instance->klass->common.members32.size);
    instance->release_hook=fixture_instance_hook030;
    SqPrototypeU32 extra=instance->klass->common.instance_bytes;
    for(SqPrototypeU32 index=0;index<extra;index++)((unsigned char*)instance->user_pointer)[index]=(unsigned char)(0x51+index);
    if(instance->klass->common.members32.size) {
        SqPrefixObject012 value={0x08002000u,{.reference=fixture_prototype019(0)}};
        sq_prefix_assign(instance->values,&value);
    }
    if(class_fixture030.variant==7)return sq_vm_array_native022(vm);
    if(class_fixture030.variant==8||class_fixture030.variant==20) {
        sq_lookup_raise_format020(vm,"native constructor failed");
        return -1;
    }
    return 0;
}

SqPrototypeU32 fixture_callback_aliases030(SqPrototypeU32 *output,SqPrototypeU32 capacity)
{
    SqPrototypeU32 count=0;
    for(SqPrototypeU32 index=0;index<class_fixture030.allocations;index++) {
        const SqClassAllocation030 *block=class_fixture030.blocks+index;
        void *field=0;SqClassReleaseHook030 callback=0;SqPrototypeU32 token=0;
        if(block->kind==1) {
            SqClass030 *klass=block->pointer;
            callback=klass->common.uninvoked_release_hook;
            field=&klass->common.uninvoked_release_hook;token=0xf0030001u;
            if(callback&&callback!=fixture_class_hook030) { class_fixture030.fault=9;return 0xffffffffu; }
        }
        if(block->kind==2) {
            SqClassInstance030 *instance=block->pointer;
            callback=instance->release_hook;field=&instance->release_hook;token=0xf0030002u;
            if(callback&&callback!=fixture_instance_hook030) { class_fixture030.fault=10;return 0xffffffffu; }
        }
        if(callback) {
            if(count+3>capacity)return 0;
            output[count++]=(SqPrototypeU32)((unsigned char*)field-table_fixture019.memory);
            output[count++]=(SqPrototypeU32)(__UINTPTR_TYPE__)callback;output[count++]=token;
        }
    }
    return count;
}

void fixture_generic_clone030(void)
{
    SqTable019 *source=fixture_table019();
    sq_table_delegate019(source,fixture_table_at020(0x9100));
    SqPrefixObject012 value={0x08000200u,{.reference=fixture_native019(2)}};
    for(SqPrototypeI32 index=0;index<5;index++) {
        SqPrefixObject012 key={0x05000002u,{.integer=index}};
        sq_table_new_slot019(source,&key,&value);
    }
    SqPrefixObject012 string=*fixture_key020();
    sq_table_new_slot019(source,&string,&value);
    sq_table_new_slot019(source,&class_fixture030.constructor_name,&value);
    SqTable019 *copy=sq_class_table_clone030(source);
    fixture_event030(9,copy,fixture_identity030(copy->delegate),copy->delegate?copy->delegate->reference.prefix.references:0);
    SqPrefixObject012 object={0x0a000020u,{.reference=copy}};
    sq_prefix_assign(&class_fixture030.external,&object);
}
