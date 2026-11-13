#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00162d54(); extern undefined4 fn_001c5388(); extern undefined4 fn_001dc9d8(); extern undefined4 fn_001e11b0(); extern undefined4 fn_001e2804(); extern undefined4 fn_001e99c8();
extern undefined4 fn_001ea42c(); extern undefined4 fn_0023f034(); extern undefined4 fn_002feef8(); extern bool fn_006a7f8c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0;
