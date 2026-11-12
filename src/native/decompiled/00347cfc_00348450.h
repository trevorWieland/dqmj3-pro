#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern int fn_00172c98(); extern undefined4 fn_0017d96c(); extern undefined4 fn_002e4414(); extern undefined4 * fn_003064c8();
extern undefined4 fn_0036a948(); extern undefined4 fn_0069e748();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003482bc; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00825354;
