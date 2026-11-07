#include "class_internal.h"

void sq_class_member_resize030(SqLookupMemberVector020 *vector,SqPrototypeU32 requested,const SqLookupMember020 *fill)
{
    if(vector->capacity<requested) {
        SqPrototypeU32 capacity=requested?requested:4;
        vector->values=sq_class_reallocate030(vector->values,vector->capacity*sizeof(*fill),capacity*sizeof(*fill));
        vector->capacity=capacity;
    }
    while(vector->size<requested) {
        SqLookupMember020 *member=vector->values+vector->size;
        const SqPrefixObject012 null={0x01000001u,{.reference=0}};
        member->primary=null;member->secondary=null;
        sq_prefix_assign(&member->primary,&fill->primary);
        sq_prefix_assign(&member->secondary,&fill->secondary);
        vector->size++;
    }
    for(SqPrototypeU32 index=requested;index<vector->size;index++)
        sq_class_release_member030(vector->values+index);
    vector->size=requested;
}

void sq_class_resize_values030(SqPrefixVector012 *vector,SqPrototypeU32 requested)
{
    if(vector->capacity<requested) {
        SqPrototypeU32 capacity=requested?requested:4;
        vector->values=sq_class_reallocate030(vector->values,vector->capacity*sizeof(*vector->values),
            capacity*sizeof(*vector->values));
        vector->capacity=capacity;
    }
    while(vector->size<requested)
        vector->values[vector->size++]=(SqPrefixObject012){0x01000001u,{.reference=0}};
    for(SqPrototypeU32 index=requested;index<vector->size;index++) {
        const SqPrefixObject012 *value=vector->values+index;
        sq_prefix_release(value->type,value->value);
    }
    vector->size=requested;
}
