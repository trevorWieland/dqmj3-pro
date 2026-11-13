#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_00110518(); extern undefined4 fn_00145b00(); extern undefined4 fn_001482f4(); extern undefined4 fn_00159f34(); extern undefined4 fn_00163868(); extern undefined4 fn_0016a43c();
extern undefined8 fn_0017821c(); extern undefined4 * fn_002916ec(); extern undefined4 fn_002cd49c(); extern undefined4 fn_006f9f20();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 PTR_FUN_0081d5b4;
