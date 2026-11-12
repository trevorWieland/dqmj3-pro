#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0014f590(); extern undefined4 fn_004ed2e8(); extern int fn_004ed810(); extern undefined1 * fn_0050a490(); extern int fn_0050b080(); extern int fn_0050b144();
extern undefined1 * fn_005118f4(); extern undefined4 fn_00656e14(); extern undefined4 fn_006d6e30(); extern undefined4 fn_006db6b8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00857074; extern undefined4 DAT_008bf4cc; extern undefined4 DAT_008bf4d4; extern undefined4 DAT_008c06a0;
