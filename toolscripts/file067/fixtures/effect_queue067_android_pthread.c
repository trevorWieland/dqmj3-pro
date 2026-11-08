#include <pthread.h>
#include <time.h>
#include "effect_queue067_android_api.h"

typedef struct QueueAndroidHandle067 {
    unsigned int kind;
    unsigned int signaled;
    unsigned int manual;
    unsigned int joined;
    pthread_t thread;
    pthread_mutex_t mutex;
    pthread_cond_t condition;
    unsigned int (*entry)(void *);
    void *argument;
} QueueAndroidHandle067;

static QueueAndroidHandle067 handles067[8];
static __SIZE_TYPE__ stack_bytes067;

static QueueAndroidHandle067 *take_handle067(unsigned int kind)
{
    for (unsigned int index = 0; index < 8; ++index) {
        QueueAndroidHandle067 *handle = handles067 + index;
        if (handle->kind == 0) {
            unsigned char *bytes = (unsigned char *)handle;
            for (__SIZE_TYPE__ offset = 0; offset < sizeof(*handle); ++offset)
                bytes[offset] = 0;
            handle->kind = kind;
            return handle;
        }
    }
    __builtin_trap();
}

static QueueAndroidHandle067 *checked_handle067(void *pointer)
{
    for (unsigned int index = 0; index < 8; ++index)
        if (pointer == handles067 + index && handles067[index].kind != 0)
            return handles067 + index;
    __builtin_trap();
}

static void *android_thread_entry067(void *argument)
{
    QueueAndroidHandle067 *handle = checked_handle067(argument);
    if (handle->kind != 1)
        __builtin_trap();
    pthread_attr_t properties;
    if (pthread_getattr_np(pthread_self(), &properties) || pthread_attr_getstacksize(&properties, &stack_bytes067)
        || pthread_attr_destroy(&properties) || stack_bytes067 < PTHREAD_STACK_MIN)
        __builtin_trap();
    unsigned int result = handle->entry(handle->argument);
    if (pthread_mutex_lock(&handle->mutex))
        __builtin_trap();
    handle->signaled = 1;
    if (pthread_cond_broadcast(&handle->condition) || pthread_mutex_unlock(&handle->mutex))
        __builtin_trap();
    return (void *)(__UINTPTR_TYPE__)result;
}

static void *android_create_thread067(void *attributes, __SIZE_TYPE__ bytes, unsigned int (*entry)(void *),
    void *argument, unsigned int flags, unsigned int *identity)
{
    if (attributes != 0 || bytes != 0 || flags != 0 || identity != 0 || entry == 0)
        __builtin_trap();
    QueueAndroidHandle067 *handle = take_handle067(1);
    handle->entry = entry;
    handle->argument = argument;
    handle->manual = 1;
    if (pthread_mutex_init(&handle->mutex, 0) || pthread_cond_init(&handle->condition, 0))
        __builtin_trap();
    if (pthread_create(&handle->thread, 0, android_thread_entry067, handle) != 0) {
        if (pthread_cond_destroy(&handle->condition) || pthread_mutex_destroy(&handle->mutex))
            __builtin_trap();
        handle->kind = 0;
        return 0;
    }
    return handle;
}

static unsigned int android_wait067(void *pointer, unsigned int milliseconds)
{
    QueueAndroidHandle067 *handle = checked_handle067(pointer);
    if (handle->kind == 2)
        return pthread_mutex_lock(&handle->mutex) == 0 ? 0 : 0xffffffffu;
    if ((handle->kind != 3 && handle->kind != 1) || (handle->kind == 1 && handle->joined)
        || pthread_mutex_lock(&handle->mutex) != 0)
        __builtin_trap();
    struct timespec deadline;
    if (milliseconds != 0xffffffffu) {
        if (clock_gettime(CLOCK_REALTIME, &deadline) != 0)
            __builtin_trap();
        deadline.tv_sec += milliseconds / 1000u;
        deadline.tv_nsec += (long)(milliseconds % 1000u) * 1000000;
        if (deadline.tv_nsec >= 1000000000) {
            ++deadline.tv_sec;
            deadline.tv_nsec -= 1000000000;
        }
    }
    int status = 0;
    while (!handle->signaled && status == 0)
        status = milliseconds == 0xffffffffu ? pthread_cond_wait(&handle->condition, &handle->mutex)
            : pthread_cond_timedwait(&handle->condition, &handle->mutex, &deadline);
    if (status == 0 && !handle->manual)
        handle->signaled = 0;
    if (pthread_mutex_unlock(&handle->mutex) != 0)
        __builtin_trap();
    if (status == 0 && handle->kind == 1) {
        if (pthread_join(handle->thread, 0) != 0)
            __builtin_trap();
        handle->joined = 1;
    }
    return status == 0 ? 0 : 0xffffffffu;
}

