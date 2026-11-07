#ifndef DQMJ3_SQUIRREL_PROTOTYPE_FIXTURE011_H
#define DQMJ3_SQUIRREL_PROTOTYPE_FIXTURE011_H

#include "prototype_release.h"

typedef struct {
    SqPrototypeU32 words[16];
} PrototypeObservation011;

typedef struct {
    SqPrototypeInstruction011 *instructions;
    SqPrototypeObject011 *literals, *parameters, *functions;
    SqPrototypeOuter011 *outers;
    SqPrototypeLine011 *lines;
    SqPrototypeLocal011 *locals;
    SqPrototypeI32 *defaults;
    SqPrototypeU32 counts[8];
} PrototypeFixtureLayout011;

typedef struct {
    unsigned char *memory;
    SqPrototypeU32 bytes, variant, count, overflow;
    const SqPrototypeVTable011 *prototype_table, *base_table;
    SqPrototypeU32 initial_bytes[3];
    SqPrototypeU32 captured_counts[3][8];
    SqPrototypeU32 captured[3];
    PrototypeFixtureLayout011 layouts[3];
    PrototypeObservation011 observations[128];
} PrototypeFixture011;

extern PrototypeFixture011 prototype_fixture011;
extern const SqPrototypeVTable011 prototype_observer_table011;
extern const SqPrototypeVTable011 prototype_alternate_table011;
SqPrototype011 *fixture_prototype(SqPrototypeU32 index);
SqPrototypePrefix011 *fixture_reference(SqPrototypeU32 index);
SqPrototypeWeak011 *fixture_weak(SqPrototypeU32 index);
SqPrototypeObject011 *fixture_spare(SqPrototypeU32 index);
SqPrototypeOuter011 *fixture_spare_outers(void);
SqPrototypeU32 fixture_identity(const void *pointer);
SqPrototypeU32 fixture_payload(const SqPrototypeObject011 *object);
SqPrototypeU32 fixture_table_identity(const SqPrototypeVTable011 *table);
void fixture_set_reference(SqPrototypeObject011 *object, void *reference);
void fixture_record(SqPrototypeU32 operation, SqPrototypeU32 object, SqPrototypeU32 references);
void fixture_compact(SqPrototype011 *prototype, SqPrototypeI32 count);
void fixture_capture(SqPrototypeU32 index);

#endif
