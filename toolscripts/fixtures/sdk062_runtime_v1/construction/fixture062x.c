#include "construction062x.h"
#define OFFSET(type, field) __builtin_offsetof(type, field)

typedef struct SdkWideObserver062x {
    SdkWideName062x *object;
    SdkWord062s calls;
    void *allocation;
    const void *methods;
    const SdkWideUnit062x *text;
    SdkWord062s count;
    SdkWord062s live;
} SdkWideObserver062x;

SdkWideObserver062x *fixture_wide_observer062x;
const SdkByte062s sdk_wide_name_identity062x = 0;
const SdkByte062s sdk_address_list_identity062x = 0;
const SdkBindingMethods062w sdk_binding_base_methods062x = {
    {0, 0}, {0, 0, 0}, sdk_binding_notify062v,
    sdk_binding_query062w, 0, sdk_binding_start_ready062w,
    sdk_binding_poll_ready062w, 0, 0,
    sdk_binding_can_transition062v, sdk_binding_active062v,
    sdk_binding_state062w
};

void fixture_wide_dispose062x(void *allocation)
{
    SdkWideObserver062x *observer = fixture_wide_observer062x;
    if (observer->live != 1)
        __builtin_trap();
    observer->calls += 1;
    observer->allocation = allocation;
    observer->methods = observer->object->methods;
    observer->text = observer->object->text;
    observer->count = *(SdkWord062s *)((SdkByte062s *)allocation + 8);
    observer->live = 0;
}

void sdk_wide_default_dispose062x(void *allocation)
{
    (void)allocation;
    __builtin_trap();
}

const SdkWord062s fixture_construction_layout062x[] = {
    sizeof(void *), sizeof(SdkWideName062x), OFFSET(SdkWideName062x, text),
    sizeof(SdkBindingObject062w), OFFSET(SdkBinding062v, identity),
    OFFSET(SdkBinding062v, name), OFFSET(SdkBinding062v, state),
    OFFSET(SdkBinding062v, dependents),
    OFFSET(SdkBindingObject062w, unknown_001c), sizeof(SdkWideObserver062x),
    OFFSET(SdkWideObserver062x, calls), OFFSET(SdkWideObserver062x, allocation),
    OFFSET(SdkWideObserver062x, methods), OFFSET(SdkWideObserver062x, text),
    OFFSET(SdkWideObserver062x, count), OFFSET(SdkWideObserver062x, live),
    sizeof(SdkAddressList062x), sizeof(SdkAddressListPool062x),
    sizeof(SdkAddressListNode062x), OFFSET(SdkAddressListPool062x, capacity),
    OFFSET(SdkAddressListPool062x, storage), OFFSET(SdkAddressList062x, count)
};
