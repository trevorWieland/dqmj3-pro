#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00162d44(); extern undefined4 fn_00162d54(); extern undefined8 fn_0017821c(); extern undefined4 fn_0017fde4(); extern undefined4 fn_005ef320(); extern undefined4 fn_00662a34();
extern undefined4 fn_00662bd0(); extern undefined4 fn_00662d30(); extern undefined4 fn_00663994(); extern undefined4 fn_00663ce4(); extern undefined4 fn_00663dac(); extern undefined4 fn_006642e8();
extern undefined4 fn_006643f4(); extern undefined4 fn_00664464(); extern undefined4 fn_006649e0(); extern undefined4 fn_00664a8c(); extern char * fn_00664a98(); extern undefined4 fn_0068c694();
extern bool fn_006ebf84(); extern int fn_006f5d90();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e8;
