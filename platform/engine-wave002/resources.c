#include "engine.h"
#include "../../src/native/wave005/vm_views.h"

typedef struct { char path[64]; int handle; int state; } Resource;
static Resource resources[8];
static VmObject jobs[8];
static VmStackView queue;
static unsigned int next_handle;

static Resource *lookup(int handle) {
    int i;
    for (i = 0; i < 8; ++i) if (resources[i].handle == handle && handle > 0) return &resources[i];
    return (Resource *)0;
}

static int path_valid(const char *path) {
    int i = 0, segment = 0;
    if (!path || !path[0] || path[0] == '/') return 0;
    while (i < 64 && path[i]) {
        char c = path[i];
        if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') ||
              c == '/' || c == '_' || c == '-' || c == '.')) return 0;
        if (c == '/') {
            if (!segment || (segment == 1 && path[i - 1] == '.') ||
                (segment == 2 && path[i - 1] == '.' && path[i - 2] == '.')) return 0;
            segment = 0;
        } else ++segment;
        ++i;
    }
    return i < 64 && segment > 0 && !(segment == 1 && path[i - 1] == '.') &&
        !(segment == 2 && path[i - 1] == '.' && path[i - 2] == '.');
}

void engine_resources_reset(void) {
    int i;
    for (i = 0; i < 8; ++i) { resources[i].handle = resources[i].state = 0; resources[i].path[0] = 0; }
    queue.stack = jobs;
    queue.top = queue.base = 0;
}

void engine_resources_pause(void) {
    int i;
    for (i = 0; i < 8; ++i) if (resources[i].state == 1 || resources[i].state == 2) resources[i].state = 5;
    queue.top = queue.base = 0;
}

int engine_resources_pending(void) { return fn_00157ff4(&queue); }

int engine_request(const char *path) {
    int i, slot = -1;
    Resource *resource;
    VmObject *job;
    if (!path_valid(path) || queue.top >= 8 || next_handle >= 0x7fffffff) return 0;
    for (i = 0; i < 8; ++i) if (resources[i].state != 1 && resources[i].state != 2) { slot = i; break; }
    if (slot < 0) return 0;
    resource = &resources[slot];
    for (i = 0; path[i]; ++i) resource->path[i] = path[i];
    resource->path[i] = 0;
    resource->handle = (int)++next_handle;
    resource->state = 1;
    job = fn_00173d40(&queue, queue.top++);
    job->type = 1;
    job->value.integer = resource->handle;
    return resource->handle;
}

int engine_claim(void) {
    while (fn_00157ff4(&queue) > 0) {
        VmObject *job = fn_00173d40(&queue, --queue.top);
        Resource *resource = lookup(job->value.integer);
        if (resource && resource->state == 1) { resource->state = 2; return resource->handle; }
    }
    return 0;
}

const char *engine_path(int handle) {
    Resource *resource = lookup(handle);
    return resource ? resource->path : (const char *)0;
}

int engine_complete(int handle, const EngineByte *data, int size) {
    Resource *resource = lookup(handle);
    if (!resource || resource->state != 2) return 0;
    if (!engine_scene_load(data, size)) { resource->state = 4; return -1; }
    resource->state = 3;
    return 1;
}

int engine_resource_status(int handle) {
    Resource *resource = lookup(handle);
    return resource ? resource->state : 0;
}
