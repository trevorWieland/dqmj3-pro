#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int fn_0020c298(); extern int fn_0020c2c4(); extern undefined4 fn_0020c2e0(); extern undefined4 fn_0020f1f0();
extern int fn_0028b074(); extern undefined4 * fn_00301f50(); extern undefined1 fn_0033a35c(); extern int fn_00661308(); extern undefined4 fn_006af13c(); extern int fn_006b8478();
extern undefined4 fn_006b85d0(); extern undefined4 fn_0078a864();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897804;
