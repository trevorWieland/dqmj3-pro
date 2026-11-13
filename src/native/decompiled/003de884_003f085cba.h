#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int * fn_00147974(); extern undefined4 fn_00154ac8(); extern undefined4 fn_001f74ec(); extern undefined4 fn_0022f750(); extern undefined4 fn_002c29a0();
extern undefined4 fn_002c330c(); extern undefined2 fn_00391d58(); extern undefined4 fn_003e2fd8(); extern undefined4 fn_00689bd0(); extern undefined4 fn_00689efc(); extern undefined2 fn_006b52b0();
extern int fn_006cb760();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003e2fb4; extern undefined4 DAT_003e2fc4; extern undefined4 DAT_00894b34; extern undefined4 DAT_00894bfc;
extern undefined4 DAT_00894c00; extern undefined4 DAT_00897804; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
