#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0025e31c(); extern undefined4 fn_0025e4dc(); extern undefined4 fn_0025e7cc(); extern undefined4 fn_002b209c(); extern undefined4 fn_002cb37c(); extern undefined4 fn_0031e148();
extern undefined4 fn_0037d284(); extern undefined4 fn_00688ff8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0031e0e4;
