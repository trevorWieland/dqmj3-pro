#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined8 fn_00301a9c(); extern undefined4 fn_00453a64(); extern undefined4 fn_00453a8c(); extern undefined4 fn_006cf9a4(); extern undefined4 fn_006d0144();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 s_ERROR_0089a626;
