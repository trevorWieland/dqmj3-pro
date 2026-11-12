#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_0011dda8(); extern undefined4 fn_00144810(); extern undefined4 fn_00146590(); extern undefined4 fn_0016947c();
extern undefined4 fn_0016ddf0(); extern undefined4 fn_0017fe34(); extern undefined4 fn_002feef8(); extern undefined4 fn_00525bd0(); extern undefined4 fn_006a83d8(); extern undefined1 fn_006a8730();
extern int fn_006f7de8(); extern bool fn_006f8074();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007d6f20; extern undefined4 DAT_007d6f24; extern undefined4 DAT_007d6f28; extern undefined4 DAT_007d6f2c;
extern undefined4 DAT_0081bcbc; extern undefined4 DAT_008977e8;
