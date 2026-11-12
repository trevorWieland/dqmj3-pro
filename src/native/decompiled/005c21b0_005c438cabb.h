#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_002c3d68(); extern undefined4 fn_002f6784(); extern undefined4 fn_002f6c88(); extern undefined4 fn_002f6e1c(); extern undefined1 fn_002f7248(); extern undefined4 fn_002f7e70();
extern undefined4 fn_002f8170(); extern undefined4 fn_003ca138();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005c317c; extern undefined4 DAT_008971bc;
