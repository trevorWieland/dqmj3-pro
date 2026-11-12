#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00163940(); extern undefined4 fn_00166824(); extern undefined8 fn_0017821c(); extern undefined1 fn_0025be70(); extern undefined1 fn_0028bde4(); extern byte fn_002e31e4();
extern uint fn_002e3204(); extern undefined4 * fn_00301f50(); extern bool fn_00660e64(); extern int fn_006925b8(); extern bool fn_006b7b34(); extern int fn_006b83e4();
extern int fn_006b84b0(); extern undefined4 fn_0077f0c8(); extern undefined4 fn_007a2604(); extern undefined4 fn_007a76e4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897804;
