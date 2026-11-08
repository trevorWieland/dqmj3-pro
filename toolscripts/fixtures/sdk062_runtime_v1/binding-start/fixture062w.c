#include "binding_start062w.h"
#define OFFSET(type, field) __builtin_offsetof(type, field)

const SdkWord062s fixture_binding_start_layout062w[] = {
    sizeof(void *), sizeof(SdkBinding062v), sizeof(SdkBindingObject062w),
    OFFSET(SdkBindingObject062w, unknown_001c),
    OFFSET(SdkBinding062v, state), OFFSET(SdkBinding062v, dependents),
    sizeof(SdkBindingMethods062w), OFFSET(SdkBindingMethods062w, notify),
    OFFSET(SdkBindingMethods062w, query), OFFSET(SdkBindingMethods062w, start),
    OFFSET(SdkBindingMethods062w, ready),
    OFFSET(SdkBindingMethods062w, can_transition),
    OFFSET(SdkBindingMethods062w, active), OFFSET(SdkBindingMethods062w, state)
};

const SdkBindingMethods062w fixture_binding_start_methods062w = {
    { 0, 0 }, { 0, 0, 0 }, sdk_binding_notify062v,
    sdk_binding_query062w, 0, sdk_binding_start_ready062w,
    sdk_binding_poll_ready062w, 0, 0,
    sdk_binding_can_transition062v, sdk_binding_active062v,
    sdk_binding_state062w
};
