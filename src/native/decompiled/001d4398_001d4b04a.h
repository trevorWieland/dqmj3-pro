#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined8 fn_0017821c(); extern undefined4 fn_00182988(); extern int fn_001d1150(); extern undefined4 fn_001d29b8(); extern undefined1 * fn_001d2a90(); extern undefined4 fn_001d36fc();
extern undefined4 fn_001d47e8(); extern int fn_0026a548(); extern undefined8 fn_00301a9c(); extern bool fn_006b64bc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e4; extern undefined4 DAT_00897804;
