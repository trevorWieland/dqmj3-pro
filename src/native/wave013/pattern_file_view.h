#ifndef DQMJ3_WAVE013_PATTERN_FILE_VIEW_H
#define DQMJ3_WAVE013_PATTERN_FILE_VIEW_H

#include "pattern_owner_api.h"

typedef struct PatternFileRuleView {
    PatternRulePrefix pattern;
    unsigned short *file_buffer;
    unsigned char opaque_28[4];
    unsigned short *candidate_storage;
} PatternFileRuleView;

typedef struct PatternRuleStream PatternRuleStream;

typedef struct PatternRuleStreamOperations {
    void (*opaque_00[9])(void);
    unsigned int (*byte_size)(PatternRuleStream *stream);
    void (*opaque_28)(void);
    unsigned int (*read_bytes)(PatternRuleStream *stream, void *destination, unsigned int bytes);
} PatternRuleStreamOperations;

struct PatternRuleStream {
    const PatternRuleStreamOperations *operations;
};

int fn_004c4420(const PatternFileRuleView *rule, const unsigned short *text, int maximum);
void fn_004c446c(unsigned short *destination, int capacity, const unsigned short *source);
unsigned int fn_004c4104(PatternFileRuleView *rule, unsigned int *flags, PatternRuleStream *stream,
    const unsigned short *const *candidates, unsigned int count);
unsigned int pattern_process_file_rules(FixedArena *arena, PatternFileRuleView *rule, unsigned int *flags,
    PatternRuleStream *stream, const unsigned short *const *candidates, unsigned int count);

_Static_assert(__builtin_offsetof(PatternFileRuleView, pattern) == 0, "Rule view prefix");
_Static_assert(__builtin_offsetof(PatternFileRuleView, file_buffer) == sizeof(PatternRulePrefix), "Rule file-buffer view");
_Static_assert(__builtin_offsetof(PatternRuleStreamOperations, byte_size) == 9 * sizeof(void (*)(void)), "Byte-size callback slot");
_Static_assert(__builtin_offsetof(PatternRuleStreamOperations, read_bytes) == 11 * sizeof(void (*)(void)), "Read callback slot");

#endif
