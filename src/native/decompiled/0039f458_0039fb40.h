#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_001028d4(); extern undefined4 fn_00229d54(); extern undefined4 fn_002c4694(); extern undefined4 fn_002c471c();
extern undefined4 * fn_00301f50(); extern int * fn_00688920(); extern int * fn_0068897c(); extern undefined4 fn_00689210();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0039f9a0; extern undefined4 DAT_0039f9b4; extern undefined4 DAT_0039f9c8; extern undefined4 DAT_0039f9d8;
extern undefined4 DAT_0082d404;
