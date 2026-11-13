#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_0015fa88(); extern undefined4 fn_005eea1c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007e1ab0; extern undefined4 DAT_007e1abc; extern undefined4 DAT_007e1ac8; extern undefined4 DAT_007e1ad4;
extern undefined4 DAT_00858d98;
