#ifndef DQMJ3_FILE_QUEUE067_H
#define DQMJ3_FILE_QUEUE067_H

/* The system services this unit consumes; see platform/port/README.md. */
#include "../../../platform/port/memory.h"
#include "../../../platform/port/thread.h"
#include "../../../platform/port/time.h"
#include "../../../platform/port/system.h"

#include "../wave066-request/request.h"

typedef struct EffectQueueNode067 EffectQueueNode067;
typedef struct EffectQueueBlock067 EffectQueueBlock067;
typedef struct EffectQueueWorker067 EffectQueueWorker067;
typedef struct EffectQueueManager067 EffectQueueManager067;

struct EffectQueueNode067 {
    EffectQueueNode067 *next;
    EffectQueueNode067 *previous;
    EffectRequestTask066 *task;
};

struct EffectQueueBlock067 {
    EffectQueueBlock067 *previous;
    unsigned int capacity;
    EffectQueueNode067 *nodes;
};

typedef struct EffectQueueStore067 {
    EffectQueueBlock067 *blocks;
    EffectQueueNode067 *free_nodes;
    EffectQueueNode067 *unused_begin;
    EffectQueueNode067 *unused_end;
    EffectQueueNode067 *sentinel;
    unsigned int count;
} EffectQueueStore067;

typedef struct EffectQueueMutex067 {
    unsigned int kind;
    const void *owner;
    unsigned int depth;
} EffectQueueMutex067;

struct EffectQueueWorker067 {
    unsigned int thread_token;
    unsigned char joined;
    unsigned char thread_flag_05;
    unsigned char unknown_0006[2];
    unsigned char platform_stack[4096];
    _Atomic(unsigned char) running;
    unsigned char unknown_1009[3];
    EffectQueueMutex067 mutex;
    EffectQueueStore067 *pending;
    EffectRequestTask066 *deferred;
    _Atomic(EffectRequestTask066 *) current;
    unsigned int unknown_1024;
};

typedef struct EffectQueueManagerOperations067 {
    void (*uninvoked_0)(void);
    void (*destroy)(EffectQueueManager067 *manager);
} EffectQueueManagerOperations067;

struct EffectQueueManager067 {
    const EffectQueueManagerOperations067 *operations;
    EffectQueueWorker067 *worker;
};

typedef enum EffectQueueAllocation067 {
    EFFECT_QUEUE_MANAGER067,
    EFFECT_QUEUE_WORKER067,
    EFFECT_QUEUE_STORE067,
    EFFECT_QUEUE_BLOCK067,
    EFFECT_QUEUE_NODES067
} EffectQueueAllocation067;

typedef struct EffectQueueServices067 {
    void *context;
    void *(*allocate)(void *context, EffectQueueAllocation067 role, unsigned int logical_bytes, __SIZE_TYPE__ native_bytes);
    void (*release)(void *context, EffectQueueAllocation067 role, void *pointer, unsigned int logical_bytes, __SIZE_TYPE__ native_bytes);
    void (*mutex_initialize)(void *context, EffectQueueMutex067 *mutex);
    void (*mutex_lock)(void *context, EffectQueueMutex067 *mutex);
    void (*mutex_unlock)(void *context, EffectQueueMutex067 *mutex);
    int (*thread_create)(void *context, EffectQueueWorker067 *worker, void (*entry)(EffectQueueWorker067 *), unsigned int logical_stack_bytes,
        unsigned int logical_priority, int processor);
    int (*thread_join)(void *context, EffectQueueWorker067 *worker);
    void (*thread_close)(void *context, EffectQueueWorker067 *worker);
    void (*sleep)(void *context, unsigned long long nanoseconds);
    void (*fatal_error)(void *context);
} EffectQueueServices067;

int effect_queue_bind067(const EffectQueueServices067 *services);
const EffectQueueServices067 *effect_queue_services067(void);
void *effect_queue_allocate067(EffectQueueAllocation067 role, unsigned int logical_bytes, __SIZE_TYPE__ native_bytes);
void effect_queue_release067(EffectQueueAllocation067 role, void *pointer, unsigned int logical_bytes, __SIZE_TYPE__ native_bytes);
EffectQueueStore067 *effect_queue_store_create067(void);
void effect_queue_store_clear067(EffectQueueStore067 **store);
void effect_queue_push067(EffectQueueWorker067 *worker, EffectRequestTask066 *task);
void effect_queue_worker_run067(EffectQueueWorker067 *worker);
EffectQueueWorker067 *effect_queue_worker_finalize067(EffectQueueWorker067 *worker);
EffectQueueManager067 *effect_queue_manager_construct067(EffectQueueManager067 *manager);
void effect_queue_manager_destroy067(EffectQueueManager067 *manager);
EffectRequestTask066 *effect_queue_request_async067(EffectQueueManager067 *manager, const unsigned short *path,
    unsigned int source_selector, EffectRequestHeap066 *heap, unsigned int alignment);
extern const EffectQueueManagerOperations067 effect_queue_manager_operations067;

_Static_assert(sizeof(EffectQueueNode067) == 3 * sizeof(void *), "typed queue node");
_Static_assert(sizeof(EffectQueueBlock067) == (sizeof(void *) == 4 ? 12 : 24), "typed queue block");
_Static_assert(sizeof(EffectQueueStore067) == (sizeof(void *) == 4 ? 24 : 48), "typed queue store");
_Static_assert(sizeof(EffectQueueWorker067) == (sizeof(void *) == 4 ? 4136 : 4168), "worker logical and native storage");
_Static_assert(sizeof(EffectQueueManager067) == 2 * sizeof(void *), "manager pointer ownership");

#endif
