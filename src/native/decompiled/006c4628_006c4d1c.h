#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_001142a8(); extern undefined4 fn_0013add0(); extern undefined4 fn_001a46f4(); extern bool fn_0025097c(); extern int fn_002fea64();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_006c471c; extern undefined4 DAT_00895bbc;
