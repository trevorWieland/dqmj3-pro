#ifndef DQMJ3_SQUIRREL_PROTOTYPE_RELEASE011_H
#define DQMJ3_SQUIRREL_PROTOTYPE_RELEASE011_H

typedef unsigned int SqPrototypeU32;
typedef int SqPrototypeI32;

typedef struct SqPrototypeVTable011 {
    void (*destroy)(void *);
    void (*reserved)(void *);
    void (*release)(void *);
} SqPrototypeVTable011;

typedef struct SqPrototypePrefix011 {
    const SqPrototypeVTable011 *vtable;
    SqPrototypeU32 references;
    void *weak;
} SqPrototypePrefix011;

typedef union SqPrototypeValue011 {
    SqPrototypeU32 bits;
    SqPrototypeI32 integer;
    float floating;
    void *reference;
} SqPrototypeValue011;

typedef struct SqPrototypeObject011 {
    SqPrototypeU32 type;
    SqPrototypeValue011 value;
} SqPrototypeObject011;

typedef struct SqPrototypeInstruction011 {
    SqPrototypeI32 argument1;
    unsigned char opcode, argument0, argument2, argument3;
} SqPrototypeInstruction011;

typedef struct SqPrototypeOuter011 {
    SqPrototypeU32 kind;
    SqPrototypeObject011 name;
    SqPrototypeObject011 source;
} SqPrototypeOuter011;

typedef struct SqPrototypeLocal011 {
    SqPrototypeObject011 name;
    SqPrototypeU32 start, end, position;
} SqPrototypeLocal011;

typedef struct SqPrototypeLine011 {
    SqPrototypeI32 line, operation;
} SqPrototypeLine011;

typedef struct SqPrototypeWeak011 {
    SqPrototypePrefix011 prefix;
    SqPrototypeObject011 object;
} SqPrototypeWeak011;

typedef struct SqPrototype011 {
    SqPrototypePrefix011 reference;
    SqPrototypeObject011 source_name;
    SqPrototypeObject011 name;
    SqPrototypeI32 stack_size;
    unsigned char generator, variable_parameters;
    unsigned short padding;
    SqPrototypeI32 local_count;
    SqPrototypeLocal011 *locals;
    SqPrototypeI32 line_count;
    SqPrototypeLine011 *lines;
    SqPrototypeI32 literal_count;
    SqPrototypeObject011 *literals;
    SqPrototypeI32 parameter_count;
    SqPrototypeObject011 *parameters;
    SqPrototypeI32 function_count;
    SqPrototypeObject011 *functions;
    SqPrototypeI32 outer_count;
    SqPrototypeOuter011 *outers;
    SqPrototypeI32 default_count;
    SqPrototypeI32 *defaults;
    SqPrototypeI32 instruction_count;
    _Alignas(SqPrototypeObject011) SqPrototypeInstruction011 instructions[];
} SqPrototype011;

extern const SqPrototypeVTable011 sq_prototype_vtable011;
extern const SqPrototypeVTable011 sq_prototype_base_vtable011;
void sq_prototype_deallocate011(void *pointer, SqPrototypeU32 bytes);
SqPrototypeU32 sq_prototype_allocation_bytes011(const SqPrototype011 *prototype);
void fn_00299114(SqPrototype011 *prototype);
SqPrototype011 *fn_00299424(SqPrototype011 *prototype);

_Static_assert(sizeof(SqPrototypeU32) == 4 && sizeof(SqPrototypeI32) == 4, "original scalar words");
_Static_assert(sizeof(SqPrototypeInstruction011) == 8, "original instruction record");
_Static_assert(sizeof(void *) != 4 || sizeof(SqPrototypePrefix011) == 12, "actual prototype prefix");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqPrototype011, source_name) == 12, "original source name");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqPrototype011, instructions) == 96, "original instruction storage");
_Static_assert(__builtin_offsetof(SqPrototype011, instructions) % _Alignof(SqPrototypeObject011) == 0, "aligned compact object tails");
_Static_assert(_Generic(((SqPrototypeVTable011 *)0)->release, void (*)(void *): 1, default: 0), "exact opaque release bridge");

#endif
