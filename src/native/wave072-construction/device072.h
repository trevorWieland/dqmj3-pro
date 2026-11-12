#ifndef DQMJ3_DEVICE072_H
#define DQMJ3_DEVICE072_H

/* The system services this unit consumes; see platform/port/README.md. */
#include "../../../platform/port/file.h"
#include "../../../platform/port/memory.h"
#include "../../../platform/port/thread.h"
#include "../../../platform/port/system.h"

#include "device_pool_types072.h"

typedef struct EffectFileMessage072 {
    unsigned int words[13];
    const void *input[2];
    void *output;
} EffectFileMessage072;

typedef struct EffectFileServices072 {
    void *context;
    int (*send_sync)(void *context, unsigned int handle, EffectFileMessage072 *message);
    int (*close_handle)(void *context, unsigned int handle);
    void (*lock)(void *context, EffectQueueMutex067 *mutex);
    void (*unlock)(void *context, EffectQueueMutex067 *mutex);
    int (*once)(void *context, unsigned int *guard);
    void (*fatal)(void *context);
} EffectFileServices072;

typedef struct EffectFileConstruction072 {
    EffectFileDevicePool068 *device_pool;
    EffectFileStreamPool069 *stream_pool;
    EffectFileDevice068 *devices;
    EffectFileStream069 *streams;
    unsigned int device_slots;
    unsigned int device_guard;
    EffectQueueMutex067 guard_mutex;
    unsigned int service_ready;
    unsigned int service_handle;
    const EffectFileDeviceOperations068 *device_operations;
    const EffectFileStreamOperations069 *stream_operations;
    const void *pool_type;
    const void *embedded_type;
    const EffectFileServices072 *services;
    EffectFileSdk069 *destruction;
} EffectFileConstruction072;

void effect_file_atomic_initialize072(EffectQueueMutex067 *mutex);
int effect_file_mutex_initialize072(EffectQueueMutex067 *mutex);
void effect_file_pool_initialize072(EffectFilePool072 *pool, unsigned int entry_bytes, void *backing,
    unsigned int bytes, unsigned int alignment, unsigned int flags);
void *effect_file_pool_allocate072(EffectFileConstruction072 *state, EffectFilePool072 *pool);
EffectFileDevice068 *effect_file_device_allocate072(EffectFileConstruction072 *state);
EffectFileDevice068 *effect_file_device_construct072(EffectFileConstruction072 *state, EffectFileDevice068 *device);
int effect_file_stream_attach072(EffectFileConstruction072 *state, EffectFileDevice068 *device,
    EffectFileStream069 **output, unsigned int handle);
int effect_file_open_direct072(EffectFileConstruction072 *state, unsigned int *output, unsigned int archive,
    unsigned int archive_type, const void *archive_path, unsigned int archive_bytes,
    unsigned int file_type, const void *file_path, unsigned int file_bytes, unsigned int flags, unsigned int attributes);
int effect_file_read_ipc072(EffectFileConstruction072 *state, const unsigned int *handle,
    unsigned int *read_bytes, unsigned long long offset, void *output, unsigned int bytes);
int effect_file_stream_read072(EffectFileConstruction072 *state, EffectFileStream069 *stream,
    unsigned int *read_bytes, unsigned long long offset, void *output, unsigned int bytes);
unsigned int effect_file_cached_service072(EffectFileConstruction072 *state);
int effect_file_priority_ipc072(EffectFileConstruction072 *state, const unsigned int *handle, int *priority);
int effect_file_priority072(EffectFileConstruction072 *state, int *priority);
int effect_file_device_initialize072(EffectFileConstruction072 *state, EffectFileDevice068 *device,
    EffectFileStream069 *stream, unsigned int entries, unsigned int entry_bytes,
    void *workspace, unsigned int workspace_bytes, unsigned int copy_tables);
int effect_file_device_factory072(EffectFileConstruction072 *state, EffectFileDevice068 **output,
    unsigned int entries, unsigned int entry_bytes, void *workspace, unsigned int workspace_bytes,
    unsigned int copy_tables, const unsigned int selector[3]);

#endif
