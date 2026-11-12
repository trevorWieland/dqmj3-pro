#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern uint fn_00101a50(); extern undefined4 fn_00174828(); extern int fn_00174870(); extern undefined8 fn_0017821c(); extern undefined4 fn_00182988();
extern undefined4 fn_0022eb78(); extern undefined4 fn_00230ce8(); extern int fn_0026a558(); extern undefined4 fn_0029432c(); extern undefined8 fn_00301a9c(); extern undefined4 fn_0033819c();
extern int fn_006b621c(); extern bool fn_006b64bc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007ba154; extern undefined4 DAT_008977e4; extern undefined4 DAT_00897804; extern undefined4 DAT_008c5f54;
extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
