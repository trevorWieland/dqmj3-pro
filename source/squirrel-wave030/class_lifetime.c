#include "class_internal.h"

static void destroy_members(SqLookupMemberVector020 *vector)
{
    if(vector->capacity) {
        for(SqPrototypeU32 index=0;index<vector->size;index++)
            sq_class_release_member030(vector->values+index);
        sq_class_deallocate030(vector->values,vector->capacity*sizeof(*vector->values));
    }
}

void sq_class_release030(SqClass030 *klass)
{
    if(klass->common.uninvoked_release_hook)
        klass->common.uninvoked_release_hook(klass->common.uninvoked_type_tag,0);
    klass->common.reference.prefix.vtable->destroy(klass);
    sq_class_deallocate030(klass,sizeof(*klass));
}

void sq_class_finalize030(SqClass030 *klass)
{
    const SqPrefixObject012 null={0x01000001u,{.reference=0}};
    SqLookupMember020 fill={null,null};
    sq_prefix_assign(&klass->common.attributes,&null);
    sq_class_member_resize030(&klass->common.members32,0,&fill);
    sq_class_release_member030(&fill);
    fill=(SqLookupMember020){null,null};
    sq_class_member_resize030(&klass->common.members44,0,&fill);
    sq_class_release_member030(&fill);
    for(SqPrototypeU32 index=0;index<klass->common.values56.size;index++) {
        const SqPrefixObject012 *value=klass->common.values56.values+index;
        sq_prefix_release(value->type,value->value);
    }
    klass->common.values56.size=0;
    if(klass->common.members) {
        SqPrefixValue012 value={.reference=klass->common.members};
        sq_prefix_release(0x0a000020u,value);
        klass->common.members=0;
    }
    if(klass->common.base) {
        SqPrefixValue012 value={.reference=klass->common.base};
        sq_prefix_release(0x08004000u,value);
        klass->common.base=0;
    }
}

SqClass030 *sq_class_destroy030(SqClass030 *klass)
{
    SqLookupClassStorage020 *common=&klass->common;
    common->reference.prefix.vtable=&sq_class_vtable030;
    if(!(common->reference.prefix.references&0x80000000u))
        sq_class_remove_chain030(common->shared,&common->reference);
    sq_class_finalize030(klass);
    sq_prefix_release(common->attributes.type,common->attributes.value);
    if(common->values56.capacity) {
        for(SqPrototypeU32 index=0;index<common->values56.size;index++) {
            const SqPrefixObject012 *value=common->values56.values+index;
            sq_prefix_release(value->type,value->value);
        }
        sq_class_deallocate030(common->values56.values,common->values56.capacity*sizeof(*common->values56.values));
    }
    destroy_members(&common->members44);
    destroy_members(&common->members32);
    sq_class_reset_weak030(&common->reference.prefix);
    return klass;
}
