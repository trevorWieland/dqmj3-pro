#include "resource7.h"

StateAllocate7 state_allocate7;
StateReleaseRequest7 state_release_request7;
StateQueue7 *state_queue7;
StateResourceIndex7 *state_resource_index7;
StateWord055 state_resource_initialized7;

static void clear_resource7(void *pointer,StateWord055 bytes) {
    unsigned char *data=pointer;
    for (StateWord055 i=0;i<bytes;i++)
        data[i]=0;
}

static void *allocate_resource7(StateWord055 bytes) {
    return state_allocate7 ? state_allocate7(0x10000,0x100,0,bytes) : 0;
}

static void release_resource7(void *pointer) {
    if (state_release_request7)
        state_release_request7(0x10000,0x100,0,pointer);
}

StateQueueNode7 *state_queue_node_create7(void) {
    StateQueueNode7 *node=allocate_resource7(sizeof(*node));
    if (node)
        clear_resource7(node,sizeof(*node));
    return node;
}

int state_queue_construct7(StateQueue7 *queue) {
    state_queue7=queue;
    StateQueueNode7 *node=state_queue_node_create7();
    if (!node)
        return -1;
    node->previous=0;
    node->next=0;
    state_queue7->head=node;
    state_queue7->first_cursor=0;
    state_queue7->tail=node;
    state_queue7->second_cursor=0;
    return 0;
}

void state_resource_invalidate7(void *payload) {
    if (!payload)
        return;
    for (StateQueueNode7 *node=state_queue7->head;node;node=node->next) {
        for (StateWord055 i=0;i<2;i++) {
            StateQueueRecord7 *record=&node->records[i];
            if (record->payload!=payload)
                continue;
            if (state_queue7->tail==node) {
                unsigned char *bytes=(unsigned char *)state_apply_context055;
                bytes[0]|=1;
            }
            record->payload=0;
            record->words[0]=0;
            record->words[1]=0;
            record->words[2]=0;
        }
    }
}

static void initialize_resource_settings7(StateResourceSettings7 *settings) {
    settings->filters[0]=0x2600;
    settings->filters[1]=0x2600;
    settings->wraps[0]=0x2901;
    settings->wraps[1]=0x2901;
    settings->level=-1000;
}

StateSingleResource7 *state_single_resource_create7(StateWord055 region) {
    StateSingleResource7 *resource=allocate_resource7(sizeof(*resource));
    if (resource) {
        clear_resource7(resource,sizeof(*resource));
        initialize_resource_settings7(&resource->settings);
        resource->buffer.region=region;
    }
    return resource;
}

StateMultipleResource7 *state_multiple_resource_create7(StateWord055 region) {
    StateMultipleResource7 *resource=allocate_resource7(sizeof(*resource));
    if (resource) {
        clear_resource7(resource,sizeof(*resource));
        initialize_resource_settings7(&resource->settings);
        for (StateWord055 i=0;i<6;i++)
            resource->buffers[i].region=region;
    }
    return resource;
}

void state_resource_buffers_release7(StateWord055 kind,StateResourceBuffer7 *buffer) {
    _Bool both=kind==0x1020000 || kind==0x1030000;
    _Bool first=both || kind==0x2020000 || kind==0x2030000;
    _Bool second=both || kind==0x1010000;
    if (first && buffer->data && state_release_request7)
        state_release_request7(buffer->storage_flags,0x101,buffer->region,buffer->data);
    if (second && buffer->auxiliary && state_release_request7)
        state_release_request7(0x10000,0x101,buffer->region,buffer->auxiliary);
    buffer->data=0;
    buffer->auxiliary=0;
    buffer->state=0;
}

int state_resource_index_construct7(StateResourceIndex7 *index) {
    state_resource_index7=index;
    clear_resource7(index,sizeof(*index));
    state_resource_index7->single=state_single_resource_create7(0);
    state_resource_index7->multiple=state_multiple_resource_create7(0);
    StateResourceExtra7 *extra=allocate_resource7(sizeof(*extra));
    if (extra)
        clear_resource7(extra,sizeof(*extra));
    state_resource_index7->extra=extra;
    int status=-1;
    StateSingleResource7 *single=state_resource_index7->single;
    if (single && state_resource_index7->multiple && extra)
        status=0;
    else {
        if (single) {
            state_resource_invalidate7(&single->buffer);
            state_resource_buffers_release7(single->settings.kind,&single->buffer);
            release_resource7(single);
        }
        StateMultipleResource7 *multiple=state_resource_index7->multiple;
        if (multiple) {
            for (StateWord055 i=0;i<6;i++) {
                state_resource_invalidate7(&multiple->buffers[i]);
                state_resource_buffers_release7(multiple->settings.kind,&multiple->buffers[i]);
            }
            release_resource7(multiple);
        }
        if (state_resource_index7->extra) {
            if (!state_release_request7)
                goto final_clear;
            release_resource7(state_resource_index7->extra);
        }
        if (state_release_request7)
            release_resource7(state_resource_index7);
    }
final_clear:
    state_resource_initialized7=1;
    if (!state_resource_index7->extra)
        state_resource_invalid_zero7();
    clear_resource7(state_resource_index7->extra,sizeof(StateResourceExtra7));
    return status;
}
