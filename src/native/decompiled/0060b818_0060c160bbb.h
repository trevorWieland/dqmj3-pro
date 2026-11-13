#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_001c232c(); extern undefined4 fn_001f74d8(); extern undefined4 * fn_005d4f1c(); extern undefined4 fn_00689efc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00850014; extern undefined4 DAT_00894a9c; extern undefined4 DAT_008977e4;
