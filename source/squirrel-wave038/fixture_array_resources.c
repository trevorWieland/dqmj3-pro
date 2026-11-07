#define fixture_vector_reallocate023 fixture_array_reallocate_saved038
#include "../squirrel-wave034/fixture_services022.c"
#undef fixture_vector_reallocate023
#include "fixture.h"

void *fixture_class_reallocate_saved034(void *storage,SqPrototypeU32 previous,SqPrototypeU32 next);
void *fixture_vector_reallocate023(void *storage,SqPrototypeU32 previous,SqPrototypeU32 next)
{
    return fixture_class_reallocate_saved034(storage,previous,next);
}
