#include "class_internal.h"

SqClass030 *sq_class_initialize030(SqClass030 *storage,SqPrefixState012 *shared,SqClass030 *base)
{
    SqLookupClassStorage020 *klass=&storage->common;
    klass->reference.prefix=(SqPrototypePrefix011){&sq_class_vtable030,0,0};
    klass->members32=(SqLookupMemberVector020){0};
    klass->members44=(SqLookupMemberVector020){0};
    klass->values56=(SqPrefixVector012){0};
    const SqPrefixObject012 null={0x01000001u,{.reference=0}};
    klass->attributes=null;
    klass->base=base?&base->common:0;
    klass->uninvoked_type_tag=0;
    klass->uninvoked_release_hook=0;
    klass->instance_bytes=0;
    sq_class_resize_values030(&klass->values56,18);
    if(base) {
        SqLookupMember020 fill={null,null};
        sq_class_member_resize030(&klass->members32,base->common.members32.size,&fill);
        sq_class_release_member030(&fill);
        for(SqPrototypeU32 index=0;index<base->common.members32.size;index++) {
            SqLookupMember020 *destination=klass->members32.values+index;
            const SqLookupMember020 *source=base->common.members32.values+index;
            destination->primary=null;destination->secondary=null;
            sq_prefix_assign(&destination->primary,&source->primary);
            sq_prefix_assign(&destination->secondary,&source->secondary);
        }
        klass->members32.size=base->common.members32.size;
        fill=(SqLookupMember020){null,null};
        sq_class_member_resize030(&klass->members44,base->common.members44.size,&fill);
        sq_class_release_member030(&fill);
        for(SqPrototypeU32 index=0;index<base->common.members44.size;index++) {
            SqLookupMember020 *destination=klass->members44.values+index;
            const SqLookupMember020 *source=base->common.members44.values+index;
            destination->primary=null;destination->secondary=null;
            sq_prefix_assign(&destination->primary,&source->primary);
            sq_prefix_assign(&destination->secondary,&source->secondary);
        }
        klass->members44.size=base->common.members44.size;
        sq_class_resize_values030(&klass->values56,base->common.values56.size);
        for(SqPrototypeU32 index=0;index<base->common.values56.size;index++) {
            SqPrefixObject012 *destination=klass->values56.values+index;
            *destination=base->common.values56.values[index];
            sq_prefix_retain(destination->type,destination->value);
        }
        klass->values56.size=base->common.values56.size;
        klass->base->reference.prefix.references++;
        klass->members=sq_class_table_clone030(base->common.members);
    } else {
        klass->members=sq_class_allocate_table030();
        if(!klass->members)sq_class_failure030();
        sq_table_initialize019(klass->members,shared,0);
        klass->members->delegate=0;
    }
    klass->members->reference.prefix.references++;
    klass->locked=0;
    klass->reference.next=klass->reference.previous=0;
    klass->shared=shared;
    sq_class_add_chain030(shared,&klass->reference);
    return storage;
}
