#ifndef DQMJ3_FILE_DEVICE069_H
#define DQMJ3_FILE_DEVICE069_H

/* The system services this unit consumes; see platform/port/README.md. */
#include "../../../platform/port/file.h"
#include "../../../platform/port/memory.h"
#include "../../../platform/port/thread.h"
#include "../../../platform/port/system.h"

#include "../wave067-queue/file_queue.h"

typedef struct EffectFileDevice068 EffectFileDevice068;
typedef struct EffectFileSdk069 EffectFileSdk069;
typedef struct EffectFileStream069 EffectFileStream069;

typedef struct EffectFileDeviceOperations068 {
    void (*uninvoked[13])(void);
    void (*destroy)(EffectFileDevice068 *device);
} EffectFileDeviceOperations068;

typedef struct EffectFileStreamOperations069 {
    void (*uninvoked[12])(void);
    void (*release)(EffectFileSdk069 *state, EffectFileStream069 *stream);
    EffectFileStream069 *(*destroy)(EffectFileSdk069 *state, EffectFileStream069 *stream);
} EffectFileStreamOperations069;

struct EffectFileStream069 {
    union {
        const EffectFileStreamOperations069 *operations;
        EffectFileStream069 *next;
    } link;
    unsigned int handle;
};

typedef struct EffectFileLink069 {
    struct EffectFileLink069 *previous;
    struct EffectFileLink069 *next;
} EffectFileLink069;

typedef struct EffectFileEmbedded069 {
    const void *type;
    unsigned int unknown_04;
    unsigned int unknown_08;
    void *required_empty_0c;
    EffectFileLink069 *head;
    unsigned int unknown_14;
    unsigned int entry_bytes;
    void *backing;
    unsigned int capacity_bytes;
    void *borrowed_view;
    unsigned int width;
    unsigned int unknown_2c;
    unsigned int flags;
    unsigned int unknown_34;
    unsigned int unknown_38;
} EffectFileEmbedded069;

struct EffectFileDevice068 {
    union {
        const EffectFileDeviceOperations068 *operations;
        EffectFileDevice068 *next;
    } link;
    unsigned int unknown_04;
    void *owner;
    EffectFileStream069 *children[5];
    unsigned char unknown_20[152];
    EffectFileEmbedded069 embedded[2];
};

typedef struct EffectFileStreamPool069 {
    unsigned char unknown_00[36];
    EffectFileStream069 *free_streams;
    unsigned int unknown_28;
    unsigned int live_count;
    EffectQueueMutex067 mutex;
    unsigned int unknown_3c;
} EffectFileStreamPool069;

typedef struct EffectFileIpc069 {
    unsigned int header;
    int result;
} EffectFileIpc069;

typedef struct EffectFileSdkServices069 {
    void *context;
    int (*send_sync)(void *context, unsigned int handle, EffectFileIpc069 *message);
    int (*close_handle)(void *context, unsigned int handle);
    void (*lock)(void *context, EffectQueueMutex067 *mutex);
    void (*unlock)(void *context, EffectQueueMutex067 *mutex);
    void (*fatal)(void *context);
} EffectFileSdkServices069;

struct EffectFileSdk069 {
    EffectFileStreamPool069 *stream_pool;
    const EffectFileDeviceOperations068 *device_base_operations;
    const void *embedded_subtype;
    const void *embedded_base_type;
    EffectFileIpc069 *ipc;
    const EffectFileSdkServices069 *services;
    EffectFileEmbedded069 *(*embedded_destroy)(EffectFileSdk069 *state, EffectFileEmbedded069 *embedded);
};

EffectFileDevice068 *effect_file_sdk_device_destroy069(EffectFileSdk069 *state, EffectFileDevice068 *device);
void effect_file_sdk_stream_release069(EffectFileSdk069 *state, EffectFileStream069 *stream);
EffectFileStream069 *effect_file_sdk_stream_destroy069(EffectFileSdk069 *state, EffectFileStream069 *stream);
unsigned int effect_file_sdk_stream_handle069(EffectFileSdk069 *state, const EffectFileStream069 *stream);
EffectFileEmbedded069 *effect_file_sdk_embedded_destroy069(EffectFileSdk069 *state, EffectFileEmbedded069 *embedded);
int effect_file_sdk_file_close069(EffectFileSdk069 *state, const unsigned int *handle);

_Static_assert(sizeof(EffectFileDevice068) == (sizeof(void *) == 4 ? 304 : 392), "device logical and native storage");
_Static_assert(sizeof(EffectFileStream069) == (sizeof(void *) == 4 ? 8 : 16), "stream logical and native storage");
_Static_assert(sizeof(EffectFileEmbedded069) == (sizeof(void *) == 4 ? 60 : 88), "embedded logical and native storage");
_Static_assert(__builtin_offsetof(EffectFileDevice068, embedded) == (sizeof(void *) == 4 ? 184 : 216), "first embedded descriptor");
_Static_assert(__builtin_offsetof(EffectFileEmbedded069, borrowed_view) == (sizeof(void *) == 4 ? 36 : 56), "borrowed descriptor view");
_Static_assert(__builtin_offsetof(EffectFileStreamOperations069, release) == 12 * sizeof(void *), "stream release slot");

#endif
