#ifndef DQMJ3_PLATFORM_H
#define DQMJ3_PLATFORM_H

/*
 * DQMJ3 Professional: the platform boundary.
 *
 * Every service this game asks of the Nintendo CTR-SDK has one declaration in
 * this directory. Reconstructed game code includes the header for the service
 * it uses and calls the dqm3_* name; it must not name nn::, nw::, a split
 * address, an SVC number, or a hardware register itself. That rule is what
 * keeps a port an exercise in implementing ten headers instead of searching
 * twenty-six thousand reconstructed functions.
 *
 * These headers describe behaviour, not a transport. They deliberately do not
 * include SDK headers, use SDK types, or mention IPC command words. A backend
 * on the original image binds the names to the measured split functions; a
 * backend on another platform implements them over SDL, Win32, POSIX, Vulkan,
 * OpenGL, ALSA, wasapi or anything else that honours the contract.
 *
 * Build modes
 * -----------
 * DQMJ3_PLATFORM_BACKEND_ORIGINAL
 *     The backend is the measured original image. Each header's verified
 *     alias block maps an implemented name to the split symbol holding that
 *     service, so the compiler emits the same call the original did and the
 *     image stays byte-identical. This is an alias, not a wrapper: there is no
 *     prologue, no call gate, no extra instruction.
 *
 * DQMJ3_PLATFORM_BACKEND_PORTABLE
 *     The backend is supplied by the port. The declarations below are the
 *     contract it implements. This mode is the reason the headers exist.
 *
 * With neither macro defined the headers are declarations only. That is the
 * mode the reconstruction build uses today: it compiles the interface into the
 * measured translation units, proves the interface is valid C under the
 * original compiler, and emits no code for it. The proof that this costs
 * nothing is that every measured object is unchanged.
 *
 * Result convention
 * -----------------
 * Functions that can fail return Dqm3Result: DQM3_OK on success, a negative
 * DQM3_ERR_* on failure. Functions that return a count, a byte size, a handle
 * or a pointer do not overload that value as an error channel; they use an
 * out parameter and a Dqm3Result, or return DQM3_HANDLE_INVALID / 0 / NULL
 * where the contract says so. A backend must not invent positive error codes.
 *
 * Threading
 * ---------
 * The original image has one process and several threads. Every function
 * below is callable from any thread unless its header says otherwise. Where a
 * subsystem has a per-object rule (a file handle, a texture, a command
 * buffer), the rule is stated on the object, not here. "Not thread-safe"
 * means the caller owns the object for the duration of the call.
 *
 * Timing
 * ------
 * Dqm3Time is nanoseconds on a monotonic clock whose zero is unspecified.
 * The original system tick runs at 268,111,856 Hz (the measured CTR value is
 * 268111856); Dqm3Time is that tick converted to nanoseconds, so a backend may
 * keep 64-bit ticks and convert at the edge. Wall-clock time is not a platform
 * service: the game has no business reading the user's calendar.
 */

typedef signed int Dqm3Result;
typedef unsigned int Dqm3Bool;
typedef unsigned int Dqm3Handle;
typedef unsigned int Dqm3U32;
typedef signed int Dqm3S32;
typedef unsigned long long Dqm3U64;
typedef unsigned long long Dqm3Time;
typedef __SIZE_TYPE__ Dqm3Size;
typedef unsigned short Dqm3Char16; /* a UTF-16 code unit, as the original uses */

enum Dqm3ResultCode {
    DQM3_OK = 0,
    DQM3_ERR_AGAIN = -1,       /* try later; nothing was consumed or changed    */
    DQM3_ERR_INVALID = -2,     /* bad argument, handle or state                 */
    DQM3_ERR_NOMEM = -3,       /* the service could not provide storage         */
    DQM3_ERR_NOT_FOUND = -4,    /* name, file or object does not exist           */
    DQM3_ERR_BUSY = -5,        /* object is owned or in a conflicting state     */
    DQM3_ERR_TIMEOUT = -6,     /* the operation did not finish in time          */
    DQM3_ERR_IO = -7,          /* device or medium reported a failure           */
    DQM3_ERR_UNSUPPORTED = -8, /* this backend does not implement the operation */
    DQM3_ERR_FATAL = -9        /* unrecoverable; the process cannot continue    */
};

enum Dqm3BoolValue {
    DQM3_FALSE = 0,
    DQM3_TRUE = 1
};

#define DQM3_HANDLE_INVALID 0xffffffffu
#define DQM3_TIME_NEVER 0xffffffffffffffffull

/*
 * The original image's tick rate. It is exposed because save timing, audio
 * scheduling and the retry loops in the file layer were written against it;
 * a port that keeps the same arithmetic avoids changing game-visible timing.
 */
#define DQM3_TICKS_PER_SECOND 268111856ull

/* Conversions are macros so a header include never emits a function body. */
#define DQM3_NS_TO_TICKS(nanoseconds) \
    (((unsigned long long)(nanoseconds) * DQM3_TICKS_PER_SECOND) / 1000000000ull)
#define DQM3_TICKS_TO_NS(ticks) \
    (((unsigned long long)(ticks) * 1000000000ull) / DQM3_TICKS_PER_SECOND)

#endif
