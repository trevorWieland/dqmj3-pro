#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_001638a0(); extern undefined8 fn_0017821c(); extern undefined4 fn_0020bbc4(); extern undefined4 fn_0025f3f4(); extern undefined4 fn_002ff628();
extern int * fn_0035be50(); extern undefined4 fn_0035c240(); extern undefined4 fn_0035c980(); extern uint fn_0057a228(); extern undefined1 * fn_0057a634(); extern undefined4 fn_0057af20();
extern undefined4 fn_00689efc(); extern int fn_006ba274(); extern undefined4 fn_006ba284(); extern int fn_006bf5bc(); extern int fn_006c0028();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008c761b;
