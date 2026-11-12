#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00121838(); extern undefined4 fn_001218d4(); extern undefined4 fn_00145b00(); extern undefined4 fn_001482f4(); extern undefined4 fn_0016a43c(); extern int fn_0022eb34();
extern undefined4 fn_002c4694(); extern undefined4 fn_002c471c(); extern undefined4 fn_002feef8(); extern undefined4 fn_003b0f3c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0082e77c; extern undefined4 DAT_00897800; extern undefined4 DAT_00898788;
