#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_001638a0(); extern undefined8 fn_0017821c(); extern undefined4 fn_002ff628(); extern int * fn_0035be50(); extern undefined4 fn_0035c240();
extern undefined4 fn_0035ca80(); extern uint fn_0057a228(); extern undefined4 fn_0057a2dc(); extern undefined1 * fn_0057a634(); extern undefined4 fn_005adb8c(); extern undefined4 fn_00689824();
extern undefined4 fn_0068ab44(); extern int fn_006c2a50();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008c761b;
