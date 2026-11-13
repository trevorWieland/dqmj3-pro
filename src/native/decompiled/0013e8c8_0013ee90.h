#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001251a8(); extern undefined4 fn_001252e8(); extern undefined4 fn_001252f8(); extern undefined4 fn_00125694(); extern undefined4 fn_001257a8(); extern undefined4 fn_0012d6a4();
extern undefined4 fn_0013e09c(); extern undefined4 fn_0013e368(); extern undefined4 fn_0013e67c(); extern int fn_0013eac8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0089a54c; extern undefined4 DAT_0089a558; extern undefined4 DAT_0089a55c; extern undefined4 DAT_0089a560;
extern undefined4 DAT_0089a564; extern undefined4 DAT_008bfb30; extern undefined4 DAT_008c0718;