static int android_close067(void *pointer)
{
    QueueAndroidHandle067 *handle = checked_handle067(pointer);
    if (handle->kind == 1 && !handle->joined)
        __builtin_trap();
    if (handle->kind != 2 && pthread_cond_destroy(&handle->condition) != 0)
        __builtin_trap();
    if (pthread_mutex_destroy(&handle->mutex) != 0)
        __builtin_trap();
    handle->kind = 0;
    return 1;
}

static void *android_create_mutex067(void *attributes, int owned, const unsigned short *name)
{
    if (attributes || owned || name)
        __builtin_trap();
    QueueAndroidHandle067 *handle = take_handle067(2);
    pthread_mutexattr_t properties;
    if (pthread_mutexattr_init(&properties) || pthread_mutexattr_settype(&properties, PTHREAD_MUTEX_RECURSIVE)
        || pthread_mutex_init(&handle->mutex, &properties) || pthread_mutexattr_destroy(&properties))
        __builtin_trap();
    return handle;
}

static int android_release_mutex067(void *pointer)
{
    QueueAndroidHandle067 *handle = checked_handle067(pointer);
    return handle->kind == 2 && pthread_mutex_unlock(&handle->mutex) == 0;
}

static void *android_create_event067(void *attributes, int manual, int state, const unsigned short *name)
{
    if (attributes || name || (manual != 0 && manual != 1) || (state != 0 && state != 1))
        __builtin_trap();
    QueueAndroidHandle067 *handle = take_handle067(3);
    handle->manual = (unsigned int)manual;
    handle->signaled = (unsigned int)state;
    if (pthread_mutex_init(&handle->mutex, 0) || pthread_cond_init(&handle->condition, 0))
        __builtin_trap();
    return handle;
}

static int android_set_event067(void *pointer)
{
    QueueAndroidHandle067 *handle = checked_handle067(pointer);
    if (handle->kind != 3 || pthread_mutex_lock(&handle->mutex))
        __builtin_trap();
    handle->signaled = 1;
    if (pthread_cond_broadcast(&handle->condition) || pthread_mutex_unlock(&handle->mutex))
        __builtin_trap();
    return 1;
}

static int android_reset_event067(void *pointer)
{
    QueueAndroidHandle067 *handle = checked_handle067(pointer);
    if (handle->kind != 3 || pthread_mutex_lock(&handle->mutex))
        __builtin_trap();
    handle->signaled = 0;
    if (pthread_mutex_unlock(&handle->mutex))
        __builtin_trap();
    return 1;
}

static void android_sleep067(unsigned int milliseconds)
{
    struct timespec duration = {(long)(milliseconds / 1000u), (long)(milliseconds % 1000u) * 1000000};
    if (nanosleep(&duration, 0) != 0)
        __builtin_trap();
}

static unsigned int android_thread_id067(void)
{
    int identity = pthread_gettid_np(pthread_self());
    if (identity <= 0)
        __builtin_trap();
    return (unsigned int)identity;
}

static const QueueWinApi067 android_api067 = {
    android_create_thread067, android_wait067, android_close067, android_create_mutex067, android_release_mutex067,
    android_create_event067, android_set_event067, android_reset_event067, android_sleep067, android_thread_id067
};

const QueueWinApi067 *effect_queue_android_api067(void) { return &android_api067; }

unsigned int effect_queue_android_live_handles067(void)
{
    unsigned int live = 0;
    for (unsigned int index = 0; index < 8; ++index)
        live += handles067[index].kind != 0;
    return live;
}

int effect_queue_android_reset067(void) { return effect_queue_android_live_handles067() == 0; }
__SIZE_TYPE__ effect_queue_android_stack067(void) { return stack_bytes067; }

_Static_assert(sizeof(pthread_mutex_t) == 40, "official bionic LP64 mutex type");
_Static_assert(sizeof(pthread_cond_t) == 48, "official bionic LP64 condition type");
_Static_assert(sizeof(pthread_t) == 8, "official bionic LP64 thread identity");
