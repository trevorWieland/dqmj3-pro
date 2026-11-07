#ifndef DQMJ3_SQUIRREL_WAVE006_EXECUTE_VIEWS_H
#define DQMJ3_SQUIRREL_WAVE006_EXECUTE_VIEWS_H

#include "../squirrel-wave004/call_fixture.h"
#include "../squirrel-wave008/generator_release.h"

typedef struct {
    SqI32 argument1;
    unsigned char opcode;
    unsigned char argument0;
    unsigned char argument2;
    unsigned char argument3;
} SqInstruction;

typedef enum {
    SQ_LINE = 0, SQ_LOAD = 1, SQ_LOADINT = 2, SQ_LOADFLOAT = 3, SQ_DLOAD = 4,
    SQ_TAILCALL = 5, SQ_CALL = 6, SQ_PREPCALL = 7, SQ_PREPCALLK = 8, SQ_GETK = 9,
    SQ_MOVE = 10, SQ_NEWSLOT = 11, SQ_DELETE = 12, SQ_SET = 13, SQ_GET = 14, SQ_EQ = 15, SQ_NE = 16, SQ_ARITH = 17, SQ_BITW = 18, SQ_RETURN = 19, SQ_LOADNULLS = 20,
    SQ_LOADROOT = 21, SQ_LOADBOOL = 22, SQ_DMOVE = 23, SQ_JUMP = 24,
    SQ_JNZ = 25, SQ_JZ = 26, SQ_LOADFREE = 27, SQ_VARGC = 28, SQ_GETVARGV = 29,
    SQ_NEWTABLE = 30, SQ_NEWARRAY = 31, SQ_APPENDARRAY = 32, SQ_CLOSURE = 48,
    SQ_COMPARITHL = 35, SQ_INCL = 37, SQ_PINCL = 39, SQ_CMP = 40, SQ_EXISTS = 41,
    SQ_AND = 43, SQ_OR = 44, SQ_NEG = 45, SQ_NOT = 46, SQ_BWNOT = 47,
    SQ_YIELD = 49, SQ_RESUME = 50, SQ_FOREACH = 51, SQ_DELEGATE = 53, SQ_PUSHTRAP = 56, SQ_POPTRAP = 57, SQ_THROW = 58
} SqMeasuredOpcode;

typedef struct {
    SqCallVM base;
    SqU32 suspended;
    SqU32 suspended_root;
    SqI32 suspended_target;
    SqI32 suspended_traps;
    unsigned short suspended_varargs_size;
    unsigned short suspended_varargs_base;
    SqVector portable_varargs;
} SqExecuteVM;

typedef struct {
    SqRef reference;
    SqState *shared;
    SqObject environment;
    SqObject function;
    SqVector outers;
    SqVector defaults;
} SqScriptClosure;

typedef SqGenerator008 SqGenerator;

typedef struct {
    SqU32 kind;
    SqObject name;
    SqObject source;
} SqOuterDescriptor;

typedef struct {
    SqWeakPrefix prefix;
    SqObject object;
} SqWeakObject;

typedef struct SqHashNode {
    SqObject value;
    SqObject key;
    struct SqHashNode *next;
} SqHashNode;

typedef struct SqTable {
    SqRef reference;
    SqState *shared;
    struct SqTable *delegate;
    SqHashNode *first_free;
    SqHashNode *nodes;
    SqI32 node_count;
    SqI32 used;
} SqTable;

typedef struct {
    unsigned char prefix[24];
    SqU32 hash;
    char text[];
} SqStringView;

typedef struct {
    SqI32 stack_base;
    SqI32 stack_top;
    const SqInstruction *instruction;
    SqI32 target;
} SqTrap;

typedef struct {
    SqState base;
    unsigned char unknown_after_chain[97];
    unsigned char notify_all_exceptions;
} SqSharedRuntime;

typedef struct {
    SqWeakPrefix reference;
    SqObject source_name;
    SqObject name;
    SqI32 stack_size;
    unsigned char generator;
    unsigned char variable_parameters;
    unsigned short padding;
    SqI32 local_count;
    void *locals;
    SqI32 line_count;
    void *lines;
    SqI32 literal_count;
    SqObject *literals;
    SqI32 parameter_count;
    SqObject *parameters;
    SqI32 function_count;
    SqObject *functions;
    SqI32 outer_count;
    void *outers;
    SqI32 default_count;
    SqI32 *defaults;
    SqI32 instruction_count;
    SqInstruction instructions[];
} SqFunction;

_Static_assert(sizeof(SqInstruction) == 8 && __builtin_offsetof(SqInstruction, opcode) == 4, "Measured bytecode instruction encoding");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqExecuteVM, suspended) == 148, "Original suspend fields");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqScriptClosure, outers) == 40, "Original captured values");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqFunction, instructions) == 96, "Original prototype instruction storage");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqSharedRuntime, notify_all_exceptions) == 169, "Original exception notification flag");
_Static_assert(sizeof(void *) != 4 || sizeof(SqTrap) == 16, "Original trap record stride");
_Static_assert(sizeof(void *) != 4 || sizeof(SqOuterDescriptor) == 20, "Original outer descriptor stride");
_Static_assert(sizeof(void *) != 4 || sizeof(SqHashNode) == 20, "Original hash node stride");
_Static_assert(sizeof(void *) != 4 || sizeof(SqTable) == 44, "Original table allocation extent");
_Static_assert(sizeof(void *) != 4 || sizeof(SqGenerator) == 120, "Original generator allocation extent");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqGenerator, state) == 116, "Original generator state byte");

