#ifndef DQMJ3_PLATFORM_TIME_H
#define DQMJ3_PLATFORM_TIME_H

/*
 * Monotonic time and sleeping.
 *
 * The game measures elapsed time for animation, the wait counter, task
 * scheduling and the file layer's retry loops. It never needs the user's
 * calendar. This interface therefore exposes one monotonic clock, whose zero
 * is unspecified (normally boot or process start) and which never runs
 * backwards. A backend must not implement it with a wall clock that a user or
 * a network time update can move.
 *
 * Resolution is backend-defined but must be at least 1 microsecond and the
 * reported frequency must be constant for the life of the process. The
 * original tick runs at 268,111,856 Hz; Dqm3Time is nanoseconds so the game
 * can keep its arithmetic and a backend can convert at the edge.
 *
 * Sleep is a request, not a guarantee. The thread is not runnable for at
 * least the requested duration, but the scheduler may return later; a backend
 * may also return early when a signal or debugger interrupts the wait. Game
 * code that needs a deadline compares timestamps, as the original does.
 *
 * Threading: every function is callable from any thread. sleep and wait are
 * the only blocking calls and must not be used in an audio or graphics
 * interrupt callback.
 */

#include "platform.h"

/*
 * Nanoseconds since the monotonic clock's zero. Monotonic and non-decreasing;
 * wraps only after 584 years.
 */
Dqm3Time dqm3_time_now(void);

/*
 * The clock's resolution in nanoseconds. A backend that cannot report one
 * returns 1000 (one microsecond). Callers may use it to round deadlines.
 */
Dqm3U64 dqm3_time_resolution(void);

/*
 * Current 64-bit tick count at DQM3_TICKS_PER_SECOND, for code that must keep
 * the original tick arithmetic. Equivalent to DQM3_NS_TO_TICKS(now), but a
 * backend may return the hardware counter directly.
 */
Dqm3U64 dqm3_time_ticks(void);

/* Ticks per second. Always DQM3_TICKS_PER_SECOND for an original-compatible
 * backend; other platforms should not change the arithmetic the game sees. */
Dqm3U64 dqm3_time_frequency(void);

/*
 * Sleep for at least nanoseconds. A zero duration yields the processor but
 * may return immediately. The call returns DQM3_OK normally and
 * DQM3_ERR_INVALID if the duration is not representable; an interrupted sleep
 * still returns DQM3_OK and the caller re-checks its deadline.
 */
Dqm3Result dqm3_time_sleep(Dqm3Time nanoseconds);

/*
 * Sleep until the monotonic clock reaches deadline. If deadline is already in
 * the past the call returns immediately without sleeping. DQM3_TIME_NEVER is
 * DQM3_ERR_INVALID: there is no infinite sleep, use a thread wait.
 */
Dqm3Result dqm3_time_sleep_until(Dqm3Time deadline);

/* deadline = base + nanoseconds, saturating at DQM3_TIME_NEVER. */
Dqm3Time dqm3_time_deadline(Dqm3Time base, Dqm3Time nanoseconds);

/* True when now is at or past deadline. */
Dqm3Bool dqm3_time_expired(Dqm3Time now, Dqm3Time deadline);

#endif
