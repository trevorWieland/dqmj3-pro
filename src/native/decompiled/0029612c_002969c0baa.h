#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00114150(); extern undefined4 fn_0011a314(); extern undefined4 fn_0011a36c(); extern undefined4 fn_0011a3c4(); extern undefined4 fn_006bec60(); extern undefined4 fn_006d3d30();
extern undefined4 fn_006f5e08();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897804; extern undefined4 DAT_00897850;
