#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern short * fn_001003e0(); extern undefined4 fn_001008c4(); extern undefined4 fn_0014f510(); extern undefined4 * fn_00168a24(); extern undefined8 fn_0017821c(); extern undefined4 fn_001f74ec();
extern undefined4 fn_003953b0(); extern undefined4 fn_004b9b4c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0084e2a0; extern undefined4 DAT_0089905c; extern undefined4 DAT_00899218; extern undefined4 DAT_008f9ce8;
extern undefined4 DAT_008f9cf4;
