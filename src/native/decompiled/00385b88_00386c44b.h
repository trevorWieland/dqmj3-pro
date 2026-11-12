#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_001482f4(); extern undefined4 fn_00159f34(); extern undefined4 fn_0016a43c(); extern undefined4 fn_0022ccb4();
extern undefined4 fn_0022cdf0(); extern undefined4 fn_0022cf0c(); extern undefined4 fn_0039b5d8(); extern undefined4 fn_0039b600();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00895874; extern undefined4 DAT_00895878; extern undefined4 DAT_0089587c; extern undefined4 PTR_FUN_00829e90;
