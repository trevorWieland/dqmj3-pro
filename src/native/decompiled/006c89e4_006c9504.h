#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern uint fn_00147e6c(); extern undefined4 fn_00163940(); extern undefined8 fn_00169f1c(); extern int fn_001746f4();
extern int fn_00176dc0(); extern int fn_001d4f28(); extern undefined1 fn_00660ec0(); extern int fn_00661010(); extern int fn_006afe90(); extern int fn_006c9754();
extern undefined4 fn_0079e460(); extern undefined4 fn_0079e608();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0;
