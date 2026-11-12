#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00150c1c(); extern int * fn_0017d948(); extern undefined4 fn_00194ee4(); extern undefined4 fn_0019fb94();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00857bbc; extern undefined4 DAT_0089a928; extern undefined4 PTR_FUN_00857b60;
