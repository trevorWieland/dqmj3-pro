#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00121838(); extern undefined4 fn_001218d4(); extern undefined4 fn_001480d0(); extern undefined4 fn_001481c8();
extern undefined4 fn_001482f4(); extern undefined4 fn_00166824(); extern undefined4 fn_0016a43c(); extern undefined4 fn_001f74d8(); extern undefined4 fn_00289bac(); extern undefined4 fn_00289c54();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003e99d0; extern undefined4 DAT_003e99d8; extern undefined4 DAT_003e99dc; extern undefined4 DAT_00895c20;
extern undefined4 DAT_00897800;
