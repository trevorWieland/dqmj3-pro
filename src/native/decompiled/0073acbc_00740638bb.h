#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_001b474c(); extern undefined4 fn_001b4f10(); extern undefined8 fn_001b8438(); extern undefined4 fn_001bee5c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00740620; extern undefined4 DAT_007406a8; extern undefined4 DAT_007d5fb1; extern undefined4 DAT_007d5fe3;
