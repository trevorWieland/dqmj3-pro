#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0014f24c(); extern undefined4 * fn_0014f2b0(); extern undefined4 * fn_0015ece0(); extern undefined8 fn_0017821c(); extern undefined4 fn_0030233c(); extern void fn_004686ac();
extern undefined4 * fn_004745d8(); extern bool fn_0048b3d8(); extern int fn_004b5540();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00853b08; extern undefined4 DAT_008558c4; extern undefined4 PTR_FUN_00852e9c;
