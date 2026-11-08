#include "construction062x.h"

SdkBindingObject062w *sdk_binding_initialize062x(SdkBindingObject062w *object,
    const SdkWideName062x *source)
{
    SdkBinding062v *binding = &object->policy;
    binding->reference.references = 0;
    binding->reference.references = 1;
    binding->reference.disposed = 0;
    binding->reference.methods = &sdk_binding_base_methods062x.reference;
    binding->identity = &sdk_wide_name_identity062x;
    sdk_wide_create062x(&binding->name, source->text);
    binding->state = 1;
    binding->dependents = 0;
    object->unknown_001c = 0;
    return object;
}
