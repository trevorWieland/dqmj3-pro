#include "fixture_bindings.h"
#include "startup.h"
#include "../squirrel-wave020/lookup_error.h"

_Noreturn void required_startup_path049(void)
{
    __builtin_trap();
}

_Noreturn void sq_startup_assert049(void)
{
    required_startup_path049();
}

void sq_startup_formatted_error049(SqVm040 *vm,const char *message)
{
    (void)vm;
    (void)message;
    required_startup_path049();
}

void required_lookup_raise_format049(void *vm,const char *format,...)
{
    (void)vm;
    (void)format;
    required_startup_path049();
}

SqString015 *required_lookup_stringify049(void *vm,const SqPrefixObject012 *object)
{
    (void)vm;
    (void)object;
    required_startup_path049();
}

const char *required_lookup_object_type_name049(const SqPrefixObject012 *object)
{
    (void)object;
    required_startup_path049();
}

_Bool required_lookup_meta_call049(void *vm,void *owner,SqPrototypeU32 selector,SqPrototypeI32 arguments,SqPrefixObject012 *result)
{
    (void)vm;
    (void)owner;
    (void)selector;
    (void)arguments;
    (void)result;
    required_startup_path049();
}

_Bool required_class_new_slot049(SqClass030 *klass,SqPrefixState012 *shared,const SqPrefixObject012 *key,
    const SqPrefixObject012 *value,SqPrototypeU32 raw_static)
{
    (void)klass;
    (void)shared;
    (void)key;
    (void)value;
    (void)raw_static;
    required_startup_path049();
}

_Noreturn void required_class_failure049(void)
{
    required_startup_path049();
}
