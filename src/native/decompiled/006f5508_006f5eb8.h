#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100b58(); extern int fn_00100fc6(); extern int fn_001010c8(); extern undefined4 fn_00114248(); extern undefined4 fn_0014f510();
extern int * fn_001588d4(); extern undefined4 fn_00166824(); extern int fn_00177c88(); extern undefined8 fn_0017821c(); extern undefined4 * fn_00301f50(); extern uint * fn_004b9a2c();
extern undefined4 fn_004b9b4c(); extern undefined4 * fn_0065a190(); extern int fn_006b64a4(); extern int fn_006c3b40(); extern int fn_006c3b4c(); extern undefined4 fn_006d06a8();
extern undefined4 fn_006d3d30(); extern undefined4 fn_00797258();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897804; extern undefined4 DAT_008b64f8; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
