#include "vm_call.h"
#include "../squirrel-wave018/script_create.h"

const SqPrefixObject012 *sq_script_creation_local018(const void *vm,SqPrototypeI32 index)
{ return sq_lookup_stack020(vm)+sq_lookup_base020(vm)+index; }

const SqPrefixObject012 *sq_script_creation_parent_outer018(const void *vm,SqPrototypeI32 index)
{
    const SqVmCallFrame022 *frame=sq_vm_current022(vm);
    const SqScriptClosure017 *parent=frame->closure.value.reference;
    return parent->outers.values+index;
}
