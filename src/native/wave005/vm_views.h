#ifndef DQMJ3_WAVE005_VM_VIEWS_H
#define DQMJ3_WAVE005_VM_VIEWS_H

typedef unsigned char VmByte;
typedef unsigned int VmU32;
typedef int VmI32;
typedef struct VmRefNode VmRefNode;
typedef struct VmObject VmObject;
typedef struct VmRefVTable VmRefVTable;

struct VmRefVTable {
    void (*unknown_0)(VmRefNode *);
    void (*unknown_1)(VmRefNode *);
    void (*release)(VmRefNode *);
};

struct VmRefNode {
    const VmRefVTable *vtable;
    VmU32 references;
    void *weak;
    VmRefNode *next;
    VmRefNode *previous;
};

typedef union {
    VmU32 bits;
    VmI32 integer;
    float floating;
    VmRefNode *reference;
} VmValue;

struct VmObject {
    VmU32 type;
    VmValue value;
};

typedef struct {
    VmByte unknown_0000[24];
    VmObject *stack;
    VmByte unknown_to_top[24 - sizeof(VmObject *)];
    VmI32 top;
    VmI32 base;
} VmStackView;

_Static_assert(sizeof(VmU32) == 4 && sizeof(VmI32) == 4, "32-bit scalar fields");
_Static_assert(sizeof(void *) != 4 || sizeof(VmObject) == 8, "original object size");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(VmObject, value) == 4, "original payload offset");
_Static_assert(__builtin_offsetof(VmStackView, stack) == 24, "measured stack offset");
_Static_assert(__builtin_offsetof(VmStackView, top) == 48, "measured top offset");
_Static_assert(__builtin_offsetof(VmStackView, base) == 52, "measured base offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(VmRefNode, next) == 12, "original next offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(VmRefNode, previous) == 16, "original previous offset");

VmI32 fn_00157ff4(const VmStackView *vm);
VmObject *vm_stack_at(const VmStackView *vm, VmI32 index);
void fn_00173d1c(VmStackView *vm, const VmObject *value);
VmObject *vm_object_assign(VmObject *destination, const VmObject *source);
void fn_0019e8c4(VmRefNode **head, VmRefNode *node);

#endif
