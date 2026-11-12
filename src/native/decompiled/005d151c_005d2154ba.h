#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00163868(); extern undefined4 fn_001638a0(); extern undefined4 fn_00215aec(); extern undefined4 fn_00215d9c(); extern undefined4 fn_0023dca4(); extern undefined4 fn_0023ddec();
extern undefined4 fn_0023e640(); extern int * fn_002fdd54(); extern undefined4 fn_002fdf94(); extern undefined4 * fn_0057a7f0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0084c2cc; extern undefined4 DAT_0084c30c; extern undefined4 DAT_008977e0; extern undefined4 PTR_LAB_0084c16c;
