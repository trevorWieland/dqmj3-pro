#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_00118290(); extern undefined4 fn_00156298(); extern undefined4 fn_001562b4(); extern undefined4 fn_0044f020(); extern undefined4 fn_005498c4(); extern undefined4 fn_00549b64();
extern undefined4 fn_005e6d00(); extern undefined4 * fn_005e6ee4(); extern undefined4 * fn_005e762c(); extern undefined4 fn_005e783c(); extern undefined4 fn_005e7d28(); extern undefined4 fn_005e990c();
extern undefined4 fn_005ea2ac(); extern undefined4 fn_005ea648(); extern int fn_006e9fcc(); extern int fn_006ea000(); extern uint fn_006ea00c(); extern undefined4 fn_006eb49c();
extern int fn_006eba5c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00858d04;
