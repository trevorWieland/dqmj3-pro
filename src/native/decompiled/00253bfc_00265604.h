#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern uint fn_00101a50(); extern undefined4 fn_00145ac0(); extern int fn_0016b874(); extern undefined8 fn_0017821c();
extern uint * fn_001782b8(); extern undefined4 fn_0020deb4(); extern undefined4 fn_0020fcf4(); extern undefined4 fn_00210198(); extern undefined4 fn_00210378(); extern undefined4 fn_00210394();
extern int fn_00242bd4(); extern int fn_00264f50(); extern undefined4 * fn_00301f50(); extern undefined4 fn_006b5a7c(); extern undefined4 fn_0078a498(); extern undefined4 fn_0078a708();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007c9894; extern undefined4 DAT_007c9898;
