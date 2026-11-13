#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001d96a0(); extern undefined4 fn_001d9f6c(); extern undefined4 fn_001da0b0(); extern undefined4 fn_001da39c(); extern undefined4 fn_0021ed50(); extern undefined4 fn_002d8890();
extern undefined4 fn_006f72b4(); extern undefined4 fn_006f756c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007bd8c8; extern undefined4 DAT_008977e0;
