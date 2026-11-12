#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern bool fn_001296d0(); extern undefined4 fn_00145b00(); extern undefined4 fn_0025fc8c(); extern int fn_003b7110(); extern int fn_003dcee4(); extern undefined4 fn_0066e13c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008221f0; extern undefined4 DAT_00822208; extern undefined4 DAT_00897850;
