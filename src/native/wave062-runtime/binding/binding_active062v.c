#include "binding062v.h"

SdkWord062s sdk_binding_active062v(const SdkBinding062v *binding)
{
    return binding->state == 4 || binding->state == 8;
}

void sdk_binding_notify062v(SdkBinding062v *binding)
{
    (void)binding;
}
