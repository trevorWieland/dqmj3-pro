#ifndef STREAM058_H
#define STREAM058_H

#include "stream056.h"

typedef StreamByte056 Byte058;
typedef StreamHalf056 Half058;
typedef StreamWord056 Word058;
typedef int Signed058;
_Static_assert(sizeof(Signed058) == 4, "signed stream integer width");
typedef struct State058 State058;
typedef void *(*Allocate058)(void *, Word058, Word058);
typedef void (*Dispose058)(void *, void *);

struct State058 {
    Byte058 mode;
    Byte058 mode_padding[3];
    Word058 last;
    Signed058 wrap;
    Word058 dictionary_present;
    Word058 untouched_0010;
    Word058 maximum_distance;
    Word058 untouched_0018;
    Word058 total;
    void *header;
    Word058 window_bits;
    Word058 window_size;
    Word058 window_have;
    Word058 window_next;
    Byte058 *window;
    Word058 hold;
    Word058 bits;
    Word058 untouched_length;
    Word058 untouched_distance;
    Word058 untouched_extra;
    const StreamCode056 *lengths;
    const StreamCode056 *distances;
    Word058 length_bits;
    Word058 distance_bits;
    Word058 untouched_counts[4];
    StreamCode056 *next_code;
    Byte058 untouched_work[1216];
    StreamCode056 codes[1444];
    Signed058 sane;
    Signed058 back;
    Word058 untouched_tail;
};

typedef struct Stream058 {
    const Byte058 *next_input;
    Word058 available_input;
    Word058 total_input;
    Byte058 *next_output;
    Word058 available_output;
    Word058 total_output;
    const char *message;
    State058 *state;
    Allocate058 allocate;
    Dispose058 dispose;
    void *context;
    Word058 data_type;
    Word058 checksum;
    Word058 reserved;
} Stream058;

Signed058 fn_00733c00(Stream058 *, Signed058, const Byte058 *, Word058);
Signed058 fn_00733d64(Stream058 *, const Byte058 *, Word058);
Signed058 fn_00733d78(Stream058 *);
Signed058 fn_00733bb0(Stream058 *);
void *fn_00734b34(void *, Word058, Word058);
void fn_00734b3c(void *, void *);
void stream_fast058(Stream058 *, Word058, StreamState056 *);
void *stream_heap_allocate058(Word058);
void stream_heap_dispose058(void *);
Signed058 stream_gzip_fixed058(Stream058 *, const Byte058 *, Word058, Byte058 *, Word058,
    StreamCode056 *, StreamState056 *);

#endif
