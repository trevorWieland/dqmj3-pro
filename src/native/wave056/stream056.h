#ifndef STREAM056_H
#define STREAM056_H

typedef unsigned char StreamByte056;
typedef unsigned short StreamHalf056;
typedef unsigned int StreamWord056;

_Static_assert(sizeof(StreamByte056) == 1, "byte width");
_Static_assert(sizeof(StreamHalf056) == 2, "code value width");
_Static_assert(sizeof(StreamWord056) == 4, "stream integer width");

typedef struct StreamCode056 {
    StreamByte056 operation;
    StreamByte056 bits;
    StreamHalf056 value;
} StreamCode056;

typedef struct StreamState056 {
    StreamByte056 mode;
    StreamByte056 untouched_mode_tail[39];
    StreamWord056 window_size;
    StreamWord056 window_have;
    StreamWord056 window_next;
    const StreamByte056 *window;
    StreamWord056 hold;
    StreamWord056 bits;
    StreamWord056 untouched_length;
    StreamWord056 untouched_distance;
    StreamWord056 untouched_extra;
    const StreamCode056 *lengths;
    const StreamCode056 *distances;
    StreamWord056 length_bits;
    StreamWord056 distance_bits;
    StreamByte056 untouched_tables[7012];
    StreamWord056 sane;
} StreamState056;

typedef struct Stream056 {
    const StreamByte056 *next_input;
    StreamWord056 available_input;
    StreamWord056 total_input;
    StreamByte056 *next_output;
    StreamWord056 available_output;
    StreamWord056 total_output;
    const char *message;
    StreamState056 *state;
    void *untouched_allocator;
    void *untouched_disposer;
    void *untouched_opaque;
    StreamWord056 untouched_data_type;
    StreamWord056 untouched_checksum;
    StreamWord056 untouched_reserved;
} Stream056;

void fn_00733e28(Stream056 *, StreamWord056);
void fn_00739d08(Stream056 *, StreamWord056);

#endif
