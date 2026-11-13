#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern void fn_00150bb4(); extern undefined4 * fn_00158f40(); extern undefined4 * fn_00158f6c(); extern undefined4 fn_00160420(); extern undefined4 fn_0016048c(); extern undefined4 fn_001604d0();
extern undefined4 fn_00160c68(); extern int * fn_00171944(); extern undefined4 fn_0017d90c(); extern undefined8 fn_00301a9c(); extern undefined4 * fn_00301f50();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008575ec; extern undefined4 DAT_008576c4; extern undefined4 DAT_008c3ce0; extern undefined4 DAT_008f7520;
