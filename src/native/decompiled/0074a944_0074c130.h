#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_0013cd7c(); extern int fn_0013ce04(); extern undefined4 * fn_0013ce98(); extern undefined4 fn_0015ebe4(); extern undefined4 * fn_0015ece0(); extern undefined4 fn_0015ef4c();
extern undefined8 fn_00301a9c(); extern undefined4 fn_0030233c(); extern int fn_0047e7fc(); extern undefined4 fn_0047fba4(); extern undefined4 fn_0074a528();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007dd004; extern undefined4 DAT_008527fc;
