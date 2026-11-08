#include "binding_start062w.h"

SdkWord062s sdk_binding_query062w(const SdkBinding062v *binding)
{
    const SdkBindingMethods062w *methods =
        (const SdkBindingMethods062w *)binding->reference.methods;
    return methods->state(binding);
}

SdkWord062s sdk_binding_state062w(const SdkBinding062v *binding)
{
    return binding->state;
}

SdkWord062s sdk_binding_start_ready062w(SdkBinding062v *binding)
{
    (void)binding;
    return 1;
}

SdkWord062s sdk_binding_poll_ready062w(SdkBinding062v *binding)
{
    (void)binding;
    return 1;
}
