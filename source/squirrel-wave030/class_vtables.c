#include "class_call.h"

static void class_destroy(void *owner) { sq_class_destroy030(owner); }
static void class_release(void *owner) { sq_class_release030(owner); }
static void instance_destroy(void *owner) { sq_class_instance_destroy030(owner); }
static void instance_release(void *owner) { sq_class_instance_release030(owner); }
static _Bool instance_meta(void *owner,void *vm,SqPrototypeU32 selector,SqPrefixObject012 *result)
{ return sq_class_instance_meta030(owner,vm,selector,result); }
static void unsupported_virtual(void) { sq_class_failure030(); }

__attribute__((section(".rodata.sq_class_vtable030")))
const SqPrototypeVTable011 sq_class_vtable030={class_destroy,0,class_release};

__attribute__((section(".rodata.sq_class_instance_vtable030")))
const SqLookupMetaVTable020 sq_class_instance_vtable030={
    {instance_destroy,0,instance_release},unsupported_virtual,unsupported_virtual,instance_meta};
