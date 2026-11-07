#include "stream056.h"

#define OFFSET(type, member) ((StreamWord056)__builtin_offsetof(type, member))

const StreamWord056 stream056_layout[] = {
    sizeof(Stream056), sizeof(StreamState056), sizeof(StreamCode056),
    OFFSET(Stream056, next_input), OFFSET(Stream056, available_input),
    OFFSET(Stream056, total_input), OFFSET(Stream056, next_output),
    OFFSET(Stream056, available_output), OFFSET(Stream056, total_output),
    OFFSET(Stream056, message), OFFSET(Stream056, state),
    OFFSET(StreamState056, mode), OFFSET(StreamState056, window_size),
    OFFSET(StreamState056, window_have), OFFSET(StreamState056, window_next),
    OFFSET(StreamState056, window), OFFSET(StreamState056, hold),
    OFFSET(StreamState056, bits), OFFSET(StreamState056, lengths),
    OFFSET(StreamState056, distances), OFFSET(StreamState056, length_bits),
    OFFSET(StreamState056, distance_bits), OFFSET(StreamState056, sane)
};
