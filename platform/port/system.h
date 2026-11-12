#ifndef DQMJ3_PLATFORM_SYSTEM_H
#define DQMJ3_PLATFORM_SYSTEM_H

/*
 * Process lifetime, fatal errors and named service sessions.
 *
 * This is the header that replaces the parts of nn::os, nn::srv and the raw
 * svc surface that do not belong to a more specific subsystem. It has three
 * jobs:
 *
 *   1. bring the platform up and down once per process;
 *   2. stop the process deterministically when the game cannot continue;
 *   3. open named service sessions and exchange a request/response with them.
 *
 * The third job is deliberately narrow. On the original image a session is a
 * capability handle to a system service ("fs:USER", "gsp::Gpu", "snd:CSND",
 * "hid:USER", "srv:", and the game's own "AndSupportAnim_" style services).
 * A port should implement the subsystem headers (file.h, graphics.h, audio.h,
 * input.h) directly and only use service sessions for game-defined services
 * that have no portable equivalent. A session command number is a backend
 * detail: reconstructed game code must call a named function, not pass an IPC
 * command word.
 *
 * The request and response arrays are 32-bit words in the caller's byte
 * order, as the original IPC buffers are. send_request is synchronous and
 * copies the response into the caller's array before returning; the arrays
 * must stay valid for the call and are not retained. A response longer than
 * response_words is truncated. A backend that cannot express a command
 * returns DQM3_ERR_UNSUPPORTED rather than inventing one.
 *
 * Threading: initialize and finalize are called once from the main thread.
 * A service handle is process-wide and may be used from several threads, but
 * one session serialises its calls: concurrent send_request on the same handle
 * blocks until the previous reply arrives. Fatal never returns and is callable
 * from any thread. Query functions are safe from any thread.
 *
 * Timing: service calls may block indefinitely on a wedged service. The
 * original has no timeout on them either. initialize is slow (it brings up
 * file, graphics, audio and input) and must complete before any other platform
 * call; finalize waits for workers to stop.
 */

#include "platform.h"

enum Dqm3SystemInfo {
    DQM3_SYSTEM_INFO_TICK_RATE = 1,
    DQM3_SYSTEM_INFO_TOTAL_MEMORY = 2,
    DQM3_SYSTEM_INFO_USED_MEMORY = 3,
    DQM3_SYSTEM_INFO_APP_MEMORY = 4,
    DQM3_SYSTEM_INFO_FIRM_VERSION = 5,
    DQM3_SYSTEM_INFO_REGION = 6,
    DQM3_SYSTEM_INFO_LANGUAGE = 7,
    DQM3_SYSTEM_INFO_MODEL = 8
};

typedef enum Dqm3SystemInfo Dqm3SystemInfo;

/*
 * Bring the platform up. Every other header's process-wide objects become
 * valid when this returns DQM3_OK. Calling it twice is DQM3_ERR_BUSY. If it
 * fails, no other platform call is valid and the process should report and
 * exit; partial state is torn down by the backend.
 */
Dqm3Result dqm3_system_initialize(void);

/*
 * Stop the platform. Workers are stopped and joined, sessions closed and
 * heaps destroyed. Finalizing without initializing is DQM3_ERR_INVALID.
 * No platform call is valid afterwards except initialize.
 */
Dqm3Result dqm3_system_finalize(void);

/*
 * Report an unrecoverable error and terminate the process. Never returns.
 * The original's path runs an optional registered callback with six zero
 * arguments and then executes the break system call, which stops in the
 * debugger or terminates. A port must at least terminate; it must not return
 * to the caller. code appears in the diagnostic if the backend has one.
 */
void dqm3_system_fatal(Dqm3S32 code);

/*
 * Break into the debugger if one is attached; otherwise behave as fatal.
 * Unlike fatal this is allowed to return when a debugger resumes, and the
 * original uses that for internal consistency failures.
 */
void dqm3_system_break(Dqm3S32 code);

/*
 * Open a named service session. name is ASCII and includes no colon unless the
 * service name itself has one. On success *handle receives a non-invalid
 * handle. A missing service is DQM3_ERR_NOT_FOUND.
 */
Dqm3Result dqm3_system_service_open(const char *name, Dqm3Handle *handle);

/*
 * Close a session. Any thread waiting in send_request on the handle receives
 * DQM3_ERR_INVALID. Closing DQM3_HANDLE_INVALID is a no-op.
 */
Dqm3Result dqm3_system_service_close(Dqm3Handle handle);

/*
 * Send one request to a session and wait for its reply. command is a
 * backend-defined operation number; request/response are 32-bit word arrays.
 * The backend owns the wire encoding (IPC header, translate descriptors,
 * static buffers). On success the reply is in response and the result is
 * DQM3_OK. Service-level failures are returned as DQM3_ERR_IO unless the
 * backend can map them to a more specific DQM3_ERR_*.
 */
Dqm3Result dqm3_system_service_call(Dqm3Handle handle, Dqm3U32 command,
    const Dqm3U32 *request, Dqm3U32 request_words,
    Dqm3U32 *response, Dqm3U32 response_words);

/* Read one process-wide value. Unknown ids are DQM3_ERR_UNSUPPORTED. */
Dqm3Result dqm3_system_info(Dqm3SystemInfo id, Dqm3U64 *value);

/*
 * A stable 64-bit identity for this console/user/host. The game uses the
 * console identity for save ownership and error reports; a port must return
 * the same value across runs on the same installation and a different one on
 * a different installation. It must not be a value the game can collide with
 * by accident, and it must not leave the process.
 */
Dqm3Result dqm3_system_unique_id(Dqm3U64 *identity);

/*
 * Flush the instruction cache after generating or loading code. The original
 * uses it around shader/overlay work. A host with a unified cache may treat it
 * as a no-op. address and bytes are rounded outwards to cache lines.
 */
Dqm3Result dqm3_system_flush_instruction_cache(const void *address, Dqm3Size bytes);

/*
 * Original-image backend.
 *
 * 0x00146594 is the original break path: it runs the registered break handler
 * with six zero arguments, clears the handler and executes the break system
 * call. It takes no argument, so the diagnostic code is a portable extension.
 */
#if defined(DQMJ3_PLATFORM_BACKEND_ORIGINAL)
void fn_00146594(void);
#define dqm3_system_break(code) fn_00146594()
#endif

#endif
