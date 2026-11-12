#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int * fn_001827b0(); extern undefined4 fn_00190d50(); extern undefined4 fn_0028e264();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00376310; extern undefined4 DAT_007bb534; extern undefined4 DAT_008287b8;
