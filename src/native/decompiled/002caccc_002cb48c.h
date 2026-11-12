#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00146590(); extern undefined4 fn_001c9d80(); extern undefined4 fn_001caa40(); extern undefined4 fn_002454a4(); extern undefined4 fn_00245510(); extern undefined4 fn_0025f2d0();
extern undefined4 fn_002ff628(); extern longlong fn_00300f74(); extern undefined4 fn_0069e8c8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0081fba8; extern undefined4 DAT_008c7663;
