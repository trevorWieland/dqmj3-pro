#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined1 fn_001639e4(); extern int fn_00176dc0(); extern undefined4 fn_0064f714(); extern undefined4 fn_0064fbd4(); extern undefined4 fn_00651494();
extern int fn_00691af0(); extern short * fn_006f14ec(); extern byte fn_006f3500(); extern undefined4 fn_006f4044(); extern int fn_006f4520(); extern undefined4 fn_00782e1c();
extern undefined4 fn_007837b4(); extern undefined4 fn_00784690(); extern undefined4 fn_007848f4(); extern undefined4 fn_00784dd8(); extern undefined4 fn_0079aa0c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008595d8;
