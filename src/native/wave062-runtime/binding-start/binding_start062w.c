#include "binding_start062w.h"

static const SdkBindingMethods062w *methods(const SdkBinding062v *binding)
{
    return (const SdkBindingMethods062w *)binding->reference.methods;
}

SdkWord062s sdk_binding_start062w(SdkBinding062v *binding)
{
    methods(binding)->query(binding);
    SdkWord062s state = binding->state;
    if (state == 2) {
        if (methods(binding)->ready(binding) != 0 &&
            methods(binding)->can_transition(binding, 4) != 0) {
            methods(binding)->notify(binding);
            binding->state = 4;
        }
        return binding->state;
    }
    if (state == 1 || state == 64) {
        if (methods(binding)->can_transition(binding, 2) != 0) {
            methods(binding)->notify(binding);
            binding->state = 2;
        }
        if (methods(binding)->start(binding) != 0 &&
            methods(binding)->can_transition(binding, 4) != 0) {
            methods(binding)->notify(binding);
            binding->state = 4;
        }
        return binding->state;
    }
    return state;
}
