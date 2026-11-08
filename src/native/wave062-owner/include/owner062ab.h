#ifndef OWNER062AB_H
#define OWNER062AB_H
#include "config062ab.h"
#include "timer062aa.h"

typedef struct SdkOwnerPair062ab {
    SdkEndpoint062aa first;
    SdkEndpoint062aa second;
    SdkClockPair062u stamp;
} SdkOwnerPair062ab;
typedef struct SdkOwnerNode88062ab SdkOwnerNode88062ab;
typedef struct SdkOwnerNode56062ab SdkOwnerNode56062ab;
struct SdkOwnerNode88062ab {
    SdkByte062s black;
    SdkOwnerNode88062ab *parent;
    SdkOwnerNode88062ab *left;
    SdkOwnerNode88062ab *right;
    SdkEndpoint062aa first;
    SdkEndpoint062aa second;
    SdkClockPair062u stamp;
};
struct SdkOwnerNode56062ab {
    SdkByte062s black;
    SdkOwnerNode56062ab *parent;
    SdkOwnerNode56062ab *left;
    SdkOwnerNode56062ab *right;
    SdkEndpoint062aa endpoint;
    SdkClockPair062u stamp;
};
typedef struct SdkOwnerPool88062ab {
    struct SdkOwnerPool88062ab *next;
    SdkWord062s capacity;
    SdkOwnerNode88062ab *storage;
} SdkOwnerPool88062ab;
typedef struct SdkOwnerPool56062ab {
    struct SdkOwnerPool56062ab *next;
    SdkWord062s capacity;
    SdkOwnerNode56062ab *storage;
} SdkOwnerPool56062ab;
typedef struct SdkOwnerMap88062ab {
    SdkOwnerPool88062ab *pools;
    SdkOwnerNode88062ab *free_nodes;
    SdkOwnerNode88062ab *next;
    SdkOwnerNode88062ab *limit;
    SdkOwnerNode88062ab *head;
    SdkWord062s count;
    SdkByte062s allow_duplicates;
    SdkByte062s address_tag;
} SdkOwnerMap88062ab;
typedef struct SdkOwnerMap56062ab {
    SdkOwnerPool56062ab *pools;
    SdkOwnerNode56062ab *free_nodes;
    SdkOwnerNode56062ab *next;
    SdkOwnerNode56062ab *limit;
    SdkOwnerNode56062ab *head;
    SdkWord062s count;
    SdkByte062s allow_duplicates;
    SdkByte062s address_tag;
} SdkOwnerMap56062ab;
typedef struct SdkOwner062ab {
    const void *identity;
    SdkByte062s component;
    SdkOwnerMap88062ab map88;
    SdkOwnerMap56062ab map56;
    SdkClockPair062u stamp;
    SdkWord062s preserved_0048;
    SdkMutex062s mutex;
    SdkWord062s preserved_0074;
    SdkTimer062aa timer;
    void *reference_a;
    void *reference_b;
    SdkByte062s preserved_00b0[8];
} SdkOwner062ab;
extern const SdkByte062s sdk_owner_identity062ab;
extern const SdkByte062s sdk_owner_base_identity062ab;
SdkOwner062ab *sdk_owner_initialize062ab(SdkOwner062ab *);
SdkOwner062ab *sdk_owner_destroy062ab(SdkOwner062ab *);
void sdk_owner_release062ab(SdkOwner062ab *);
void sdk_owner_insert88062ab(SdkOwnerNode88062ab **, SdkOwnerMap88062ab *,
    SdkWord062s, SdkOwnerNode88062ab *, const SdkOwnerPair062ab *);
void sdk_owner_clear_all062ab(void *);
void sdk_owner_dispose062ab(void *);
void sdk_owner_default_dispose062ab(void *);
#endif
