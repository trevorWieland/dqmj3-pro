#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern uint fn_00101a50(); extern undefined4 fn_00154ac8(); extern undefined4 fn_002c32c4(); extern uint fn_002e2e44(); extern undefined4 fn_0031b3c4(); extern undefined4 fn_0031b78c();
extern int fn_006c75c8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007c0d1c; extern undefined4 DAT_00891a44; extern undefined4 DAT_00891a50; extern undefined4 DAT_00897804;
