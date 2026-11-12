#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00163868(); extern undefined8 fn_0017821c(); extern undefined4 fn_00242710(); extern undefined4 fn_002ff628();
extern undefined8 fn_00301a9c(); extern int fn_006c8a2c(); extern undefined4 fn_006f7a0c(); extern undefined4 fn_0079ce44(); extern undefined4 * fn_007b867c(); extern undefined4 * fn_007b8758();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0; extern undefined4 DAT_00897804; extern undefined4 DAT_008c7615; extern undefined4 DAT_008f9cf8;
extern undefined4 DAT_008f9d04;
