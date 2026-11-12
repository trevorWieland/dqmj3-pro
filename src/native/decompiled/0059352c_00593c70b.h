#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0044ab60(); extern void fn_005939a0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008ca108; extern undefined4 DAT_008ca10c; extern undefined4 DAT_008ca110; extern undefined4 DAT_008ca114;
extern undefined4 DAT_008ca118; extern undefined4 DAT_008ca11c;
