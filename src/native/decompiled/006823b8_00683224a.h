#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00146594(); extern undefined4 fn_002feef8(); extern int fn_00520dac(); extern undefined4 fn_005210a0();
extern undefined4 fn_005210b0(); extern undefined4 fn_005210dc(); extern int fn_005214f0(); extern undefined4 fn_005244d0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897898; extern undefined4 PTR_FUN_00850dcc;
