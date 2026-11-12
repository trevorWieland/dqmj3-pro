#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern int fn_0024222c(); extern undefined4 fn_002c3d68(); extern undefined4 fn_002c3de4();
extern undefined4 * fn_0039a1d8(); extern undefined4 fn_00416e5c(); extern undefined4 fn_006899f4(); extern undefined4 fn_0068ab44(); extern int fn_006b4f84();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0082c2e8; extern undefined4 DAT_00897804;
