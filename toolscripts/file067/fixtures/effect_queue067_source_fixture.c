#include "effect_request066_cache_fixture.c"
#include "../src/native/wave067-queue/file_queue.h"

typedef struct QueueWinApi067 {
    void *(*create_thread)(void *, __SIZE_TYPE__, unsigned int (*)(void *), void *, unsigned int, unsigned int *);
    unsigned int (*wait)(void *, unsigned int);
    int (*close)(void *);
    void *(*create_mutex)(void *, int, const unsigned short *);
    int (*release_mutex)(void *);
    void *(*create_event)(void *, int, int, const unsigned short *);
    int (*set_event)(void *);
    int (*reset_event)(void *);
    void (*sleep)(unsigned int);
    unsigned int (*thread_id)(void);
} QueueWinApi067;

typedef struct QueueFixture067 {
    unsigned int native;
    unsigned int creates;
    unsigned int joins;
    unsigned int closes;
    unsigned int locks;
    unsigned int unlocks;
    _Atomic(unsigned int) sleeps;
    unsigned int exited;
    unsigned int marker;
    unsigned long long nanoseconds;
    EffectQueueWorker067 *worker;
    void (*entry)(EffectQueueWorker067 *);
    const void *identity;
    unsigned int parent_identity;
    unsigned int worker_identity;
    QueueWinApi067 api;
    void *thread;
    void *mutex;
    void *start;
    void *paused;
    void *resume;
    unsigned int io_count;
    unsigned int io_events[64][10];
} QueueFixture067;

static QueueFixture067 queue_fixture067;

#include "effect_queue067_io_fixture.h"

__attribute__((noinline)) void effect_queue_fixture_yield067(void)
{
    ++queue_fixture067.marker;
}

__attribute__((noinline)) void effect_queue_fixture_join_yield067(void)
{
    ++queue_fixture067.marker;
}

static void *queue_fixture_allocate067(void *context, EffectQueueAllocation067 role, unsigned int logical, __SIZE_TYPE__ physical)
{
    if (context != &queue_fixture067)
        __builtin_trap();
    return graph_allocate065(0x670100u + role, logical, physical, 4, 0);
}

static void queue_fixture_release067(void *context, EffectQueueAllocation067 role, void *pointer,
                                     unsigned int logical, __SIZE_TYPE__ physical)
{
    QueueFixture067 *fixture = context;
    unsigned int slot = graph_slot065(pointer);
    EffectGraphAllocationFixture065 *record = graph_fixture065.records + slot;
    if (record->role != 0x670100u + role || record->logical_bytes != logical || record->physical_bytes != physical)
        __builtin_trap();
    if (role == EFFECT_QUEUE_WORKER067 && fixture->native) {
        if (!fixture->exited || fixture->thread != 0 || !fixture->api.close(fixture->mutex))
            __builtin_trap();
        fixture->mutex = 0;
    }
    graph_release065(pointer, 0, 0);
}

static const void *queue_fixture_identity067(QueueFixture067 *fixture)
{
    if (!fixture->native)
        return fixture->identity;
    unsigned int id = fixture->api.thread_id();
    if (id == fixture->parent_identity)
        return &fixture->parent_identity;
    if (id == fixture->worker_identity)
        return &fixture->worker_identity;
    __builtin_trap();
}

static void queue_fixture_mutex_initialize067(void *context, EffectQueueMutex067 *mutex)
{
    QueueFixture067 *fixture = context;
    mutex->kind = 1;
    mutex->owner = 0;
    mutex->depth = 0;
    if (fixture->native) {
        fixture->mutex = fixture->api.create_mutex(0, 0, 0);
        if (fixture->mutex == 0)
            __builtin_trap();
    }
}

static void queue_fixture_mutex_lock067(void *context, EffectQueueMutex067 *mutex)
{
    QueueFixture067 *fixture = context;
    if (fixture->native && fixture->api.wait(fixture->mutex, 0xffffffffu) != 0)
        __builtin_trap();
    const void *identity = queue_fixture_identity067(fixture);
    if (mutex->kind != 1 || (mutex->owner != 0 && mutex->owner != identity))
        __builtin_trap();
    mutex->owner = identity;
    ++mutex->depth;
    ++fixture->locks;
}

