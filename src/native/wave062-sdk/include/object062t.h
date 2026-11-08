#ifndef OBJECT062T_H
#define OBJECT062T_H
#include "sdk062s.h"

typedef struct SdkReference062t SdkReference062t;
typedef struct SdkPeer062t SdkPeer062t;
typedef struct SdkWrapper062t SdkWrapper062t;
typedef struct SdkConnection062t SdkConnection062t;
typedef struct SdkChild062t SdkChild062t;
typedef struct SdkResult062t {
    SdkWord062s code;
    const void *origin;
    SdkWord062s line;
} SdkResult062t;
typedef struct SdkReferenceMethods062t {
    void (*unknown)(SdkReference062t *);
    void (*destroy)(SdkReference062t *);
} SdkReferenceMethods062t;
struct SdkReference062t {
    const SdkReferenceMethods062t *methods;
    _Atomic(SdkWord062s) references;
    SdkByte062s disposed;
};
typedef struct SdkConnectionMethods062t {
    void (*unknown[10])(SdkConnection062t *);
    SdkWord062s (*closed)(SdkConnection062t *);
    SdkWord062s (*ready)(SdkConnection062t *);
} SdkConnectionMethods062t;
typedef void (*SdkConnectionCallback062t)(SdkConnection062t *,
    const SdkResult062t *, SdkByte062s *);
struct SdkConnection062t {
    const SdkConnectionMethods062t *methods;
    void *factory;
    SdkByte062s unknown_0008[180];
    SdkByte062s state;
    SdkByte062s unknown_00bd[299];
    const void *callback_methods;
    SdkWord062s callback_flags;
    SdkReference062t *callback_owner;
    SdkConnectionCallback062t callback;
    SdkByte062s capture[116];
    SdkByte062s pending;
};
typedef struct SdkChildMethods062t {
    void (*unknown[10])(SdkChild062t *);
    SdkWord062s (*closed)(SdkChild062t *);
    SdkWord062s (*ready)(SdkChild062t *);
} SdkChildMethods062t;
struct SdkChild062t {
    const SdkChildMethods062t *methods;
    void *factory;
    SdkByte062s unknown_0008[136];
    SdkConnection062t *underlying;
    void *callback;
    void *data;
};
typedef struct SdkWrapperMethods062t {
    void (*unknown[3])(SdkWrapper062t *);
    void (*replace)(SdkWrapper062t *, SdkPeer062t *);
    void (*unknown_0010)(SdkWrapper062t *);
    SdkWord062s (*ready)(SdkWrapper062t *);
    SdkWord062s (*closed)(SdkWrapper062t *);
    void (*unknown_001c)(SdkWrapper062t *);
    void (*prepare)(SdkWrapper062t *, SdkPeer062t *);
} SdkWrapperMethods062t;
struct SdkWrapper062t {
    const SdkWrapperMethods062t *methods;
    SdkWord062s kind;
    SdkPeer062t *current;
    SdkByte062s disabled;
};
typedef struct SdkAddressReference062t {
    const void *methods;
    SdkByte062s unknown_0004[60];
    SdkReference062t *owner;
} SdkAddressReference062t;
typedef struct SdkDerivedWrapper062t {
    SdkWrapper062t common;
    SdkAddressReference062t address;
} SdkDerivedWrapper062t;
typedef struct SdkFactoryBinding062t {
    SdkByte062s unknown_0000[28];
    SdkWrapper062t *wrapper;
} SdkFactoryBinding062t;
typedef struct SdkServiceBinding062t {
    SdkByte062s unknown_0000[16];
    SdkFactoryBinding062t *factory;
} SdkServiceBinding062t;
typedef struct SdkStringReference062t {
    const void *methods;
    void *storage;
} SdkStringReference062t;
struct SdkPeer062t {
    SdkReference062t common;
    void *context;
    SdkWord062s unknown_0010;
    SdkStringReference062t first;
    SdkStringReference062t second;
    SdkServiceBinding062t *service;
    SdkChild062t *other;
    SdkChild062t *child;
};
typedef struct SdkTaskState062t {
    SdkByte062s unknown_0000[34];
    SdkByte062s state;
} SdkTaskState062t;
typedef struct SdkOperationState062t {
    SdkByte062s unknown_0000[120];
    SdkPeer062t *peer;
    SdkByte062s unknown_007c[24];
    SdkTaskState062t *second;
    SdkTaskState062t *first;
} SdkOperationState062t;
typedef struct SdkStatusHolder062t {
    SdkByte062s unknown_0000[132];
    SdkOperationState062t *state;
} SdkStatusHolder062t;

extern const SdkByte062s sdk_result_origin062t;
extern const SdkConnectionMethods062t sdk_connection_methods062t;
extern const SdkChildMethods062t sdk_child_methods062t;
extern const SdkWrapperMethods062t sdk_wrapper_methods062t;
void sdk_reference_release062t(SdkReference062t *);
void sdk_reference_retain062t(SdkReference062t *);
void sdk_address_replace062t(SdkAddressReference062t *, SdkReference062t *);
void sdk_wrapper_prepare062t(SdkWrapper062t *, SdkPeer062t *);
void sdk_wrapper_replace062t(SdkWrapper062t *, SdkPeer062t *);
SdkWord062s sdk_connection_ready062t(SdkConnection062t *);
SdkWord062s sdk_connection_closed062t(SdkConnection062t *);
SdkWord062s sdk_connection_set_state062t(SdkConnection062t *, SdkWord062s);
SdkWord062s sdk_child_ready062t(SdkChild062t *);
SdkWord062s sdk_child_closed062t(SdkChild062t *);
SdkWord062s sdk_wrapper_ready062t(SdkWrapper062t *);
SdkWord062s sdk_wrapper_closed062t(SdkWrapper062t *);
SdkResult062t *sdk_result_make062t(SdkResult062t *, const SdkWord062s *);
SdkWord062s sdk_result_success062t(const SdkResult062t *);
void sdk_operation_result062t(SdkResult062t *, SdkOperationState062t *);
SdkWord062s sdk_holder_ready062t(SdkStatusHolder062t *);
#endif
