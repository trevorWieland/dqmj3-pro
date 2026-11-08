#include "binding062v.h"

SdkWord062s sdk_binding_can_transition062v(const SdkBinding062v *binding,
    SdkWord062s requested)
{
    if (requested == 128 || requested == 256) {
        return 1;
    }
    switch (binding->state) {
    case 1:
        return requested == 2 || requested == 16 || requested == 64;
    case 2:
        return requested == 4;
    case 4:
        return requested == 8 || requested == 16;
    case 8:
        return requested == 4 || requested == 32;
    case 16:
        return requested == 64;
    case 32:
        return binding->dependents == 0 && requested == 16;
    case 64:
        return requested == 1 || requested == 2;
    case 128:
    case 256:
        return 1;
    default:
        return 0;
    }
}
