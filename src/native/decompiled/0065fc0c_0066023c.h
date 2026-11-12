#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_00301f50(); extern bool fn_005f1d84(); extern undefined4 fn_00689a10(); extern undefined4 fn_0069e8c8(); extern undefined4 fn_006f6a38(); extern undefined4 fn_006f6a5c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00850c64; extern undefined4 PTR_FUN_00898168;
