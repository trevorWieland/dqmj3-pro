#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001482f4(); extern undefined4 fn_0016a43c(); extern undefined4 fn_001f74ec(); extern undefined4 fn_0043cd80(); extern undefined4 fn_00569808(); extern undefined4 fn_00569c2c();
extern int fn_0057dcdc(); extern undefined4 fn_00689930(); extern int fn_006e7ac8(); extern undefined4 fn_00748990(); extern undefined4 fn_00748c18();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00892ee4;
