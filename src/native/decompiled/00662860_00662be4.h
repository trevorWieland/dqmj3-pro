#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0012a2d8(); extern undefined4 fn_0012d73c(); extern undefined4 fn_00145b00(); extern undefined4 fn_00166824(); extern undefined4 fn_00229ae0(); extern undefined4 fn_0025b3bc();
extern undefined4 fn_0025bafc(); extern void fn_00662860(); extern undefined4 * fn_00663c40(); extern undefined4 * fn_0066401c(); extern int fn_006b64a4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00897804; extern undefined4 DAT_008ccfb8; extern undefined4 DAT_008ccfbc;
extern code *DAT_008ccfc0;
