#ifndef DQMJ3_VM_CALL_FIXTURE022_H
#define DQMJ3_VM_CALL_FIXTURE022_H
#include "vm_call.h"

typedef struct {
    unsigned char *memory;
    SqPrototypeU32 source, phase, fault, array_length, captures, event_count;
    SqPrototypeU32 events[128][12];
    SqPrototypeU32 native_allocations, array_allocations, reallocations, returned;
    SqPrototypeU32 error_mode,string_allocations,string_bytes,scratch_bytes;
    SqPrototypeU32 type_error_visits,type_error_index,type_error_mask,type_error_type;
    const SqPrototypeVTable011 *prototype_vtable,*native_vtable,*array_vtable,*base_vtable;
} SqCallFixture022;
extern SqCallFixture022 call_fixture022;
SqVmCallStorage022 *fixture_vm022(void);
SqLookupSharedStorage020 *fixture_shared022(void);
SqPrototype011 *fixture_prototype022(SqPrototypeU32 index);
SqPrefixObject012 *fixture_result022(void);
SqPrototypeU32 fixture_identity022(const void *pointer);
SqPrototypeU32 fixture_payload022(SqPrefixObject012 value);
SqPrototypeU32 fixture_bind022(void *memory,SqPrototypeU32 bytes,const SqPrototypeVTable011 *prototype_vtable,
    const SqPrototypeVTable011 *native_vtable,const SqPrototypeVTable011 *array_vtable,const SqPrototypeVTable011 *base_vtable);
void fixture_prepare022(SqPrototypeU32 length,SqPrototypeU32 captures,SqPrototypeU32 flags);
void fixture_register022(SqPrototypeU32 source);
void fixture_call022(SqPrototypeU32 source);
void fixture_cleanup022(SqPrototypeU32 source);
SqPrototypeU32 fixture_snapshot022(SqPrototypeU32 *output,SqPrototypeU32 capacity);
SqPrototypeI32 fixture_array_callback022(void *vm);
#endif
