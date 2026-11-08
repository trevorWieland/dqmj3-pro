#ifndef HEAP062AC_H
#define HEAP062AC_H
#include "sdk062s.h"
typedef unsigned short HeapHalf062ac;
typedef __UINTPTR_TYPE__ HeapAddress062ac;
typedef struct Heap062ac Heap062ac;
typedef struct HeapBlock062ac HeapBlock062ac;
typedef struct HeapList062ac {
    Heap062ac *first;
    Heap062ac *last;
    HeapHalf062ac count;
    HeapHalf062ac offset;
} HeapList062ac;
struct HeapBlock062ac {
    HeapHalf062ac magic;
    HeapHalf062ac flags;
    SdkWord062s size;
    HeapBlock062ac *previous;
    HeapBlock062ac *next;
};
typedef struct HeapLists062ac {
    HeapBlock062ac *free_first;
    HeapBlock062ac *free_last;
    HeapBlock062ac *used_first;
    HeapBlock062ac *used_last;
    HeapHalf062ac group;
    HeapHalf062ac policy;
    SdkByte062s split;
} HeapLists062ac;
struct Heap062ac {
    SdkWord062s signature;
    Heap062ac *previous;
    Heap062ac *next;
    HeapList062ac children;
    SdkByte062s *begin;
    SdkByte062s *end;
    SdkWord062s flags;
    HeapLists062ac lists;
};
typedef struct HeapObject062ac {
    const void *identity;
    SdkByte062s opaque_0004[20];
    Heap062ac heap;
    SdkWord062s live;
    SdkFastMutex062s mutex;
} HeapObject062ac;
typedef struct HeapProxy062ac HeapProxy062ac;
typedef struct HeapMethods062ac {
    void *(*allocate)(HeapProxy062ac *, SdkWord062s, SdkSigned062s);
    void (*dispose)(HeapProxy062ac *, void *);
} HeapMethods062ac;
struct HeapProxy062ac {
    const HeapMethods062ac *methods;
    HeapObject062ac *heap;
    SdkByte062s group;
    SdkByte062s fit;
    signed char split;
};
typedef struct HeapEnvironment062ac {
    SdkByte062s enabled;
    HeapObject062ac *heap;
    HeapProxy062ac *allocator;
} HeapEnvironment062ac;
extern HeapEnvironment062ac heap_environment062ac;
extern HeapList062ac heap_registry062ac;
extern SdkByte062s heap_registry_initialized062ac;
extern HeapProxy062ac heap_proxy062ac;
extern const SdkByte062s heap_identity062ac;
extern const HeapMethods062ac heap_methods062ac;
#define HEAP_ALIGNMENT062AC ((SdkWord062s)_Alignof(HeapBlock062ac))
#define HEAP_HEADER062AC ((SdkWord062s)sizeof(HeapBlock062ac))
void heap_list_initialize062ac(HeapList062ac *, SdkWord062s);
Heap062ac *heap_list_next062ac(const HeapList062ac *, Heap062ac *);
HeapList062ac *heap_list_append062ac(HeapList062ac *, Heap062ac *);
Heap062ac *heap_find_containing062ac(HeapList062ac *, const void *);
HeapList062ac *heap_register062ac(Heap062ac *, SdkWord062s, SdkByte062s *, SdkByte062s *, SdkWord062s);
Heap062ac *heap_initialize062ac(Heap062ac *, void *, SdkWord062s, SdkWord062s);
void *heap_allocate062ac(Heap062ac *, SdkWord062s, SdkSigned062s);
void *heap_split062ac(HeapLists062ac *, HeapBlock062ac *, SdkByte062s *, SdkWord062s, SdkWord062s);
void heap_free062ac(Heap062ac *, void *);
HeapProxy062ac *heap_default_initialize062ac(void *, SdkWord062s);
void *heap_default_bytes062ac(SdkWord062s);
void *heap_default_allocate062ac(SdkWord062s, SdkSigned062s);
void heap_default_free062ac(void *);
SdkWord062s heap_group_set062ac(Heap062ac *, SdkWord062s);
SdkWord062s heap_policy_set062ac(Heap062ac *, SdkWord062s);
SdkSigned062s heap_split_set062ac(Heap062ac *, SdkSigned062s);
void *heap_object_allocate062ac(HeapObject062ac *, SdkWord062s, SdkSigned062s, SdkWord062s, SdkWord062s, SdkSigned062s);
void heap_object_free062ac(HeapObject062ac *, void *);
SdkWord062s heap_object_initialize062ac(HeapObject062ac *, void *, SdkWord062s, SdkWord062s);
void *heap_proxy_allocate062ac(HeapProxy062ac *, SdkWord062s, SdkSigned062s);
void heap_proxy_free062ac(HeapProxy062ac *, void *);
_Noreturn void heap_initialization_failure062ac(void);
SdkWord062s heap_allocation_size062ac(const HeapObject062ac *, const void *);
void *heap_sdk_allocate062ac(SdkWord062s);
void heap_sdk_dispose062ac(void *);
#endif
