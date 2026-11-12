#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0011c1b4(); extern undefined8 fn_0017821c(); extern undefined4 fn_005f65ec(); extern int fn_0066e3bc(); extern undefined4 fn_0066e4a4(); extern int * fn_006b3e50();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00896cbc; extern undefined4 DAT_00896cc0; extern undefined4 DAT_00896cc4; extern undefined4 DAT_00897850;
extern undefined4 DAT_008cd180;
