#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_0024222c(); extern undefined4 fn_0039571c(); extern undefined1 fn_00660e2c(); extern int fn_006b2aa0(); extern int fn_006b4f84();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0084a1f0; extern undefined4 DAT_00897804;
