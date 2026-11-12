#ifndef DQMJ3_FILE_BOOTSTRAP068_H
#define DQMJ3_FILE_BOOTSTRAP068_H

/* The system services this unit consumes; see platform/port/README.md. */
#include "../../../platform/port/file.h"
#include "../../../platform/port/memory.h"

#include "../wave067-queue/file_queue.h"

typedef enum EffectFileSystemKind068 {
    EFFECT_FILE_ROM068 = 0,
    EFFECT_FILE_PATCH068 = 5
} EffectFileSystemKind068;

typedef struct EffectFileWorkspaceSize068 {
    unsigned int logical_bytes;
    __SIZE_TYPE__ native_bytes;
    unsigned int native_alignment;
} EffectFileWorkspaceSize068;

typedef struct EffectFileWorkspace068 {
    void *memory;
    EffectFileWorkspaceSize068 size;
} EffectFileWorkspace068;

typedef struct EffectFileBootstrapServices068 {
    void *context;
    void (*initialize)(void *context);
    EffectFileWorkspaceSize068 (*requirements)(void *context, EffectFileSystemKind068 kind,
        unsigned int entries, unsigned int entry_bytes, unsigned int option);
    void *(*allocate)(void *context, EffectFileSystemKind068 kind, const EffectFileWorkspaceSize068 *size);
    void (*mount)(void *context, EffectFileSystemKind068 kind, const char *name,
        unsigned int entries, unsigned int entry_bytes, EffectFileWorkspace068 *workspace, unsigned int option);
    void (*alias)(void *context, const char *name, const char *target);
    void (*unmount)(void *context, const char *name);
    void (*release)(void *context, EffectFileSystemKind068 kind, EffectFileWorkspace068 *workspace);
} EffectFileBootstrapServices068;

typedef struct EffectFileBootstrap068 {
    const EffectFileBootstrapServices068 *services;
    EffectQueueManager067 *manager;
    void *unknown_00;
    EffectFileWorkspace068 rom;
    EffectFileWorkspace068 patch;
} EffectFileBootstrap068;

void effect_file_filesystem_initialize068(EffectFileBootstrap068 *state, unsigned int enable_patch);
void effect_file_filesystem_shutdown068(EffectFileBootstrap068 *state);
void effect_file_bootstrap_initialize068(EffectFileBootstrap068 *state);
void effect_file_bootstrap_shutdown068(EffectFileBootstrap068 *state);
EffectRequestTask066 *effect_file_request_async068(EffectFileBootstrap068 *state, const unsigned short *path,
    EffectRequestHeap066 *heap, unsigned int alignment, unsigned int source_selector);

#endif
