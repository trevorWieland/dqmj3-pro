#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int fn_00101a1c(); extern undefined4 fn_00144810(); extern undefined4 fn_0014481c(); extern undefined4 fn_00145b00();
extern undefined8 fn_0017821c(); extern undefined4 fn_001f7350(); extern undefined4 * fn_00301f50(); extern int fn_006a8660(); extern undefined4 fn_006a873c(); extern int fn_006a8a34();
extern undefined4 fn_006b6b3c(); extern int fn_006b6c88();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_002efb20; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00830a88; extern undefined4 DAT_008977e8;
