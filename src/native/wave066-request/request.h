#ifndef DQMJ3_EFFECT_REQUEST066_H
#define DQMJ3_EFFECT_REQUEST066_H

typedef struct EffectRequestTask066 EffectRequestTask066;
typedef struct EffectRequestProvider066 EffectRequestProvider066;
typedef struct EffectRequestHeap066 EffectRequestHeap066;

typedef struct EffectRequestLength066 {
    unsigned int low;
    unsigned int high;
} EffectRequestLength066;

typedef enum EffectRequestAllocation066 {
    EFFECT_REQUEST_TASK066,
    EFFECT_REQUEST_CONTROL066,
    EFFECT_REQUEST_STRING066
} EffectRequestAllocation066;

typedef struct EffectRequestMemory066 {
    void *(*allocate)(void *context, EffectRequestAllocation066 role, unsigned int target_bytes,
                      __SIZE_TYPE__ native_bytes, unsigned int alignment);
    void (*release)(void *context, EffectRequestAllocation066 role, void *memory,
                    unsigned int target_bytes, __SIZE_TYPE__ native_bytes);
    void *context;
} EffectRequestMemory066;

typedef struct EffectRequestHeapOperations066 {
    void (*uninvoked_0)(void);
    void (*uninvoked_1)(void);
    void *(*allocate)(EffectRequestHeap066 *heap, unsigned int bytes, unsigned char alignment);
    void (*release)(EffectRequestHeap066 *heap, void *memory);
} EffectRequestHeapOperations066;

struct EffectRequestHeap066 {
    const EffectRequestHeapOperations066 *operations;
    void *context;
};

typedef struct EffectRequestControl066 {
    unsigned char state;
    unsigned char source_selector;
    unsigned char unknown_02[2];
    unsigned short *path;
} EffectRequestControl066;

typedef struct EffectRequestProviderOperations066 {
    EffectRequestProvider066 *(*destroy)(EffectRequestProvider066 *provider);
    void (*uninvoked_1)(void);
    void (*load)(EffectRequestProvider066 *provider, EffectRequestTask066 *task,
                 unsigned char source_selector, const unsigned short *path);
    void (*reset)(EffectRequestProvider066 *provider, EffectRequestTask066 *task);
    const unsigned char *(*bytes)(EffectRequestProvider066 *provider);
    unsigned long long (*length)(EffectRequestProvider066 *provider);
} EffectRequestProviderOperations066;

struct EffectRequestProvider066 {
    const EffectRequestProviderOperations066 *operations;
    EffectRequestHeap066 *heap;
    unsigned int alignment;
    unsigned char *data;
    EffectRequestLength066 data_bytes;
    EffectRequestLength066 file_bytes;
    unsigned char unknown_20[16];
};

typedef struct EffectRequestTaskOperations066 {
    EffectRequestTask066 *(*finalize)(EffectRequestTask066 *task);
    void (*destroy)(EffectRequestTask066 *task);
    void (*load)(EffectRequestTask066 *task);
} EffectRequestTaskOperations066;

typedef struct EffectRequestFiles066 {
    int (*open)(void *context, void **stream, const unsigned short *path, unsigned int flags);
    int (*size)(void *context, void *stream, unsigned long long *bytes);
    int (*read)(void *context, void *stream, void *output, unsigned int requested, unsigned int *copied);
    void (*finalize)(void *context, void *stream);
    void (*report_error)(void *context, int status, unsigned int original_callsite);
    void *context;
} EffectRequestFiles066;

struct EffectRequestTask066 {
    const EffectRequestTaskOperations066 *operations;
    EffectRequestControl066 *control;
    EffectRequestProvider066 embedded_provider;
    EffectRequestProvider066 *provider;
};

int effect_request_bind_memory066(const EffectRequestMemory066 *memory);
const EffectRequestMemory066 *effect_request_memory066(void);
unsigned short *effect_request_empty_path066(void);
unsigned short *effect_request_copy_path066(const unsigned short *path, unsigned int minimum_capacity);
void effect_request_release_path066(unsigned short *path);
void effect_request_replace_prefix066(unsigned short *path, unsigned int previous_units, const unsigned short *replacement);
EffectRequestControl066 *effect_request_control_init066(EffectRequestControl066 *control,
    unsigned char source_selector, const unsigned short *path);
void effect_request_control_release066(EffectRequestControl066 *control);
EffectRequestTask066 *effect_request_base_init066(EffectRequestTask066 *task,
    unsigned char source_selector, const unsigned short *path);
EffectRequestTask066 *effect_request_construct066(EffectRequestTask066 *task, unsigned char source_selector,
    const unsigned short *path, EffectRequestHeap066 *heap, unsigned int alignment);
unsigned char effect_request_ready066(const EffectRequestTask066 *task);
unsigned char effect_request_selector066(const EffectRequestTask066 *task);
const unsigned short *effect_request_path066(const EffectRequestTask066 *task);
void effect_request_set_state066(EffectRequestTask066 *task, unsigned char state);
const unsigned char *effect_request_bytes066(EffectRequestTask066 *task);
unsigned long long effect_request_length066(EffectRequestProvider066 *provider);
int effect_request_bind_files066(const EffectRequestFiles066 *files);
const EffectRequestFiles066 *effect_request_files066(void);
void effect_request_load066(EffectRequestTask066 *task);
void effect_request_destroy066(EffectRequestTask066 *task);
EffectRequestTask066 *effect_request_base_finalize066(EffectRequestTask066 *task);
EffectRequestProvider066 *effect_request_provider_destroy066(EffectRequestProvider066 *provider);
void effect_request_provider_reset066(EffectRequestProvider066 *provider, EffectRequestTask066 *task);
void effect_request_provider_load066(EffectRequestProvider066 *provider, EffectRequestTask066 *task,
    unsigned char source_selector, const unsigned short *path);
const unsigned char *effect_request_provider_bytes066(EffectRequestProvider066 *provider);
extern const EffectRequestTaskOperations066 effect_request_task_operations066;
extern const EffectRequestTaskOperations066 effect_request_base_operations066;
extern const EffectRequestProviderOperations066 effect_request_provider_operations066;

typedef struct EffectRequestFactory066 {
    void (*enqueue)(void *context, EffectRequestTask066 *task);
    void *context;
} EffectRequestFactory066;

unsigned char effect_request_resolve_full_path066(const unsigned short *path, unsigned int selector,
    unsigned short **resolved);
EffectRequestTask066 *effect_request_sync066(EffectRequestFactory066 *factory, const unsigned short *path,
    unsigned int source_selector, EffectRequestHeap066 *heap, unsigned int payload_alignment);
EffectRequestTask066 *effect_request_async066(EffectRequestFactory066 *factory, const unsigned short *path,
    unsigned int source_selector, EffectRequestHeap066 *heap, unsigned int payload_alignment);

_Static_assert(sizeof(unsigned int) == 4 && sizeof(unsigned short) == 2, "measured scalar widths");
_Static_assert(sizeof(EffectRequestControl066) == (sizeof(void *) == 4 ? 8 : 16), "measured request control");
_Static_assert(sizeof(EffectRequestProvider066) == (sizeof(void *) == 4 ? 48 : 64), "owned provider storage");
_Static_assert(sizeof(EffectRequestTask066) == (sizeof(void *) == 4 ? 60 : 88), "owned task storage");
_Static_assert(__builtin_offsetof(EffectRequestTask066, embedded_provider) == 2 * sizeof(void *), "real embedded provider");
_Static_assert(__builtin_offsetof(EffectRequestTask066, provider) == (sizeof(void *) == 4 ? 56 : 80), "published provider pointer");

#endif
