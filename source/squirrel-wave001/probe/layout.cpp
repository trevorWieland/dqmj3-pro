#include "sqpcheader.h"
#include "sqvm.h"
#include "sqstring.h"
#include "sqtable.h"
#include "sqarray.h"
#include "sqfuncproto.h"
#include "sqclass.h"
#include "sqclosure.h"
#ifndef NO_GARBAGE_COLLECTOR
#define CHAIN_VALUES sizeof(SQCollectable),O(SQCollectable,_next),O(SQCollectable,_prev),O(SQCollectable,_sharedstate)
#else
#define CHAIN_VALUES 0,0xffffffffu,0xffffffffu,0xffffffffu
#endif
#define O(t,m) __builtin_offsetof(t,m)
extern "C" {
extern const unsigned sq_probe_layout[] = {
SQUIRREL_VERSION_NUMBER,sizeof(void *),sizeof(SQInteger),sizeof(SQFloat),sizeof(SQChar),sizeof(SQHash),
sizeof(SQObject),sizeof(SQObjectPtr),sizeof(SQObjectValue),sizeof(SQRefCounted),sizeof(SQVM),sizeof(SQString),sizeof(SQClass),sizeof(SQInstance),sizeof(SQInstruction),
O(SQObject,_type),O(SQObject,_unVal),O(SQRefCounted,_uiRef),O(SQRefCounted,_weakref),
O(SQVM,_stack),O(SQVM,_top),O(SQVM,_stackbase),O(SQString,_len),O(SQString,_hash),O(SQString,_val),
O(SQClass,_locked),O(SQClass,_udsize),O(SQInstance,_class),O(SQInstance,_values),
O(SQInstruction,_arg1),O(SQInstruction,op),O(SQInstruction,_arg0),O(SQInstruction,_arg2),O(SQInstruction,_arg3),
OT_NULL,OT_INTEGER,OT_FLOAT,OT_STRING,OT_ARRAY,OT_CLASS,OT_INSTANCE,SQOBJECT_REF_COUNTED,
MEMBER_TYPE_METHOD,MEMBER_TYPE_FIELD,NEW_SLOT_ATTRIBUTES_FLAG,NEW_SLOT_STATIC_FLAG,
_OP_LINE,_OP_ARITH,_OP_RETURN,_OP_NEWARRAY,_OP_CLASS,_OP_NEWSLOTA,
sizeof(SQRawObjectVal),sizeof(SQObjectType),sizeof(SQBool),sizeof(((SQRefCounted*)0)->_uiRef),
sizeof(SQObjectPtrVec),sizeof(SQArray),O(SQArray,_values),CHAIN_VALUES};
unsigned sq_probe_hash(const SQChar *s,unsigned n){return (unsigned)_hashstr(s,n);}
typedef SQObjectPtr &(SQObjectPtr::*Assignment)(const SQObjectPtr &);
Assignment sq_probe_assignment=&SQObjectPtr::operator=;
}
