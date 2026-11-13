#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00128788(); extern undefined1 fn_0013ad98(); extern undefined4 fn_0013add0(); extern undefined4 fn_00144df4(); extern undefined4 fn_00145adc(); extern undefined4 fn_00154ae0();
extern undefined4 fn_0016383c(); extern int fn_00176dc0(); extern int fn_00176e70();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e4; extern undefined4 DAT_00897804;
