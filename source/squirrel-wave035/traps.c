#include "exception.h"

void sq_exception_push035(void *vm,const SqInstruction028 *instruction,SqExceptionState035 *state)
{
    const SqInstruction028 *resume=(const SqInstruction028*)sq_vm_current022(vm)->instruction+instruction->argument1;
    SqPrototypeI32 top=sq_lookup_top020(vm),base=sq_lookup_base020(vm);SqTrapVector028 vector=sq_exception_traps035(vm);
    if(vector.size>=vector.capacity) {
        SqPrototypeU32 capacity=vector.size?vector.size*2:4;
        vector.values=sq_exception_reallocate035(vector.values,vector.capacity*sizeof(SqTrap028),capacity*sizeof(SqTrap028));vector.capacity=capacity;
    }
    SqTrap028 *record=vector.values+vector.size++;sq_exception_publish_traps035(vm,vector);
    record->base=base;record->top=top;record->instruction=resume;record->target=instruction->argument0;
    state->active_traps++;sq_vm_current022(vm)->traps++;
}
void sq_exception_pop035(void *vm,SqPrototypeI32 count,SqExceptionState035 *state)
{
    for(SqPrototypeI32 index=0;index<count;index++) {
        SqTrapVector028 vector=sq_exception_traps035(vm);vector.size--;sq_exception_publish_traps035(vm,vector);
        state->active_traps--;sq_vm_current022(vm)->traps--;
    }
}
