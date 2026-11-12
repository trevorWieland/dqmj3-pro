#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_0014f2b0(); extern int fn_0015ed58(); extern undefined4 fn_00160094(); extern undefined4 fn_001600c4(); extern undefined4 fn_00160190(); extern undefined4 fn_0045bbcc();
extern undefined4 * fn_004b31c4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0085748c;
