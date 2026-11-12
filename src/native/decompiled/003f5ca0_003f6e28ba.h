#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int fn_001746f4(); extern undefined4 fn_001f74ec(); extern undefined4 fn_0028bbf4(); extern undefined4 fn_002c3d68();
extern undefined1 fn_0037c0a4(); extern undefined4 fn_0037c110(); extern undefined4 fn_005aeb2c(); extern undefined1 fn_00660e2c(); extern undefined4 fn_006899f4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0089292c;
