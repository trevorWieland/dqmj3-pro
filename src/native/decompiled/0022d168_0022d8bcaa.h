#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined8 fn_0017821c(); extern undefined4 fn_0022f750(); extern undefined4 fn_002c8df4(); extern undefined4 fn_0031b78c(); extern undefined4 fn_003e563c(); extern undefined4 fn_003e56e4();
extern undefined4 fn_003e5b40(); extern undefined4 fn_00689efc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 PTR_s_douguya_007c7274;
