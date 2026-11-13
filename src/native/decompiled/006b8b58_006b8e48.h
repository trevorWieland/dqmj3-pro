#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern undefined4 fn_0015b064(); extern undefined4 fn_0015b0dc(); extern undefined4 fn_00163868(); extern int fn_0016ba34(); extern undefined4 fn_0023c2a8();
extern undefined4 fn_002feef8(); extern undefined4 fn_0038fee8(); extern undefined4 fn_0038ff40(); extern int fn_006c89fc(); extern int fn_006c8a2c(); extern int fn_006c9504();
extern int fn_006c958c(); extern undefined1 fn_006f6e40(); extern undefined4 fn_006f75ac();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_006b8df0; extern undefined4 DAT_008977e0; extern undefined4 DAT_00897800;
