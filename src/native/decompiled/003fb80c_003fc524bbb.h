#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern uint fn_00101a50(); extern undefined4 fn_00145b00(); extern undefined4 fn_0022f584(); extern undefined4 fn_00290ae4(); extern undefined4 fn_0031c040(); extern undefined4 fn_0031c7d0();
extern undefined4 fn_0031ca5c(); extern undefined4 fn_00385b60(); extern undefined4 fn_003e2a98(); extern undefined4 * fn_003fc6fc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003fc690; extern undefined4 DAT_003fc694; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00894d28;
