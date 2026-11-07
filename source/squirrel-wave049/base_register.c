#include "startup.h"

static void new_constant(SqVm040 *vm,const char *name,SqPrototypeI32 value)
{
    fn_00158128(vm,(const SqStringByte015*)name,-1);
    fn_001580cc(vm,value);
    fn_00166f0c(vm,-3,0);
}

void fn_00158fd0(SqVm040 *vm)
{
    fn_00173d14(vm);
    for (SqPrototypeU32 index=0;sq_startup_base_methods045[index].name;index++) {
        const SqNativeRegistration045 *method=sq_startup_base_methods045+index;
        fn_00158128(vm,method->name,-1);
        fn_00176fc8(vm,method->function,0);
        fn_00177160(vm,-1,method->name);
        fn_00177270(vm,method->parameter_check,method->type_mask);
        fn_00166f0c(vm,-3,0);
    }
    fn_00158128(vm,(const SqStringByte015*)"_version_",-1);
    fn_00158128(vm,(const SqStringByte015*)"Squirrel 2.2.5 stable",-1);
    fn_00166f0c(vm,-3,0);
    new_constant(vm,"_charsize_",1);
    new_constant(vm,"_intsize_",4);
    new_constant(vm,"_floatsize_",4);
    fn_00173cb8(vm,1);
}
