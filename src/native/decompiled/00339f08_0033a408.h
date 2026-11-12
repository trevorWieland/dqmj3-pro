#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_0011c1b4(); extern undefined4 fn_0012d73c(); extern undefined4 fn_00145b00(); extern undefined4 fn_0018a618(); extern undefined4 fn_0023097c();
extern undefined4 fn_002feef8(); extern undefined4 fn_00305a6c(); extern undefined4 fn_0037ce70(); extern undefined4 fn_0037ce88(); extern undefined4 fn_0037cee4(); extern int fn_006b2aa0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0033a548; extern undefined4 DAT_0033a550; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00824de4;
extern undefined4 DAT_008923ec; extern undefined4 DAT_008924b4; extern undefined4 DAT_008924b8; extern undefined4 DAT_00897804;
extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
