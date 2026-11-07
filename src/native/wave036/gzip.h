#ifndef DQMJ3_WAVE032_GZIP_H
#define DQMJ3_WAVE032_GZIP_H
#include "../wave032/archive.h"
#ifndef Z_SOLO
#define Z_SOLO
#endif
#ifdef ARCHIVE_GZIP_HISTORICAL
#include "../wave032/third_party/zlib-1.2.7/zlib.h"
#else
#include "third_party/zlib-1.4/zlib.h"
#endif

typedef struct ArchiveGzipBuffer {
    const unsigned char *input;
    unsigned int input_bytes;
    unsigned char *output;
    unsigned int output_bytes;
    unsigned char owns_output;
} ArchiveGzipBuffer;
typedef struct ArchiveGzipView ArchiveGzipView;
typedef struct ArchiveGzipOperations {
    ArchiveGzipView *(*release)(ArchiveGzipView *view);
} ArchiveGzipOperations;
struct ArchiveGzipView {
    const ArchiveGzipOperations *operations;
    ArchiveGzipBuffer *buffer;
};
extern const ArchiveGzipOperations archive_gzip_operations;
ArchiveGzipView *fn_005f5f90(ArchiveGzipView *view);
void fn_005f5d60(ArchiveGzipView *view, const unsigned char *input, unsigned int bytes);
void fn_005f5d98(ArchiveGzipView *view);
unsigned int archive_gzip_output_size(const ArchiveGzipView *view);
int fn_005f5eac(ArchiveGzipView *view, unsigned char *output);
ArchiveGzipView *fn_005f601c(ArchiveGzipView *view);
_Static_assert(__builtin_offsetof(ArchiveGzipView, buffer) == sizeof(void *), "gzip view owner field");
_Static_assert(sizeof(unsigned int) == 4, "gzip raw byte budget width");
#endif
