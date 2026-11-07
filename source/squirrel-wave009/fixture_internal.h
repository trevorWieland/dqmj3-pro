#ifndef DQMJ3_SQUIRREL_CLASS_FIXTURE009_H
#define DQMJ3_SQUIRREL_CLASS_FIXTURE009_H

#include "class_release.h"

typedef struct {
    SqU32 words[20];
} ClassObservation009;

typedef struct {
    unsigned char *memory;
    SqU32 bytes, variant, count, overflow;
    const SqVTable *class_table, *array_table, *generator_table, *base_table;
    ClassObservation009 observations[128];
} ClassFixture009;

extern ClassFixture009 class_fixture009;
extern const SqVTable class_observer_table009;
extern const SqVTable class_alternate_table009;
SqClass009 *fixture_class(SqU32 index);
SqArray *fixture_array(SqU32 index);
SqGenerator008 *fixture_generator(SqU32 index);
SqRef *fixture_node(SqU32 index);
SqWeakObject007 *fixture_weak(SqU32 index);
SqState *fixture_shared(void);
SqClassMember009 *fixture_members(SqU32 index);
SqObject *fixture_values(SqU32 index);
SqClassMember009 *fixture_fill(void);
SqU32 fixture_identity(const void *pointer);
SqU32 fixture_table_identity(const SqVTable *table);
SqU32 fixture_payload(const SqObject *object);
void fixture_set_reference(SqObject *object, SqRef *reference);
void fixture_record(SqU32 operation, SqU32 object, SqU32 references);
void fixture_residual_ownership(void);
SqI32 fixture_release_hook(void *tag, SqI32 size);

#endif
