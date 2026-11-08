#include "resource7.h"

typedef struct StateResourceFixtureEvent7 {
    StateWord055 kind,flags,options,region,bytes;
    void *pointer,*single,*multiple,*extra;
} StateResourceFixtureEvent7;

typedef struct StateResourceFixtureService7 {
    unsigned char *arena;
    StateWord055 cursor,fail_at,count,fault;
    StateResourceFixtureEvent7 events[32];
} StateResourceFixtureService7;

STATE_API055 StateResourceFixtureService7 fixture_resource_service7;
StateApplyContext055 *state_apply_context055;

static StateResourceFixtureEvent7 *resource_event7(StateWord055 kind,StateWord055 flags,StateWord055 options,StateWord055 region) {
    StateResourceFixtureService7 *service=&fixture_resource_service7;
    if (service->count>=32) {
        service->fault=1;
        return 0;
    }
    StateResourceFixtureEvent7 *event=&service->events[service->count++];
    event->kind=kind;
    event->flags=flags;
    event->options=options;
    event->region=region;
    if (state_resource_index7) {
        event->single=state_resource_index7->single;
        event->multiple=state_resource_index7->multiple;
        event->extra=state_resource_index7->extra;
    }
    return event;
}

static void *resource_allocate_fixture7(StateWord055 flags,StateWord055 options,StateWord055 region,StateWord055 bytes) {
    StateResourceFixtureService7 *service=&fixture_resource_service7;
    StateResourceFixtureEvent7 *event=resource_event7(1,flags,options,region);
    if (!event)
        return 0;
    StateWord055 call=0;
    for (StateWord055 i=0;i<service->count;i++)
        call+=service->events[i].kind==1;
    event->bytes=bytes;
    if (service->fail_at==call)
        return 0;
    __UINTPTR_TYPE__ address=(__UINTPTR_TYPE__)service->arena+service->cursor;
    address=(address+255)&~(__UINTPTR_TYPE__)255;
    if (address+bytes>(__UINTPTR_TYPE__)service->arena+0x40000) {
        service->fault=2;
        return 0;
    }
    service->cursor=(StateWord055)(address+bytes-(__UINTPTR_TYPE__)service->arena);
    event->pointer=(void *)address;
    return event->pointer;
}

static void resource_release_fixture7(StateWord055 flags,StateWord055 options,StateWord055 region,void *pointer) {
    StateResourceFixtureEvent7 *event=resource_event7(2,flags,options,region);
    if (event)
        event->pointer=pointer;
}

STATE_API055 int fixture_resource_run7(unsigned char *arena,StateWord055 fail_at) {
    unsigned char *bytes=(unsigned char *)&fixture_resource_service7;
    for (StateWord055 i=0;i<sizeof(fixture_resource_service7);i++)
        bytes[i]=0;
    fixture_resource_service7.arena=arena;
    fixture_resource_service7.cursor=0x10000;
    fixture_resource_service7.fail_at=fail_at ? fail_at+1 : 0;
    state_allocate7=resource_allocate_fixture7;
    state_release_request7=resource_release_fixture7;
    state_queue7=0;
    state_resource_index7=0;
    state_resource_initialized7=0;
    state_construct_context7((StateApplyContext055 *)(arena+0x1000));
    if (state_queue_construct7((StateQueue7 *)(arena+0xa000)))
        return -2;
    return state_resource_index_construct7((StateResourceIndex7 *)(arena+0x5000));
}

_Noreturn void state_resource_invalid_zero7(void) {
    __builtin_trap();
}
