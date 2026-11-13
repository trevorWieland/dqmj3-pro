#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 * fn_00118290(); extern undefined4 * fn_001287b4(); extern undefined4 fn_00174828(); extern undefined4 fn_001d19e4(); extern undefined4 fn_0022eb78();
extern undefined4 fn_00290734(); extern undefined4 fn_0029432c(); extern undefined8 fn_00301a9c(); extern int fn_006b621c(); extern undefined4 fn_006b64b0(); extern undefined4 fn_006f7508();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007ba154; extern undefined4 DAT_008977e0; extern undefined4 DAT_008977e4; extern undefined4 DAT_00897804;
extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
