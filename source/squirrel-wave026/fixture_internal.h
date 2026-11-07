#ifndef DQMJ3_COERCION_FIXTURE026_H
#define DQMJ3_COERCION_FIXTURE026_H

#include "coercion.h"
#include "../squirrel-wave023/fixture_internal.h"

extern SqPrototypeU32 fixture_variant026;
extern SqPrototypeU32 fixture_cleanup026;
extern char fixture_text026[256];
extern SqPrototypeU32 fixture_text_bytes026;
extern SqCoercionAddress026 fixture_input_address026;
extern SqPrototypeU32 fixture_checks026[13];
void fixture_meta026(SqPrototypeU32 variant);
SqPrototypeI32 fixture_native_callback026(void *vm);
void fixture_capture_text026(const SqPrefixObject012 *object);
void fixture_release_observer_setup026(SqPrototypeU32 variant);
SqPrototypeU32 fixture_native_checks026(SqPrototypeU32 *output);
#ifdef _WIN32
#define SQ_COERCION_FIXTURE026 __declspec(dllexport)
#else
#define SQ_COERCION_FIXTURE026
#endif
SQ_COERCION_FIXTURE026 void fixture_prepare026(SqPrototypeU32 variant, SqPrototypeU32 cleanup);
SQ_COERCION_FIXTURE026 SqPrototypeU32 fixture_execute026(void);
SQ_COERCION_FIXTURE026 SqPrototypeU32 fixture_snapshot026(SqPrototypeU32 *output, SqPrototypeU32 capacity);

#endif
