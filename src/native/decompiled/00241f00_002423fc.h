#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00144834(); extern undefined4 fn_0024ec28(); extern undefined4 fn_0024f974(); extern bool fn_00250030(); extern undefined4 fn_00289e9c(); extern undefined4 fn_0077f06c();
extern undefined4 fn_0077f138(); extern undefined4 fn_007a1f1c(); extern undefined4 fn_007a2810(); extern undefined4 fn_007a604c(); extern undefined4 fn_007a7a68();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897804;
