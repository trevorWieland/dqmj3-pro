#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined * fn_00128eac(); extern undefined4 * fn_00128f40(); extern undefined4 * fn_00128fc4(); extern undefined4 fn_0012d6e0(); extern undefined4 fn_00163d44(); extern undefined4 fn_005f6ce8();
extern undefined4 fn_006ad760();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00391fd4; extern undefined4 DAT_008977e0;
