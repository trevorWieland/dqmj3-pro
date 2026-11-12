#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined1 * fn_001013b0(); extern undefined4 fn_00102874(); extern undefined4 fn_00124ffc(); extern undefined4 fn_00147f5c(); extern undefined4 fn_0014e774(); extern undefined4 fn_001daf7c();
extern undefined8 fn_00301bd8(); extern undefined4 fn_00301d60(); extern undefined4 * fn_00301f50();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00300910_1(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0089a508; extern undefined4 DAT_008f9d04;