static void queue_fixture_mutex_unlock067(void *context, EffectQueueMutex067 *mutex)
{
    QueueFixture067 *fixture = context;
    if (mutex->owner != queue_fixture_identity067(fixture) || mutex->depth == 0)
        __builtin_trap();
    if (--mutex->depth == 0)
        mutex->owner = 0;
    ++fixture->unlocks;
    if (fixture->native && !fixture->api.release_mutex(fixture->mutex))
        __builtin_trap();
}

unsigned int effect_queue_fixture_thread_entry067(void *context)
{
    QueueFixture067 *fixture = context;
    if (fixture->native) {
        fixture->worker_identity = fixture->api.thread_id();
        if (!fixture->api.set_event(fixture->paused) || fixture->api.wait(fixture->start, 0xffffffffu) != 0)
            __builtin_trap();
    }
    fixture->identity = &fixture->worker_identity;
    fixture->entry(fixture->worker);
    fixture->exited = 1;
    return 0;
}

static int queue_fixture_thread_create067(void *context, EffectQueueWorker067 *worker,
    void (*entry)(EffectQueueWorker067 *), unsigned int stack_bytes, unsigned int priority, int processor)
{
    QueueFixture067 *fixture = context;
    if (fixture->creates || stack_bytes != 4096 || priority != 15 || processor != -2)
        __builtin_trap();
    ++fixture->creates;
    fixture->worker = worker;
    fixture->entry = entry;
    if (fixture->native) {
        fixture->start = fixture->api.create_event(0, 1, 0, 0);
        fixture->paused = fixture->api.create_event(0, 0, 0, 0);
        fixture->resume = fixture->api.create_event(0, 0, 0, 0);
        if (!fixture->start || !fixture->paused || !fixture->resume)
            __builtin_trap();
        fixture->thread = fixture->api.create_thread(0, 0, effect_queue_fixture_thread_entry067, fixture, 0, 0);
        if (fixture->thread == 0)
            __builtin_trap();
        if (fixture->api.wait(fixture->paused, 30000) != 0)
            __builtin_trap();
    }
    worker->thread_token = 0x6700400;
    worker->joined = 0;
    worker->thread_flag_05 = 0;
    return 0;
}

static int queue_fixture_thread_join067(void *context, EffectQueueWorker067 *worker)
{
    QueueFixture067 *fixture = context;
    if (worker != fixture->worker || worker->thread_token != 0x6700400)
        __builtin_trap();
    ++fixture->joins;
    if (fixture->native) {
        if (!fixture->api.set_event(fixture->start) || !fixture->api.set_event(fixture->resume)
            || fixture->api.wait(fixture->thread, 30000) != 0)
            __builtin_trap();
    } else {
        while (!fixture->exited)
            effect_queue_fixture_join_yield067();
    }
    return 0;
}

static void queue_fixture_thread_close067(void *context, EffectQueueWorker067 *worker)
{
    QueueFixture067 *fixture = context;
    if (worker != fixture->worker || !fixture->exited || worker->thread_token != 0x6700400)
        __builtin_trap();
    ++fixture->closes;
    if (fixture->native) {
        if (!fixture->api.close(fixture->thread) || !fixture->api.close(fixture->start)
            || !fixture->api.close(fixture->paused) || !fixture->api.close(fixture->resume))
            __builtin_trap();
        fixture->thread = 0;
    }
}

static void queue_fixture_sleep067(void *context, unsigned long long nanoseconds)
{
    QueueFixture067 *fixture = context;
    fixture->nanoseconds = nanoseconds;
    ++fixture->sleeps;
    if (fixture->native) {
        if (!fixture->api.set_event(fixture->paused) || fixture->api.wait(fixture->resume, 30000) != 0)
            __builtin_trap();
        if (nanoseconds > 0xffffffffu - 999999u)
            __builtin_trap();
        fixture->api.sleep(((unsigned int)nanoseconds + 999999u) / 1000000u);
    } else {
        effect_queue_fixture_yield067();
    }
}

