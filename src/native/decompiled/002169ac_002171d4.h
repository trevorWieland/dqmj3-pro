#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined1 fn_0013ad98(); extern undefined8 fn_0017821c(); extern undefined4 fn_0017fe34(); extern void fn_002171d4();
extern bool fn_005fe888(); extern undefined4 fn_006b0258(); extern undefined4 fn_006bb544(); extern undefined4 fn_006f7358(); extern undefined4 fn_006f7508(); extern undefined4 fn_007b088c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007be374; extern undefined4 DAT_008977e0;
