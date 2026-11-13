#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0016ba24(); extern undefined4 fn_0016bb8c(); extern undefined4 fn_0016e2f8(); extern undefined1 fn_001759e8(); extern undefined4 fn_0019813c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00163e40; extern undefined4 DAT_007edcb4; extern undefined4 DAT_00897804;
