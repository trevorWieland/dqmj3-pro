#include "array_views.h"

typedef struct {
    SqU32 calls;
    SqU32 last_reference;
    SqU32 size_seen;
    SqVector *vector;
} SqReleaseObservation;

void sq_release_fixture(SqRef *reference)
{
    SqReleaseObservation *observation = reference->weak;
    observation->calls++;
    observation->last_reference = reference->references;
    observation->size_seen = observation->vector->size;
}
