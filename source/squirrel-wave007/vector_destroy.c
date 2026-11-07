#include "array_release.h"

SqVector *fn_0077f3f8(SqVector *vector)
{
    if (vector->capacity) {
        for (SqU32 index = 0; index < vector->size; ++index) {
            SqObject *object = &vector->values[index];
            if (object->type & 0x08000000u) {
                SqRef *reference = object->value.reference;
                reference->references -= 1;
                if (!reference->references)
                    reference->vtable->release(reference);
            }
        }
        sq_deallocate(vector->values, vector->capacity * sizeof(SqObject));
    }
    return vector;
}
