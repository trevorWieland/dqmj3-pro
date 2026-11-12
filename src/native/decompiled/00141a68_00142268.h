#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00150cb4(); extern undefined4 fn_00150ce0(); extern undefined4 fn_00150d0c(); extern undefined4 fn_0015fa54(); extern int fn_0015fa88();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007d7ff4; extern undefined4 DAT_007d7ffc; extern undefined4 DAT_007d8034; extern undefined4 DAT_007d80cc;
extern undefined4 DAT_007d812c; extern undefined4 DAT_007d8144; extern undefined4 DAT_007d81ac; extern undefined4 DAT_007d8384;
extern undefined4 DAT_007d839c; extern undefined4 DAT_008586fc;
