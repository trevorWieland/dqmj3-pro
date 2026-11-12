#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern short * fn_001003e0(); extern undefined4 fn_001008c4(); extern undefined4 fn_00127fb4(); extern undefined4 fn_00145b00(); extern undefined4 fn_00162d44(); extern undefined4 fn_00162d54();
extern undefined8 fn_0017821c(); extern undefined4 fn_001969a4(); extern undefined1 * fn_002e9288(); extern undefined4 fn_002e936c(); extern undefined4 fn_003369b4(); extern undefined4 fn_00337590();
extern undefined4 fn_005e0bd4(); extern undefined4 fn_005e1698(); extern undefined4 fn_005e16f0(); extern undefined4 fn_006c0d5c(); extern int fn_006e9f50(); extern int fn_006e9f64();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00000001; extern undefined4 DAT_00812c8c;
