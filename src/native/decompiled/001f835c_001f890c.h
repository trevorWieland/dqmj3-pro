#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001003f2(); extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00101d5c(); extern int fn_001030a6(); extern uint * fn_001782b8();
extern undefined4 fn_0020bbc4(); extern int fn_00242bd4(); extern undefined4 fn_0024e350(); extern undefined4 * fn_00301f50(); extern bool fn_006bf198();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00000001; extern undefined4 DAT_001f8420; extern undefined4 DAT_001f84a8;
