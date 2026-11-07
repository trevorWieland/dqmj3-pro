#include "iteration.h"

_Bool sq_iteration_get039(void *vm,const SqPrefixObject012 *self,const SqPrefixObject012 *key,SqPrefixObject012 *value)
{
    if(self->type!=0x0a008000u)return sq_lookup_get020(vm,self,key,value,0,0);
    SqClassInstance030 *instance=self->value.reference;
    if(sq_table_get019(instance->klass->common.members,key,value)) {
        SqPrototypeU32 member=value->value.bits,index=member&0x00ffffffu;
        if(member&0x02000000u)sq_lookup_assign_unwrapped020(value,instance->values[index]);
        else sq_prefix_assign(value,&instance->klass->common.members44.values[index].primary);
        return 1;
    }
    return sq_lookup_fallback020(vm,self,key,value,0);
}
