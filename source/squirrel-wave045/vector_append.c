#include "initialization.h"

void fn_001688cc(SqPrefixVector012 *vector,const SqPrefixObject012 *incoming)
{
    if (vector->capacity<=vector->size) {
        SqPrototypeU32 capacity=vector->size?vector->size*2:4;
        vector->values=sq_startup_resize045(vector->values,vector->capacity*sizeof(*vector->values),
            capacity*sizeof(*vector->values),_Alignof(SqPrefixObject012));
        vector->capacity=capacity;
    }
    SqPrefixObject012 *values=vector->values;
    SqPrototypeU32 index=vector->size++;
    if (values) {
        values[index]=*incoming;
        sq_prefix_retain(values[index].type,values[index].value);
    }
}
