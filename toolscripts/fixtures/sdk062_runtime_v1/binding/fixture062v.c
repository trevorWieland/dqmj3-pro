#include "binding062v.h"
#define OFFSET(type, field) __builtin_offsetof(type, field)

const SdkWord062s fixture_binding_layout062v[] = {
    sizeof(void *), sizeof(SdkBinding062v),
    OFFSET(SdkBinding062v, reference), OFFSET(SdkBinding062v, identity),
    OFFSET(SdkBinding062v, name), OFFSET(SdkBinding062v, state),
    OFFSET(SdkBinding062v, dependents), sizeof(SdkBindingMethods062v),
    OFFSET(SdkBindingMethods062v, notify),
    OFFSET(SdkBindingMethods062v, can_transition),
    OFFSET(SdkBindingMethods062v, active)
};

const SdkBindingMethods062v fixture_binding_methods062v = {
    { 0, 0 }, { 0, 0, 0 }, sdk_binding_notify062v,
    { 0, 0, 0, 0, 0, 0 },
    sdk_binding_can_transition062v, sdk_binding_active062v
};

SdkWord062s fixture_binding_route062v(SdkBinding062v *binding)
{
    const SdkBindingMethods062v *methods =
        (const SdkBindingMethods062v *)binding->reference.methods;
    SdkWord062s active = methods->active(binding);
    if (active != 0) {
        if (binding->state == 4 && methods->can_transition(binding, 8) != 0) {
            methods->notify(binding);
            binding->state = 8;
        }
        ++binding->dependents;
    }
    return active;
}
