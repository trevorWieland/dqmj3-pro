#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0017419c(); extern undefined4 fn_00174828(); extern int fn_00174870(); extern undefined8 fn_0017821c(); extern undefined4 fn_00182988(); extern int fn_001d1150();
extern undefined4 fn_002a1a6c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e4;
