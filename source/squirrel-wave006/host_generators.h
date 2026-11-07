#ifndef SQ_EXECUTE_HOST_GENERATORS_H
#define SQ_EXECUTE_HOST_GENERATORS_H
#include "execute_fixture.h"
void sq_host_generator_program(SqU32 kind, SqFunction *function, SqScriptClosure *child_script, SqObject *literals);
int sq_host_generator_check(SqU32 kind, const SqObject *output, const SqScriptClosure *script, const SqScriptClosure *child_script, const SqSharedRuntime *shared);
#endif
