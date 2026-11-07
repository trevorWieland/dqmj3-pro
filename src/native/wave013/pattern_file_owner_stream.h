#ifndef DQMJ3_WAVE013_FILE_OWNER_STREAM_H
#define DQMJ3_WAVE013_FILE_OWNER_STREAM_H

#include "pattern_file_owner_services.h"

struct PatternOwnerFile;

typedef struct PatternOwnerFileOperations {
    int (*read)(struct PatternOwnerFile *file, unsigned int *read_bytes,
        unsigned long long offset, void *output, unsigned int bytes);
    void (*opaque_04[2])(void);
    int (*size)(struct PatternOwnerFile *file, unsigned long long *bytes);
    void (*opaque_10[8])(void);
    void (*destroy)(struct PatternOwnerFile *file);
} PatternOwnerFileOperations;

typedef struct PatternOwnerFile {
    const PatternOwnerFileOperations *operations;
} PatternOwnerFile;

typedef struct PatternOwnerStream {
    PatternRuleStream stream;
    PatternOwnerFile *file;
    unsigned long long position;
    unsigned long long cached_size;
} PatternOwnerStream;

void pattern_owner_stream_init(PatternOwnerStream *stream, PatternOwnerFile *file);
void pattern_owner_stream_release(PatternOwnerStream *stream);

extern const PatternRuleStreamOperations pattern_owner_stream_operations;

#endif
