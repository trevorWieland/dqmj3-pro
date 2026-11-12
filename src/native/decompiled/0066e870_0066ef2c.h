#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0010fbf0(); extern undefined4 fn_0012cf70(); extern undefined4 fn_0015e294(); extern bool fn_00453d0c(); extern int fn_0052c610(); extern undefined4 fn_0052cab4();
extern undefined4 fn_0052cec0(); extern undefined4 fn_0052d284(); extern undefined4 fn_0066ec18(); extern bool fn_00671538(); extern undefined4 fn_00671598(); extern undefined4 fn_00673be8();
extern undefined4 fn_00673ce8(); extern undefined4 fn_0067411c(); extern undefined4 fn_0067633c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00898840;
