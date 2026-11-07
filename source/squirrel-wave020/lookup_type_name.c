#include "lookup_error.h"

const char *sq_lookup_type_name020(SqPrototypeU32 type)
{
    switch (type & 0x00ffffffu) {
    case 1: return "null";
    case 2: return "integer";
    case 4: return "float";
    case 8: return "bool";
    case 0x10: return "string";
    case 0x20: return "table";
    case 0x40: return "array";
    case 0x80:
    case 0x800: return "userdata";
    case 0x100:
    case 0x200:
    case 0x2000: return "function";
    case 0x400: return "generator";
    case 0x1000: return "thread";
    case 0x4000: return "class";
    case 0x8000: return "instance";
    case 0x10000: return "weakref";
    default: return 0;
    }
}

const char *sq_lookup_object_type_name020(const SqPrefixObject012 *object)
{
    return sq_lookup_type_name020(object->type);
}
