#ifndef DQMJ3_WAVE013_FILE_OWNER_SERVICES_H
#define DQMJ3_WAVE013_FILE_OWNER_SERVICES_H

#include "pattern_file_owner_view.h"

typedef struct PatternOwnerOpenedFile {
    PatternRuleStream *stream;
    unsigned char tagged;
} PatternOwnerOpenedFile;

typedef struct PatternFileOwnerServices {
    PatternOwnerHeap *heap;
    unsigned char memory_ready;
    int (*resource_work_required)(void *context);
    int (*mount)(void *context, unsigned long long archive, unsigned char *work, unsigned int bytes);
    int (*unmount)(void *context, const char *name);
    int (*open)(void *context, const unsigned short *path, PatternOwnerOpenedFile *file);
    void (*release)(void *context, PatternOwnerOpenedFile *file);
    void (*delete_owner)(void *context, PatternFileOwner *owner);
    void (*failure)(void *context, unsigned int reason);
    void *context;
} PatternFileOwnerServices;

int pattern_owner_bind_services(const PatternFileOwnerServices *services);
const PatternFileOwnerServices *pattern_owner_services(void);
void fn_0044f54c(PatternOwnerBlock *block, unsigned int bytes);
void fn_0044f5b4(PatternOwnerBlock *block);
unsigned int fn_006d40e4(PatternFileOwner *owner, unsigned int *flags,
    const unsigned short *const *candidates, unsigned int count);
unsigned int pattern_owner_apply(FixedArena *arena, PatternFileOwner *owner, unsigned int *flags,
    unsigned int selection_input, const unsigned short *const *candidates, unsigned int count);

extern const PatternFileOwnerOperations pattern_file_owner_operations;

#endif
