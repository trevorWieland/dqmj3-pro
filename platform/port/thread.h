#ifndef DQMJ3_PLATFORM_THREAD_H
#define DQMJ3_PLATFORM_THREAD_H

/*
 * Threads, mutexes and thread-local storage.
 *
 * The original is a single process with a small set of threads: the main
 * thread, the file-loading worker, the audio worker and the graphics worker.
 * The reconstructed file queue creates one worker with a 4,096-byte stack and
 * priority 15; the SDK task/clock code uses recursive mutexes. A port does not
 * need to reproduce the ARM exception model, but it does need the semantics
 * below, because game code relies on them for ownership and wakeups.
 *
 * Mutexes are recursive. Locking a mutex the calling thread already owns
 * increments a depth counter and returns DQM3_OK. Unlocking decrements it; the
 * last unlock releases ownership and wakes one waiter. Unlocking a mutex the
 * caller does not own is DQM3_ERR_INVALID. destroy requires depth zero.
 *
 * A mutex has no priority inheritance promise. The original SDK implements
 * one, but no reconstructed function depends on it; a backend may add it.
 *
 * The address arbiter is the primitive under condition variables: wait
 * suspends the calling thread until the 32-bit word at address is no longer
 * equal to value, until wake is called for that address, or until the timeout
 * expires. A wake does not guarantee the waiter observes its new condition;
 * the original's wait loop re-checks the word, and a backend must preserve
 * that possibility by allowing spurious wakeups. wake(count) wakes at most
 * count waiters, or all when count is DQM3_ARBITER_ALL.
 *
 * Threading: all functions are safe from any thread. A thread handle is owned
 * by the creating thread until it is joined or closed. A Dqm3Mutex,
 * Dqm3Semaphore and Dqm3Event may be used from any thread after initialisation
 * and before destruction; their storage belongs to the caller and is never
 * moved.
 *
 * Timing: lock, wait and join block. None of them may be called from an audio
 * or graphics interrupt callback. A timeout of DQM3_TIME_NEVER waits forever;
 * a zero timeout polls. A timed-out lock/wait returns DQM3_ERR_TIMEOUT with no
 * ownership change.
 */

#include "platform.h"

typedef struct Dqm3Thread Dqm3Thread;

/*
 * The caller owns the storage of these objects. The byte counts below are the
 * minimum the interface guarantees; a backend that needs more must not change
 * them. Keeping them as byte arrays means a header include never fixes a
 * layout the original object does not have.
 */
#define DQM3_MUTEX_STORAGE_BYTES 64u
#define DQM3_SEMAPHORE_STORAGE_BYTES 64u
#define DQM3_EVENT_STORAGE_BYTES 64u

typedef struct Dqm3Mutex { unsigned int opaque[DQM3_MUTEX_STORAGE_BYTES / 4u]; } Dqm3Mutex;
typedef struct Dqm3Semaphore { unsigned int opaque[DQM3_SEMAPHORE_STORAGE_BYTES / 4u]; } Dqm3Semaphore;
typedef struct Dqm3Event { unsigned int opaque[DQM3_EVENT_STORAGE_BYTES / 4u]; } Dqm3Event;

#define DQM3_ARBITER_ALL 0x7fffffffu
#define DQM3_THREAD_ANY_PROCESSOR (-2)
#define DQM3_THREAD_PRIORITY_DEFAULT 0x1fu

typedef void (*Dqm3ThreadEntry)(void *context);

typedef struct Dqm3ThreadAttributes {
    Dqm3ThreadEntry entry;
    void *context;
    Dqm3Size stack_bytes;   /* zero means the backend's default (64 KiB)      */
    Dqm3S32 priority;       /* 0 highest through 63 lowest; default 0x1f      */
    Dqm3S32 processor;      /* 0..3, or DQM3_THREAD_ANY_PROCESSOR             */
    const char *name;       /* debug only; may be NULL                        */
} Dqm3ThreadAttributes;

/*
 * Create a thread. On success *thread receives the handle and the thread may
 * already be running; on failure *thread is NULL. The entry function must not
 * return before the backend records its completion; returning ends the thread
 * and makes a later join succeed.
 */
Dqm3Result dqm3_thread_create(const Dqm3ThreadAttributes *attributes,
    Dqm3Thread **thread);

/*
 * Wait for a thread to finish. timeout DQM3_TIME_NEVER waits forever. On
 * success *exit_code receives the value the entry returned through
 * dqm3_thread_exit (zero if it simply returned). A thread may be joined once;
 * a second join is DQM3_ERR_INVALID. Closing a joinable thread without joining
 * leaks its resources in most backends.
 */
Dqm3Result dqm3_thread_join(Dqm3Thread *thread, Dqm3Time timeout, Dqm3S32 *exit_code);

