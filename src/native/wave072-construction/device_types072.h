#ifndef DQMJ3_FILE_DEVICE072_TYPES_H
#define DQMJ3_FILE_DEVICE072_TYPES_H

/* The system services this unit consumes; see platform/port/README.md. */
#include "../../../platform/port/file.h"
#include "../../../platform/port/memory.h"
#include "../../../platform/port/thread.h"
#include "../../../platform/port/system.h"

#ifdef DQMJ3_FILE_DEVICE069_H
#error incompatible_device_models
#endif

#include "../wave067-queue/file_queue.h"

typedef struct EffectFileDevice068 EffectFileDevice068;
typedef struct EffectFileSdk069 EffectFileSdk069;
typedef struct EffectFileStream069 EffectFileStream069;

typedef struct EffectFileDeviceOperations068 {
    void (*uninvoked[12])(void);
    void (*release)(EffectFileDevice068 *device);
    void (*destroy)(EffectFileDevice068 *device);
    void (*uninvoked_14)(void);
    int (*attach)(EffectFileDevice068 *device, EffectFileStream069 **output, unsigned int handle);
} EffectFileDeviceOperations068;

typedef struct EffectFileStreamOperations069 {
    int (*read)(EffectFileStream069 *stream, unsigned int *read_bytes, unsigned long long offset, void *output, unsigned int bytes);
    void (*uninvoked[11])(void);
    void (*release)(EffectFileSdk069 *state, EffectFileStream069 *stream);
    EffectFileStream069 *(*destroy)(EffectFileSdk069 *state, EffectFileStream069 *stream);
} EffectFileStreamOperations069;

struct EffectFileStream069 {
    union { const EffectFileStreamOperations069 *operations; EffectFileStream069 *next; } link;
    unsigned int handle;
};

typedef struct EffectFileLink069 {
    struct EffectFileLink069 *previous;
    struct EffectFileLink069 *next;
} EffectFileLink069;

typedef struct EffectFilePool072 {
    const void *type;
    unsigned int unknown_04;
    unsigned int unknown_08;
    void *required_empty_0c;
    EffectFileLink069 *head;
    union { unsigned int unknown_14; unsigned int header_flags; };
    unsigned int entry_bytes;
    void *backing;
    unsigned int capacity_bytes;
    union {
        void *free_nodes;
        void *borrowed_view;
        EffectFileDevice068 *free_devices;
        EffectFileStream069 *free_streams;
    };
    union { unsigned int width; unsigned int alignment; unsigned int unknown_28; };
    union { unsigned int unknown_2c; unsigned int live_count; };
    EffectQueueMutex067 mutex;
} EffectFilePool072;

typedef EffectFilePool072 EffectFileEmbedded069;
typedef EffectFilePool072 EffectFileStreamPool069;

typedef struct EffectFileView072 {
    void *memory;
    unsigned int bytes;
    EffectFileDevice068 *reader;
    union { EffectFileDevice068 *owner; unsigned int offset; } position;
} EffectFileView072;

typedef struct EffectFileCache072 {
    unsigned int first;
    unsigned int second;
    unsigned int capacity;
    EffectFileView072 *view;
} EffectFileCache072;

typedef struct EffectFileInterior072 {
    EffectFileCache072 directory[2];
    unsigned int directory_state[2];
    EffectFileCache072 files[2];
    unsigned int file_state[2];
    EffectFileView072 views[4];
    unsigned int data_offset;
    unsigned int unknown_b4;
} EffectFileInterior072;

struct EffectFileDevice068 {
    union { const EffectFileDeviceOperations068 *operations; EffectFileDevice068 *next; } link;
    unsigned int unknown_04;
    void *owner;
    EffectFileStream069 *children[5];
    union { EffectFileInterior072 interior; unsigned char unknown_20[sizeof(EffectFileInterior072)]; };
    EffectFileEmbedded069 embedded[2];
};

typedef struct EffectFileIpc069 { unsigned int header; int result; } EffectFileIpc069;

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

_Static_assert(sizeof(EffectFileDevice068) == (sizeof(void *) == 4 ? 304 : 504), "typed device logical and native storage");
_Static_assert(sizeof(EffectFileStream069) == (sizeof(void *) == 4 ? 8 : 16), "stream storage");
_Static_assert(sizeof(EffectFilePool072) == (sizeof(void *) == 4 ? 60 : 96), "pool storage");
_Static_assert(sizeof(EffectFileInterior072) == (sizeof(void *) == 4 ? 152 : 248), "typed interior");
_Static_assert(__builtin_offsetof(EffectFileDevice068, embedded) == (sizeof(void *) == 4 ? 184 : 312), "embedded offset");
_Static_assert(__builtin_offsetof(EffectFilePool072, free_nodes) == (sizeof(void *) == 4 ? 36 : 56), "free head");
_Static_assert(__builtin_offsetof(EffectFilePool072, live_count) == (sizeof(void *) == 4 ? 44 : 68), "live count");
_Static_assert(__builtin_offsetof(EffectFilePool072, mutex) == (sizeof(void *) == 4 ? 48 : 72), "pool mutex");
_Static_assert(__builtin_offsetof(EffectFileStreamOperations069, release) == 12 * sizeof(void *), "stream release slot");
_Static_assert(__builtin_offsetof(EffectFileDeviceOperations068, destroy) == 13 * sizeof(void *), "device destructor slot");

#endif