static void queue_fixture_fatal067(void *context)
{
    (void)context;
    __builtin_trap();
}

static const EffectQueueServices067 queue_fixture_services067 = {
    &queue_fixture067, queue_fixture_allocate067, queue_fixture_release067,
    queue_fixture_mutex_initialize067, queue_fixture_mutex_lock067, queue_fixture_mutex_unlock067,
    queue_fixture_thread_create067, queue_fixture_thread_join067, queue_fixture_thread_close067,
    queue_fixture_sleep067, queue_fixture_fatal067
};

void effect_queue_fixture_initialize067(unsigned int native, const QueueWinApi067 *api)
{
    unsigned char *storage = (unsigned char *)&queue_fixture067;
    for (__SIZE_TYPE__ index = 0; index < sizeof(queue_fixture067); ++index)
        storage[index] = 0;
    queue_fixture067.native = native;
    queue_fixture067.identity = &queue_fixture067.parent_identity;
    if (native) {
        queue_fixture067.api = *api;
        queue_fixture067.parent_identity = api->thread_id();
    }
    effect_queue_bind067(&queue_fixture_services067);
}

EffectQueueManager067 *effect_queue_fixture_manager_allocate067(void)
{
    return effect_queue_allocate067(EFFECT_QUEUE_MANAGER067, 8, sizeof(EffectQueueManager067));
}

void *effect_queue_fixture_state067(void) { return &queue_fixture067; }

void effect_queue_fixture_context067(unsigned int worker)
{
    if (queue_fixture067.native)
        __builtin_trap();
    queue_fixture067.identity = worker ? &queue_fixture067.worker_identity : &queue_fixture067.parent_identity;
}

unsigned int effect_queue_fixture_native_step067(void)
{
    QueueFixture067 *fixture = &queue_fixture067;
    unsigned int already_paused = fixture->sleeps;
    if (!fixture->native || !fixture->api.set_event(fixture->start))
        __builtin_trap();
    if (already_paused && !fixture->api.set_event(fixture->resume))
        __builtin_trap();
    return fixture->api.wait(fixture->paused, 30000);
}

const unsigned int effect_queue_fixture_layout067[] = {
    sizeof(QueueFixture067), __builtin_offsetof(QueueFixture067, creates), __builtin_offsetof(QueueFixture067, joins),
    __builtin_offsetof(QueueFixture067, closes), __builtin_offsetof(QueueFixture067, locks), __builtin_offsetof(QueueFixture067, unlocks),
    __builtin_offsetof(QueueFixture067, sleeps), __builtin_offsetof(QueueFixture067, exited), __builtin_offsetof(QueueFixture067, nanoseconds),
    __builtin_offsetof(QueueFixture067, worker), __builtin_offsetof(QueueFixture067, entry), __builtin_offsetof(QueueFixture067, identity),
    __builtin_offsetof(QueueFixture067, io_count), __builtin_offsetof(QueueFixture067, io_events)
};

const unsigned int effect_queue_layout067[] = {
    sizeof(EffectQueueManager067), sizeof(EffectQueueWorker067), sizeof(EffectQueueStore067), sizeof(EffectQueueBlock067), sizeof(EffectQueueNode067),
    __builtin_offsetof(EffectQueueManager067, worker), __builtin_offsetof(EffectQueueWorker067, running),
    __builtin_offsetof(EffectQueueWorker067, mutex), __builtin_offsetof(EffectQueueWorker067, pending),
    __builtin_offsetof(EffectQueueWorker067, deferred), __builtin_offsetof(EffectQueueWorker067, current),
    __builtin_offsetof(EffectQueueWorker067, unknown_1024), __builtin_offsetof(EffectQueueStore067, count),
    __builtin_offsetof(EffectQueueBlock067, capacity), __builtin_offsetof(EffectQueueBlock067, nodes),
    __builtin_offsetof(EffectQueueMutex067, owner), __builtin_offsetof(EffectQueueMutex067, depth)
};