/* Release a finished or detached thread handle. Does not stop a running thread. */
Dqm3Result dqm3_thread_close(Dqm3Thread *thread);

/* End the calling thread. Does not return. */
void dqm3_thread_exit(Dqm3S32 exit_code);

/* The handle of the calling thread; NULL if the backend has no such object. */
Dqm3Thread *dqm3_thread_current(void);

/* Stable identity of the calling thread/process, valid for their lifetime. */
Dqm3U32 dqm3_thread_id(void);
Dqm3U32 dqm3_process_id(void);

/* Give up the rest of the calling thread's time slice. */
void dqm3_thread_yield(void);

/*
 * Initialise a mutex in caller storage. flags is reserved and must be zero.
 * The storage must stay alive and 8-byte aligned until destroy. Initialising
 * an already-initialised mutex is DQM3_ERR_INVALID.
 */
Dqm3Result dqm3_thread_mutex_init(Dqm3Mutex *mutex, Dqm3U32 flags);
Dqm3Result dqm3_thread_mutex_destroy(Dqm3Mutex *mutex);
Dqm3Result dqm3_thread_mutex_lock(Dqm3Mutex *mutex);
Dqm3Result dqm3_thread_mutex_try_lock(Dqm3Mutex *mutex);
Dqm3Result dqm3_thread_mutex_unlock(Dqm3Mutex *mutex);

/* Counting semaphore: initial_count is the starting value, max_count its cap. */
Dqm3Result dqm3_thread_semaphore_init(Dqm3Semaphore *semaphore,
    Dqm3U32 initial_count, Dqm3U32 max_count);
Dqm3Result dqm3_thread_semaphore_wait(Dqm3Semaphore *semaphore, Dqm3Time timeout);
Dqm3Result dqm3_thread_semaphore_signal(Dqm3Semaphore *semaphore, Dqm3U32 count);
Dqm3Result dqm3_thread_semaphore_destroy(Dqm3Semaphore *semaphore);

/* Auto-reset event unless DQM3_EVENT_MANUAL_RESET is set. */
enum Dqm3EventFlags { DQM3_EVENT_MANUAL_RESET = 1u << 0 };

Dqm3Result dqm3_thread_event_init(Dqm3Event *event, Dqm3Bool initial_state,
    Dqm3U32 flags);
Dqm3Result dqm3_thread_event_wait(Dqm3Event *event, Dqm3Time timeout);
Dqm3Result dqm3_thread_event_signal(Dqm3Event *event);
Dqm3Result dqm3_thread_event_clear(Dqm3Event *event);
Dqm3Result dqm3_thread_event_destroy(Dqm3Event *event);

/*
 * Address arbiter. address must be 4-byte aligned and remain valid while any
 * waiter is parked on it. wait compares *address with value and parks if they
 * are equal; it returns DQM3_OK on a wake, DQM3_ERR_TIMEOUT on expiry, and
 * DQM3_ERR_INVALID if the address is misaligned. Spurious returns are
 * permitted; callers loop. wake returns the number of waiters woken and is
 * callable from any thread, including one that never waited.
 */
Dqm3Result dqm3_thread_arbiter_wait(volatile Dqm3S32 *address, Dqm3S32 value,
    Dqm3Time timeout);
Dqm3U32 dqm3_thread_arbiter_wake(volatile Dqm3S32 *address, Dqm3U32 count);

/*
 * Thread-local storage for the game's own use. dqm3_thread_tls_get returns the
 * value set by the calling thread, or NULL. The slot holds one pointer per
 * thread; the backend owns the storage until thread exit.
 */
Dqm3Result dqm3_thread_tls_set(void *value);
void *dqm3_thread_tls_get(void);

/*
 * Original-image backend.
 *
 * The two mutex operations below are the only thread services whose split
 * address and calling convention have been verified against the original
 * disassembly: 0x00170704 reads the owner at +4 and the recursion depth at +8,
 * arbitrates through 0x0014ddec and wakes through 0x00147e54; 0x001707b4 is
 * its release. The macro is an alias, so a call compiles to exactly the
 * original `bl 0x00170704`; no gate and no wrapper. The storage must be the
 * original 12-byte mutex layout when this block is active, not the portable
 * 64-byte Dqm3Mutex; that is a property of the original backend, not of the
 * interface.
 */
#if defined(DQMJ3_PLATFORM_BACKEND_ORIGINAL)
void fn_00170704(void *mutex);
void fn_001707b4(void *mutex);
#define dqm3_thread_mutex_lock(mutex) fn_00170704((void *)(mutex))
#define dqm3_thread_mutex_unlock(mutex) fn_001707b4((void *)(mutex))
#endif

#endif
