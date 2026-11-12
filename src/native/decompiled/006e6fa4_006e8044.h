#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00174828(); extern undefined8 fn_0017821c(); extern byte fn_001c2ef4(); extern undefined4 fn_001cab7c(); extern undefined4 fn_0020bbc4(); extern undefined4 fn_00296630();
extern undefined4 fn_002ff628(); extern undefined4 * fn_00301f50(); extern undefined4 fn_006bfe90(); extern undefined4 fn_00787f6c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e4; extern undefined4 DAT_008c760a;
