#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_001f74d8(); extern int fn_0024222c(); extern undefined4 fn_002c3504(); extern longlong fn_00300f74();
extern undefined4 fn_00410868(); extern undefined4 fn_00689efc(); extern int fn_006b4f84(); extern undefined4 fn_006ba214(); extern int fn_006ba274(); extern undefined4 * fn_00749ddc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008357a0; extern undefined4 DAT_00893a00; extern undefined4 DAT_00897804;
