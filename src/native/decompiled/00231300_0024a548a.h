#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0015fa54(); extern undefined4 * fn_00168a24(); extern undefined4 fn_0018a618(); extern undefined4 fn_00191540(); extern undefined4 fn_00230e40(); extern undefined8 fn_00301a9c();
extern undefined1 fn_00661094(); extern undefined4 fn_00734d18();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007e0ea4; extern undefined4 DAT_0081d134;
