#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fe8(); extern undefined4 fn_00124ffc(); extern undefined4 fn_0014e774(); extern undefined4 fn_00223510(); extern undefined4 fn_00223ff8(); extern undefined4 fn_00225fd8();
extern undefined4 fn_00259728(); extern int fn_002febd8(); extern undefined4 fn_002ff020(); extern undefined4 fn_002ff0a8(); extern undefined4 fn_002ff0b4(); extern undefined4 * fn_002ff0c8();
extern undefined4 fn_002ff1b4(); extern undefined4 fn_00300904(); extern undefined4 * fn_005f6f1c(); extern bool fn_006a7f8c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0; extern undefined4 DAT_0089a508; extern undefined4 DAT_008c3db4; extern undefined4 DAT_008f9d04;
