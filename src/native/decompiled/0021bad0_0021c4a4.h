#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00159f34(); extern undefined4 fn_0021b104(); extern undefined4 fn_0021b74c(); extern bool fn_0021c13c(); extern undefined4 fn_0021d848();
extern undefined4 fn_0021e3f4(); extern undefined4 fn_0054ca94(); extern undefined4 fn_006b15ac(); extern undefined4 fn_006f7358();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0021c470; extern undefined4 DAT_0021c47c; extern undefined4 DAT_007d6f20; extern undefined4 DAT_007d6f24;
extern undefined4 DAT_007d6f28; extern undefined4 DAT_007d6f2c; extern undefined4 DAT_008977e0;
