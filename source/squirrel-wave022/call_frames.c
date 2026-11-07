#include "vm_call.h"

void sq_vm_call_frames_resize022(SqVmCallVector022 *vector,SqPrototypeU32 requested,const SqVmCallFrame022 *fill)
{
    if(vector->capacity<requested) {
        SqPrototypeU32 capacity=requested?requested:4;
        vector->values=sq_vm_call_reallocate022(vector->values,vector->capacity*sizeof(*fill),capacity*sizeof(*fill));
        vector->capacity=capacity;
    }
    while(vector->size<requested) {
        vector->values[vector->size]=*fill;
        SqPrefixObject012 closure=vector->values[vector->size].closure;
        sq_prefix_retain(closure.type,closure.value);
        vector->size++;
    }
    for(SqPrototypeU32 index=requested;index<vector->size;index++) {
        SqPrefixObject012 closure=vector->values[index].closure;
        sq_prefix_release(closure.type,closure.value);
    }
    vector->size=requested;
}
