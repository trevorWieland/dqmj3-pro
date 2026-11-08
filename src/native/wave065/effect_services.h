#ifndef DQMJ3_EFFECT_SERVICES065_H
#define DQMJ3_EFFECT_SERVICES065_H

typedef struct EffectAllocator065 EffectAllocator065;

typedef struct EffectAllocatorOperations065 {
    void (*unknown_00)(void);
    void (*unknown_04)(void);
    void *(*allocate)(EffectAllocator065 *allocator, unsigned int bytes, unsigned int alignment);
    void (*release)(EffectAllocator065 *allocator, void *memory);
} EffectAllocatorOperations065;

struct EffectAllocator065 {
    const EffectAllocatorOperations065 *operations;
};

#endif
