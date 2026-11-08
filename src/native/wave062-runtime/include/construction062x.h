#ifndef CONSTRUCTION062X_H
#define CONSTRUCTION062X_H
#include "binding_start062w.h"

typedef unsigned short SdkWideUnit062x;
typedef struct SdkWideName062x {
    const void *methods;
    const SdkWideUnit062x *text;
} SdkWideName062x;

typedef union SdkWideAllocation062x {
    void (*dispose)(void *);
    SdkByte062s bytes[8];
} SdkWideAllocation062x;

typedef struct SdkAddressListNode062x SdkAddressListNode062x;
struct SdkAddressListNode062x {
    SdkAddressListNode062x *next;
    SdkAddressListNode062x *previous;
    void *unqualified_value;
};
typedef struct SdkAddressListPool062x {
    struct SdkAddressListPool062x *next;
    SdkWord062s capacity;
    SdkAddressListNode062x *storage;
} SdkAddressListPool062x;
typedef struct SdkAddressList062x {
    const void *methods;
    SdkAddressListPool062x *pools;
    SdkAddressListNode062x *free_nodes;
    SdkAddressListNode062x *next;
    SdkAddressListNode062x *limit;
    SdkAddressListNode062x *head;
    SdkWord062s count;
} SdkAddressList062x;
extern const SdkByte062s sdk_address_list_identity062x;
SdkAddressList062x *sdk_address_list_initialize062x(SdkAddressList062x *);
extern const SdkByte062s sdk_wide_name_identity062x;
extern const SdkBindingMethods062w sdk_binding_base_methods062x;
SdkWord062s sdk_wide_length062x(const SdkWideUnit062x *);
SdkWideUnit062x *sdk_wide_copy062x(SdkWideUnit062x *, const SdkWideUnit062x *);
SdkWideUnit062x *sdk_wide_create062x(const SdkWideUnit062x **, const SdkWideUnit062x *);
SdkWideName062x *sdk_wide_destroy062x(SdkWideName062x *);
SdkBindingObject062w *sdk_binding_initialize062x(SdkBindingObject062w *,
    const SdkWideName062x *);
void sdk_wide_default_dispose062x(void *);
#endif
