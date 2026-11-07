#ifndef DQMJ3_GENERATOR_FIXTURE044_H
#define DQMJ3_GENERATOR_FIXTURE044_H
#include "generator.h"
#include "../squirrel-wave040/startup.h"

typedef struct SqGeneratorBlock044 {void *pointer;SqPrototypeU32 bytes,kind,frees;} SqGeneratorBlock044;
typedef struct SqGeneratorFixture044 {
    unsigned char *memory;
    SqPrototypeU32 variant,cleanup,bump,blocks,fault,events;
    SqGeneratorBlock044 block[64];
    SqPrototypeU32 event[128][6];
    SqPrefixObject012 script,value,weak;
    SqGenerator044 *generator;
    SqPrototypeU32 result,states[32],state_count;
} SqGeneratorFixture044;
extern SqGeneratorFixture044 generator_fixture044;
void *fixture_allocate044(SqPrototypeU32 bytes,SqPrototypeU32 kind);
SqPrototypeU32 fixture_identity044(const void *pointer);
void fixture_deallocate044(void *pointer,SqPrototypeU32 bytes);
SqPrefixState012 *fixture_shared044(void);
SqPrefixObject012 fixture_new_script044(void);
SqPrefixObject012 fixture_value044(SqPrototypeU32 kind);
void fixture_run044(void);

#ifdef _WIN32
#define SQ44_EXPORT __declspec(dllexport)
#else
#define SQ44_EXPORT
#endif
SQ44_EXPORT SqPrototypeU32 fixture_bind044(void *memory,SqPrototypeU32 bytes);
SQ44_EXPORT void fixture_prepare044(SqPrototypeU32 variant,SqPrototypeU32 cleanup);
SQ44_EXPORT SqPrototypeU32 fixture_execute044(void);
SQ44_EXPORT SqPrototypeU32 fixture_snapshot044(SqPrototypeU32 *output,SqPrototypeU32 capacity);
SQ44_EXPORT const void *fixture_vtable044(SqPrototypeU32 index);
#endif
