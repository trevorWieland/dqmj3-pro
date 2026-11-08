#ifndef REGISTRY062AD_H
#define REGISTRY062AD_H
#include "owner062ab.h"

typedef struct Registry062ad Registry062ad;
typedef struct RegistryMethods062ad {
    Registry062ad *(*destroy)(Registry062ad *);
} RegistryMethods062ad;

typedef struct RegistryRecord062ad {
    SdkWord062s key_word;
    SdkOwner062ab *owner;
} RegistryRecord062ad;

struct Registry062ad {
    const RegistryMethods062ad *methods;
    SdkWord062s preserved_0004;
    RegistryRecord062ad *begin;
    RegistryRecord062ad *end;
    RegistryRecord062ad *limit;
};

typedef struct RegistryEnvironment062ad {
    SdkByte062s lookup_lock;
} RegistryEnvironment062ad;

extern RegistryEnvironment062ad registry_environment062ad;
extern const RegistryMethods062ad registry_methods062ad;
void *registry_allocate062ad(SdkWord062s);
void registry_dispose062ad(void *);
SdkMutex062s *registry_mutex062ad(void);
RegistryRecord062ad *registry_lower_bound062ad(Registry062ad *, SdkByte062s);
SdkWord062s registry_count062ad(const Registry062ad *);
SdkOwner062ab *registry_find062ad(Registry062ad *, const SdkByte062s *);
SdkWord062s registry_register062ad(Registry062ad *, SdkOwner062ab *,
    SdkWord062s, SdkByte062s *);
SdkWord062s registry_unregister062ad(Registry062ad *, SdkWord062s, SdkWord062s);
Registry062ad *registry_initialize062ad(Registry062ad *);
Registry062ad *registry_destroy062ad(Registry062ad *);

static inline SdkByte062s registry_key062ad(const RegistryRecord062ad *record)
{
    return *(const SdkByte062s *)&record->key_word;
}

static inline void registry_key_store062ad(RegistryRecord062ad *record,
    SdkByte062s key)
{
    *(SdkByte062s *)&record->key_word = key;
}

#endif
