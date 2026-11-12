#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0072948c(); extern undefined4 fn_0072a550(); extern undefined4 fn_00730044(); extern undefined4 fn_0073aa9c(); extern undefined4 fn_0073acbc(); extern undefined4 fn_0073b7a4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007f2d40; extern undefined4 DAT_007f2d54; extern undefined4 UNK_007f2d3f;
