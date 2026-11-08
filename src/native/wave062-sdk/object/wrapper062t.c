#include "object062t.h"

SdkWord062s sdk_wrapper_ready062t(SdkWrapper062t *wrapper)
{
    SdkContext062s *context = sdk_context062s();
    SdkMutex062s *mutex = &context->owner->mutex;
    mutex->methods->acquire(mutex);
    SdkWord062s ready = 0;
    SdkPeer062t *peer = wrapper->current;
    if (peer && wrapper->disabled == 0) {
        SdkChild062t *child = peer->child;
        if (child)
            ready = child->methods->ready(child) != 0;
    }
    mutex->methods->release(mutex);
    return ready;
}

SdkWord062s sdk_wrapper_closed062t(SdkWrapper062t *wrapper)
{
    SdkPeer062t *peer = wrapper->current;
    if (peer && wrapper->disabled == 0) {
        SdkChild062t *child = peer->child;
        if (child)
            return child->methods->closed(child) != 0;
    }
    return 0;
}
