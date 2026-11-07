#include "execute_views.h"

const char *fn_00191f20(const SqObject *object)
{
    switch (object->type & 0x00ffffffu) {
    case 1: return "null";
    case 2: return "integer";
    case 4: return "float";
    case 8: return "bool";
    case 16: return "string";
    case 32: return "table";
    case 64: return "array";
    case 128: case 2048: return "userdata";
    case 256: case 512: case 8192: return "function";
    case 1024: return "generator";
    case 4096: return "thread";
    case 16384: return "class";
    case 32768: return "instance";
    case 65536: return "weakref";
    default: return 0;
    }
}
