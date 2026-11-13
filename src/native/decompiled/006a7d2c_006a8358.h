#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00176d68(); extern undefined4 fn_0017fe34(); extern undefined4 fn_0052534c(); extern undefined4 fn_00525b38(); extern undefined4 fn_005f2d30(); extern undefined4 fn_006b6244();
extern undefined4 fn_006dcca4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897804;
