#include "execute.h"

_Bool sq_execute_arithmetic028(void *vm,SqPrototypeI32 operation,void *destination,const SqPrefixObject012 *left,const SqPrefixObject012 *right)
{
    if(left->type!=0x05000002u||right->type!=0x05000002u)sq_execute_unsupported028(vm,-117);
    SqPrototypeU32 bits;
    switch(operation) {
    case '+':bits=left->value.bits+right->value.bits;break;
    case '-':bits=left->value.bits-right->value.bits;break;
    case '*':bits=left->value.bits*right->value.bits;break;
    default:sq_execute_unsupported028(vm,-118);
    }
    sq_execute_scalar028(destination,0x05000002u,bits);return 1;
}
