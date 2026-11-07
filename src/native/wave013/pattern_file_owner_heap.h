#ifndef DQMJ3_WAVE013_FILE_OWNER_HEAP_H
#define DQMJ3_WAVE013_FILE_OWNER_HEAP_H

typedef struct PatternOwnerBlock {
    struct PatternOwnerBlock *next;
    struct PatternOwnerBlock *previous;
    unsigned char *data;
    unsigned int bytes;
    unsigned char unknown_flag;
} PatternOwnerBlock;

typedef struct PatternOwnerMutex {
    unsigned int state;
    void *thread;
    unsigned int depth;
} PatternOwnerMutex;

typedef struct PatternOwnerHeap {
    unsigned char *begin;
    unsigned char *end;
    PatternOwnerBlock *anchor;
    PatternOwnerMutex mutex;
} PatternOwnerHeap;

void pattern_owner_mutex_lock(PatternOwnerMutex *mutex);
void pattern_owner_mutex_unlock(PatternOwnerMutex *mutex);
unsigned char *fn_0014e0a8(PatternOwnerHeap *heap, PatternOwnerBlock *block,
    unsigned int bytes, unsigned int margin);
void fn_0015e1b0(PatternOwnerHeap *heap, PatternOwnerBlock *block);

#endif
