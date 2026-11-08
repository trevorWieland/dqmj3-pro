#ifndef STATE_RESOURCE_CONSTRUCTION7_H
#define STATE_RESOURCE_CONSTRUCTION7_H
#include "../source/context7.h"

typedef void *(*StateAllocate7)(StateWord055,StateWord055,StateWord055,StateWord055);
typedef void (*StateReleaseRequest7)(StateWord055,StateWord055,StateWord055,void *);

typedef struct StateQueueRecord7 {
    StateWord055 words[3];
    void *payload;
} StateQueueRecord7;

typedef struct StateQueueNode7 {
    StateQueueRecord7 records[2];
    struct StateQueueNode7 *previous;
    struct StateQueueNode7 *next;
} StateQueueNode7;

typedef struct StateQueue7 {
    StateQueueNode7 *head;
    StateWord055 first_cursor;
    StateQueueNode7 *tail;
    StateWord055 second_cursor;
} StateQueue7;

typedef struct StateResourceSettings7 {
    StateWord055 filters[2],wraps[2],opaque10;
    int level;
    float colors[4];
    float bias;
    StateWord055 kind,opaque30;
} StateResourceSettings7;

typedef struct StateResourceBuffer7 {
    void *data;
    void *auxiliary;
    StateWord055 state,opaque[12],storage_flags,region;
} StateResourceBuffer7;

typedef struct StateSingleResource7 {
    StateResourceSettings7 settings;
    StateResourceBuffer7 buffer;
} StateSingleResource7;

typedef struct StateMultipleResource7 {
    StateResourceSettings7 settings;
    StateResourceBuffer7 buffers[6];
} StateMultipleResource7;

typedef struct StateResourceExtra7 {
    StateWord055 words[0x9c/4];
} StateResourceExtra7;

typedef struct StateResourceIndex7 {
    StateSingleResource7 *single;
    StateMultipleResource7 *multiple;
    StateResourceExtra7 *extra;
    unsigned char opaque[0x8ac-12];
} StateResourceIndex7;

extern StateAllocate7 state_allocate7;
extern StateReleaseRequest7 state_release_request7;
extern StateQueue7 *state_queue7;
extern StateResourceIndex7 *state_resource_index7;
extern StateWord055 state_resource_initialized7;
StateQueueNode7 *state_queue_node_create7(void);
int state_queue_construct7(StateQueue7 *queue);
void state_resource_invalidate7(void *payload);
StateSingleResource7 *state_single_resource_create7(StateWord055 region);
StateMultipleResource7 *state_multiple_resource_create7(StateWord055 region);
void state_resource_buffers_release7(StateWord055 kind,StateResourceBuffer7 *buffer);
int state_resource_index_construct7(StateResourceIndex7 *index);
_Noreturn void state_resource_invalid_zero7(void);

_Static_assert(sizeof(StateQueueRecord7)==(__SIZEOF_POINTER__==4?16:24),"two scalar records with genuine payload pointers");
_Static_assert(sizeof(StateQueueNode7)==(__SIZEOF_POINTER__==4?40:64),"two records and named list links");
_Static_assert(sizeof(StateQueue7)==(__SIZEOF_POINTER__==4?16:32),"pointer-width-aware queue pair");
_Static_assert(sizeof(StateResourceSettings7)==52,"measured scalar settings prefix");
_Static_assert(sizeof(StateResourceBuffer7)==(__SIZEOF_POINTER__==4?68:80),"actual CPU pointers remain full-width");
_Static_assert(sizeof(StateSingleResource7)==(__SIZEOF_POINTER__==4?120:136),"single owned resource storage");
_Static_assert(sizeof(StateMultipleResource7)==(__SIZEOF_POINTER__==4?460:536),"six owned resource buffers");
_Static_assert(sizeof(StateResourceIndex7)==(__SIZEOF_POINTER__==4?0x8ac:0x8b8),"three named owned pointers plus constructor-cleared storage");
#endif
