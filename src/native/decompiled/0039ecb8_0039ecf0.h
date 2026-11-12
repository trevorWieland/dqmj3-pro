#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_001028d4(); extern undefined4 fn_0039e5e0(); extern undefined4 fn_0039e7c4(); extern int * fn_0068897c();
extern undefined4 fn_0068b010(); extern int fn_006be118();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0039f0d8;
