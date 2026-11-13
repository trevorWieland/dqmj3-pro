#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0013d5c4(); extern undefined4 fn_004c6fe8(); extern undefined4 fn_004c72c4(); extern undefined4 fn_004c738c(); extern undefined4 fn_004f0a20(); extern undefined4 fn_004f0ab4();
extern undefined4 fn_004f0b78(); extern int fn_0050d1a0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00856320;
