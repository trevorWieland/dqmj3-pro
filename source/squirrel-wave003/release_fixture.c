#include "vm_controller.h"

typedef struct {
    SqU32 calls;
    SqU32 last_reference;
    SqU32 visible_top;
    SqU32 published_type;
    SqU32 published_references;
    VmStackView *vm;
    SqObject *destination;
} ControllerReleaseObservation;

void sq_controller_release_fixture(SqRef *reference)
{
    ControllerReleaseObservation *observation = reference->weak;
    observation->calls++;
    observation->last_reference = reference->references;
    observation->visible_top = (SqU32)observation->vm->top;
    observation->published_type = observation->destination->type;
    observation->published_references = observation->destination->type & 0x08000000u
                                           ? observation->destination->value.reference->references
                                           : 0;
}
