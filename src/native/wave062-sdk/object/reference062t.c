#include "object062t.h"

void sdk_reference_release062t(SdkReference062t *reference)
{
    SdkWord062s remaining = __c11_atomic_fetch_sub(&reference->references, 1,
        __ATOMIC_RELAXED) - 1;
    if (remaining == 0 && reference->disposed == 0) {
        reference->disposed = 1;
        reference->methods->destroy(reference);
    }
}

void sdk_reference_retain062t(SdkReference062t *reference)
{
    __c11_atomic_fetch_add(&reference->references, 1, __ATOMIC_RELAXED);
}

void sdk_address_replace062t(SdkAddressReference062t *address,
    SdkReference062t *replacement)
{
    if (address->owner) {
        sdk_reference_release062t(address->owner);
        address->owner = 0;
    }
    if (replacement) {
        address->owner = replacement;
        sdk_reference_retain062t(replacement);
    }
}

void sdk_wrapper_prepare062t(SdkWrapper062t *wrapper, SdkPeer062t *replacement)
{
    SdkDerivedWrapper062t *derived = (SdkDerivedWrapper062t *)wrapper;
    sdk_address_replace062t(&derived->address,
        replacement ? &replacement->common : 0);
}

void sdk_wrapper_replace062t(SdkWrapper062t *wrapper, SdkPeer062t *replacement)
{
    wrapper->methods->prepare(wrapper, replacement);
    if (wrapper->current) {
        sdk_reference_release062t(&wrapper->current->common);
        wrapper->current = 0;
    }
    if (replacement) {
        wrapper->current = replacement;
        sdk_reference_retain062t(&replacement->common);
    }
}
