#ifndef DQMJ3_SQUIRREL_COMPOSITION057_H
#define DQMJ3_SQUIRREL_COMPOSITION057_H

typedef unsigned int SqComposeU32_057;
typedef int SqComposeI32_057;

typedef struct SqVm040 SqVm040;

#ifdef __cplusplus
extern "C" {
#endif

SqVm040 *sq_compose_boot057(void *arena,SqComposeU32_057 bytes,SqComposeU32_057 stack_size);
SqComposeU32_057 sq_compose_run057(SqVm040 *vm,SqComposeU32_057 profile,SqComposeI32_057 value,
    SqComposeU32_057 flags,SqComposeU32_057 cleanup,SqComposeU32_057 *output);
SqComposeU32_057 sq_compose_cleanup057(SqVm040 *vm);
SqComposeU32_057 sq_compose_observe057(const SqVm040 *vm,SqComposeU32_057 *output,SqComposeU32_057 capacity);
SqComposeU32_057 sq_compose_heap_counts057(SqComposeU32_057 *output);
SqComposeU32_057 sq_compose_meta_contract057(SqVm040 *vm,SqComposeU32_057 *output);

#ifdef __cplusplus
}
#endif

#endif
