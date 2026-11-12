#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001481c8(); extern undefined4 fn_001482f4(); extern undefined4 fn_00159f34(); extern undefined4 fn_0016a43c(); extern undefined4 fn_00178f9c(); extern undefined4 fn_00190d50();
extern undefined4 fn_001923e0(); extern char * fn_0035afb4(); extern undefined4 fn_0035b638(); extern int fn_006c89fc(); extern undefined4 fn_006f6fc4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0035afa4; extern undefined4 DAT_0035b454; extern undefined4 DAT_0035b464; extern undefined4 DAT_007bddf4;
extern undefined4 DAT_008977e0; extern undefined4 DAT_0089a930;
