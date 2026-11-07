#ifndef DQMJ3_WAVE013_FILE_IO_FIXTURE_H
#define DQMJ3_WAVE013_FILE_IO_FIXTURE_H

#include "../src/native/wave013/pattern_file_view.h"

typedef struct PatternMemoryProvider {
    PatternRuleStream stream;
    const unsigned char *data;
    unsigned int advertised_size;
    unsigned int available_bytes;
    unsigned int read_result;
    unsigned int copy_limit;
    unsigned int size_calls;
    unsigned int read_calls;
    unsigned int last_request;
    unsigned int copied_bytes;
    void *last_destination;
} PatternMemoryProvider;

unsigned int pattern_fixture_size(PatternRuleStream *stream);
unsigned int pattern_fixture_read(PatternRuleStream *stream, void *destination, unsigned int bytes);

#endif
