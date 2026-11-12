#ifndef DQMJ3_PLATFORM_FILE_H
#define DQMJ3_PLATFORM_FILE_H

/*
 * Files and archives.
 *
 * The game never sees a host file descriptor. It sees a path of the form
 * "archive:/directory/file.bin", where "archive" is one of the mounted
 * namespaces below. The original mounts "rom:" from the game image,
 * "patch:" from the update content, "data:" from the title's data archive,
 * "sdmc:" from the SD card and "err:f" for the error-log file. A port may
 * implement each archive over a directory, a package, a memory image or a
 * platform asset API; the game does not care which.
 *
 * Paths are NUL-terminated UTF-16 code units, as on the original, and use '/'
 * as the separator. dqm3_file_mount accepts the ASCII archive name it is
 * given ("rom:", "patch:", ...), not a host path. A path without ':' is
 * DQM3_ERR_INVALID: there is no implicit current archive.
 *
 * Reads and writes take an explicit 64-bit offset, mirroring the original's
 * positional IPC. A short read is normal: the call succeeds and *read receives
 * the number of bytes transferred, which may be less than requested at end of
 * file or when the medium returns a short transfer. *read == 0 with DQM3_OK
 * means end of file. A negative result means nothing was transferred. Writes
 * are complete or failed; a partial write returns DQM3_ERR_IO and the file's
 * contents at the unwritten range are unspecified.
 *
 * Threading: a Dqm3File handle is owned by one thread at a time. The mount
 * table is process-wide and safe to read from any thread; mounting and
 * unmounting must not race an open. Asynchronous requests are issued from any
 * thread, complete on the backend's worker, and the completion callback runs
 * on that worker: it must not block or call back into the same request.
 *
 * Timing: synchronous calls may block on the medium and must not be made from
 * the graphics or audio interrupt path. The asynchronous form exists for the
 * engine's loading queue. Mount and unmount are slow (seconds on a failing SD
 * card) and must not be performed per frame.
 */

#include "platform.h"

typedef struct Dqm3File Dqm3File;
typedef struct Dqm3FileRequest Dqm3FileRequest;
typedef struct Dqm3FileSystem Dqm3FileSystem;

#define DQM3_FILE_MAX_PATH 256u

enum Dqm3FileMode {
    DQM3_FILE_READ = 0,
    DQM3_FILE_WRITE = 1,
    DQM3_FILE_APPEND = 2,
    DQM3_FILE_READ_WRITE = 3
};

enum Dqm3FileFlags {
    DQM3_FILE_CREATE = 1u << 0,   /* create if missing; existing is reused   */
    DQM3_FILE_TRUNCATE = 1u << 1, /* truncate an existing file to zero       */
    DQM3_FILE_EXCLUSIVE = 1u << 2 /* fail if the file already exists         */
};

typedef struct Dqm3FileInfo {
    Dqm3U64 size;
    Dqm3U64 reserved_08;
} Dqm3FileInfo;

typedef void (*Dqm3FileCompletion)(Dqm3FileRequest *request, Dqm3Result result,
    void *context);

/* The process-wide mount table. Valid from dqm3_system_initialize. */
Dqm3FileSystem *dqm3_file_system(void);

/*
 * Mount archive "name" (ASCII, including the trailing colon) over target.
 * target is backend-defined: a host directory, a package path, an image
 * region. The original allocates a workspace of entries * entry_bytes before
 * mounting; a backend that does not need it may ignore both. flags is
 * reserved and must be zero. Mounting an already-mounted name returns
 * DQM3_ERR_BUSY.
 */
Dqm3Result dqm3_file_mount(Dqm3FileSystem *files, const char *name, const char *target,
    Dqm3U32 entries, Dqm3U32 entry_bytes, Dqm3U32 flags);

/* Remove a mount. Open files on it keep working until closed. */
Dqm3Result dqm3_file_unmount(Dqm3FileSystem *files, const char *name);

/*
 * Make "name" resolve to the same archive as "target" without copying it.
 * The original uses this to alias "patch:" to "rom:" when no update content
 * is present. The alias is removed by unmounting name.
 */
Dqm3Result dqm3_file_alias(Dqm3FileSystem *files, const char *name, const char *target);

/*
 * Open a file. On success *file receives a handle and the result is DQM3_OK.
 * On failure *file is NULL. DQM3_FILE_EXCLUSIVE without DQM3_FILE_CREATE is
 * DQM3_ERR_INVALID. Opening a directory as a file is DQM3_ERR_INVALID.
 */
Dqm3Result dqm3_file_open(Dqm3FileSystem *files, const Dqm3Char16 *path, Dqm3U32 mode,
    Dqm3U32 flags, Dqm3File **file);

/*
 * Positional read/write. buffer is a host pointer. bytes may be zero, in which
 * case the call does nothing and *transferred is zero. The file handle's
 * position is not changed; the game keeps its own cursor.
 */
Dqm3Result dqm3_file_read(Dqm3File *file, Dqm3U64 offset, void *buffer, Dqm3Size bytes,
    Dqm3Size *transferred);
Dqm3Result dqm3_file_write(Dqm3File *file, Dqm3U64 offset, const void *buffer,
    Dqm3Size bytes);

/* Size and existence. A missing file is DQM3_ERR_NOT_FOUND, not size zero. */
Dqm3Result dqm3_file_info(Dqm3File *file, Dqm3FileInfo *info);
Dqm3Result dqm3_file_exists(Dqm3FileSystem *files, const Dqm3Char16 *path,
    Dqm3Bool *exists);

/*
 * Flush buffered writes and close. A file with unflushed data returns
 * DQM3_ERR_IO from close if the backend cannot commit it. Closing NULL is a
 * no-op. A successful close invalidates the handle.
 */
Dqm3Result dqm3_file_flush(Dqm3File *file);
Dqm3Result dqm3_file_close(Dqm3File *file);

/*
 * Asynchronous read. begin allocates or reuses a request; the returned request
 * remains owned by the caller until its completion has run and
 * dqm3_file_request_release is called. buffer must stay valid until
 * completion. A completion may run before begin returns; the callback must be
 * ready for that. poll returns DQM3_OK and sets *done when the request has
 * completed, or DQM3_ERR_AGAIN while it is in flight.
 */
Dqm3Result dqm3_file_read_async(Dqm3FileSystem *files, const Dqm3Char16 *path,
    Dqm3U64 offset, void *buffer, Dqm3Size bytes, Dqm3FileCompletion completion,
    void *context, Dqm3FileRequest **request);
Dqm3Result dqm3_file_request_poll(Dqm3FileRequest *request, Dqm3Bool *done,
    Dqm3Size *transferred);
Dqm3Result dqm3_file_request_cancel(Dqm3FileRequest *request);
Dqm3Result dqm3_file_request_release(Dqm3FileRequest *request);

#endif
