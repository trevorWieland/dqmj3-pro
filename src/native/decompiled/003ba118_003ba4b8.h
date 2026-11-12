#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined * fn_00128eac(); extern int fn_0016ba34(); extern undefined4 fn_001f7510(); extern undefined4 fn_0036c5f4(); extern undefined4 fn_00689bd0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00893ee8; extern undefined4 DAT_00893eec; extern undefined4 DAT_008942d0; extern undefined4 DAT_00897800;
