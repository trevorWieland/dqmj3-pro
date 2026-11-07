#include "execute.h"

static SqPrefixObject012 *slot(void *vm,SqPrototypeI32 index)
{return sq_lookup_stack020(vm)+sq_lookup_base020(vm)+index;}
static SqPrototypeU32 shifted(SqPrototypeU32 value,SqPrototypeU32 count,SqPrototypeI32 operation)
{
    count&=255;if(!count)return value;
    if(count>=32)return operation==5&&(value&0x80000000u)?0xffffffffu:0;
    if(operation==4)return value<<count;
    SqPrototypeU32 result=value>>count;
    if(operation==5&&(value&0x80000000u))result|=0xffffffffu<<(32-count);
    return result;
}
static _Bool identical(const SqPrefixObject012 *left,const SqPrefixObject012 *right)
{return left->type&0x08000000u?left->value.reference==right->value.reference:left->value.bits==right->value.bits;}
_Bool sq_execute_arithmetic031(void *vm,SqPrototypeI32 operation,void *destination,const SqPrefixObject012 *left,const SqPrefixObject012 *right)
{
    if(left->type==0x05000002u&&right->type==0x05000002u)return sq_execute_arithmetic028(vm,operation,destination,left,right);
    if(!(left->type&0x04000000u)||!(right->type&0x04000000u))sq_execute_unsupported028(vm,-31170);
    float a=left->type==0x05000002u?(float)left->value.integer:left->value.floating;
    float b=right->type==0x05000002u?(float)right->value.integer:right->value.floating,result;
    SqPrototypeU32 abits,bbits;__builtin_memcpy(&abits,&a,4);__builtin_memcpy(&bbits,&b,4);
    if((abits&0x7f800000u)==0x7f800000u||(bbits&0x7f800000u)==0x7f800000u)sq_execute_unsupported028(vm,-31171);
    switch(operation){case '+':result=a+b;break;case '-':result=a-b;break;case '*':result=a*b;break;default:sq_execute_unsupported028(vm,-31172);}
    SqPrototypeU32 bits;__builtin_memcpy(&bits,&result,4);sq_execute_scalar028(destination,0x05000004u,bits);return 1;
}
_Bool sq_execute_numbers031(void *vm,const SqInstruction028 *instruction)
{
    SqPrototypeI32 argument=instruction->argument1;SqPrefixObject012 *destination=slot(vm,instruction->argument0);
    const SqPrefixObject012 *left=slot(vm,instruction->argument2),*right=slot(vm,argument);
    switch(instruction->opcode) {
    case 15:case 16: {
        if(instruction->argument3)right=sq_vm_current022(vm)->literals+argument;
        _Bool equal=left->type==right->type&&identical(left,right);
        if(left->type!=right->type&&(left->type&0x04000000u)&&(right->type&0x04000000u))sq_execute_unsupported028(vm,-31150);
        SqPrefixObject012 value={0x01000008u,{.bits=instruction->opcode==16?!equal:equal}};sq_execute_assign028(destination,&value);return 1;
    }
    case 40: {
        if(left->type!=0x05000002u||right->type!=0x05000002u)sq_execute_unsupported028(vm,-31400);
        SqPrototypeU32 bits=left->value.bits-right->value.bits;SqPrototypeI32 difference;__builtin_memcpy(&difference,&bits,4);_Bool compared;
        switch(instruction->argument3){case 0:compared=difference>0;break;case 2:compared=difference>=0;break;case 3:compared=difference<0;break;case 4:compared=difference<=0;break;default:sq_execute_unsupported028(vm,-31401);}
        SqPrefixObject012 value={0x01000008u,{.bits=compared}};sq_execute_assign028(destination,&value);return 1;
    }
    case 18: {
        if(left->type!=0x05000002u||right->type!=0x05000002u)sq_execute_unsupported028(vm,-31180);
        SqPrototypeU32 a=left->value.bits,b=right->value.bits,bits;
        switch(instruction->argument3){case 0:bits=a&b;break;case 2:bits=a|b;break;case 3:bits=a^b;break;case 4:case 5:case 6:bits=shifted(a,b,instruction->argument3);break;default:sq_execute_unsupported028(vm,-31181);}
        sq_execute_scalar028(destination,0x05000002u,bits);return 1;
    }
    case 45:case 47:
        if(right->type==0x05000002u){sq_execute_scalar028(destination,0x05000002u,instruction->opcode==45?0u-right->value.bits:~right->value.bits);return 1;}
        if(instruction->opcode==45&&right->type==0x05000004u){sq_execute_scalar028(destination,0x05000004u,right->value.bits^0x80000000u);return 1;}
        sq_execute_unsupported028(vm,-31450);
    default:return 0;
    }
}