SqVector sq_execute_varargs(SqExecuteVM *vm);
void sq_execute_publish_varargs(SqExecuteVM *vm, SqVector vector);
void sq_execute_release(SqU32 type, SqValue value);
void sq_execute_clear(SqObject *object);
void sq_execute_scalar(SqObject *object, SqU32 type, SqU32 bits);
_Bool sq_execute_false(const SqObject *object);
_Bool sq_execute_local_arithmetic(SqExecuteVM *vm, const SqInstruction *instruction);
SqI32 sq_execute_foreach(SqExecuteVM *vm, const SqObject *self, SqObject *key, SqObject *value, SqObject *iterator, SqI32 exit_position);
void sq_execute_clear_stack(SqExecuteVM *vm, SqI32 old_top);
void fn_001a0cc0(SqExecuteVM *vm, const unsigned short *varargs);
_Bool fn_001994c0(SqExecuteVM *vm, SqI32 argument0, SqI32 argument1, SqObject *result);
_Bool fn_00199cb8(SqExecuteVM *vm, SqScriptClosure *closure, SqI32 target, SqI32 arguments, SqI32 base, _Bool tail);
_Bool fn_0018d65c(SqExecuteVM *vm, const SqObject *closure, SqI32 target, SqI32 arguments,
                  SqI32 base, SqObject *result, SqU32 raise_error, SqI32 execution_type);
void sq_execute_debug(SqExecuteVM *vm, SqI32 event, SqI32 line);
void sq_execute_error_handler(SqExecuteVM *vm, const SqObject *error);
_Bool sq_execute_unwind(SqExecuteVM *vm, SqU32 raise_error, SqI32 *traps);
void sq_execute_push_trap(SqExecuteVM *vm, const SqInstruction *instruction);
const char *fn_00191f20(const SqObject *object);
void sq_execute_error(SqCallVM *vm, const char *message, ...);
_Bool sq_execute_bitwise(SqExecuteVM *vm, SqObject *destination, const SqObject *left, const SqObject *right, SqI32 operation);
_Bool sq_execute_unary(SqExecuteVM *vm, SqObject *destination, const SqObject *value, SqI32 operation);
_Bool fn_001a1234(SqExecuteVM *vm, SqI32 operation, SqObject *destination, const SqObject *left, const SqObject *right);
_Bool sq_execute_identical(const SqObject *left, const SqObject *right);
_Bool fn_00199144(SqExecuteVM *vm, const SqObject *left, const SqObject *right, SqI32 *result);
_Bool sq_execute_vararg_get(SqExecuteVM *vm, SqObject *destination, const SqObject *key);
void sq_execute_array_new(SqExecuteVM *vm, SqObject *destination, SqU32 capacity);
void sq_execute_array_append(SqArray *array, const SqObject *input);
extern const SqVTable sq_script_closure_vtable;
_Bool fn_00196b08(SqExecuteVM *vm, SqObject *destination, SqFunction *function);
extern const SqVTable sq_weak_prefix_vtable;
void sq_deallocate(void *pointer, SqU32 bytes);
void fn_006a7610(SqRef *reference);
_Bool fn_00198578(SqExecuteVM *vm, const SqObject *self, const SqObject *key,
                  SqObject *destination, SqU32 raw, SqU32 rooted);
extern const SqVTable sq_table_vtable;
void sq_execute_table_stop(SqI32 reason) __attribute__((noreturn));
void fn_0019b390(SqTable *table, SqI32 count);
void fn_0019b998(SqTable *table, SqState *shared, SqI32 requested);
_Bool fn_001a1dc8(SqTable *table, const SqObject *key, SqObject *destination);
_Bool fn_0019b414(SqTable *table, const SqObject *key, const SqObject *value);
void fn_0019b650(SqTable *table, const SqObject *key);
_Bool sq_execute_delete(SqExecuteVM *vm, SqObject *destination, const SqObject *self, const SqObject *key);
void fn_00666518(SqRef *reference);
extern const SqVTable sq_generator_vtable;
SqGenerator *fn_00192b9c(SqState *shared, SqScriptClosure *closure);
_Bool fn_0019289c(SqGenerator *generator, SqExecuteVM *vm);
_Bool fn_0019e378(SqGenerator *generator, SqExecuteVM *vm, SqI32 target);
_Bool fn_0019e2e8(SqTable *table, SqTable *delegate);
_Bool sq_execute_delegate(SqExecuteVM *vm, SqObject *destination, const SqObject *self, const SqObject *delegate);
_Bool fn_001987e4(SqExecuteVM *vm, const SqObject *self, const SqObject *key, const SqObject *value, SqU32 rooted);
_Bool fn_0019b728(SqTable *table, const SqObject *key, const SqObject *value);
void fn_0019b4ec(SqTable *table, _Bool force);
void sq_execute_unsupported(SqExecuteVM *vm, SqI32 reason) __attribute__((noreturn));

#endif
