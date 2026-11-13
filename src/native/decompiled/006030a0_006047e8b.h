#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0010fa20(); extern undefined4 fn_00117604(); extern undefined4 fn_00117984(); extern undefined4 fn_00145b00(); extern undefined4 fn_0016947c(); extern undefined4 fn_001781f0();
extern undefined4 fn_001ad184(); extern undefined4 fn_00303afc(); extern undefined4 fn_005e581c(); extern undefined4 * fn_0060481c(); extern uint * fn_007959b4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008c62fc; extern undefined4 DAT_008f9e2c; extern undefined4 DAT_008f9e30;
extern undefined4 DAT_008f9e34;
