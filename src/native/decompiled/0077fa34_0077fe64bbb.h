#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined1 * fn_004543a8(); extern undefined4 fn_00454414(); extern undefined4 fn_004544cc(); extern undefined1 * fn_004544e4(); extern undefined1 * fn_006d0180(); extern undefined4 fn_006d01b0();
extern undefined4 fn_006d0204(); extern uint fn_0077fba0(); extern int fn_0077fdd8(); extern undefined1 * fn_00780224();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00000001;
