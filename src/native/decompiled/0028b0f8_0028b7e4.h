#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined8 fn_0017821c(); extern int fn_001c2350(); extern undefined4 fn_0020b99c(); extern undefined4 fn_0020ba60(); extern undefined4 fn_0020bbc4(); extern int fn_006b83e4();
extern int fn_006b84b0(); extern uint fn_006bfffc(); extern undefined4 fn_0077f008(); extern int * fn_0077f1f8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e4;
