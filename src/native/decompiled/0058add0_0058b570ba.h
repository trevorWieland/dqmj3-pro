#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 * fn_0025dea8(); extern undefined4 * fn_0039b1e0(); extern void fn_0058b480(); extern undefined4 fn_0058b4e4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007c4db4; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00843918; extern undefined4 DAT_00843a84;
