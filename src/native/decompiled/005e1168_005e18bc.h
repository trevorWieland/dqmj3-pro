#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_0012b2f0(); extern undefined4 fn_0012b574(); extern undefined4 * fn_0012bc84(); extern undefined4 fn_00143a58();
extern undefined4 fn_00143ac8(); extern undefined4 fn_00145b00(); extern undefined4 fn_00153d6c(); extern undefined4 fn_005e0a8c(); extern undefined4 fn_005e0a98();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00858968;
