#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_00146590(); extern undefined4 fn_001482f4(); extern undefined4 fn_00159f34(); extern undefined4 fn_0016a43c(); extern undefined4 fn_0022f584();
extern undefined4 fn_00376298(); extern undefined4 fn_006739cc(); extern undefined4 fn_00689878(); extern undefined4 fn_00747f94(); extern undefined4 fn_0074824c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00375fa0; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00897830; extern undefined4 DAT_00897850;
