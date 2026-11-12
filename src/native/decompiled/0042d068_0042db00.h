#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_001f74d8(); extern undefined4 fn_001f74ec(); extern int fn_0024222c(); extern undefined4 fn_0025e378();
extern undefined4 fn_0025e7cc(); extern undefined4 fn_002b20a4(); extern undefined4 fn_002c3de4(); extern undefined4 fn_0036bae4(); extern bool fn_0036bb20(); extern bool fn_0036bb48();
extern undefined4 fn_00396280(); extern undefined4 fn_0042c29c(); extern void fn_0042d284(); extern undefined4 fn_004450b8(); extern undefined4 fn_00688ff8(); extern undefined4 fn_0068974c();
extern undefined4 fn_006899f4(); extern undefined4 fn_00689efc(); extern undefined4 fn_0068ab44(); extern undefined4 * fn_0068ad5c(); extern int fn_006b4f84(); extern undefined * fn_006ce034();
extern undefined1 fn_006f6a6c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008939cc; extern undefined4 DAT_00893a00; extern undefined4 DAT_00897804; extern undefined4 PTR_FUN_0083bac8;
