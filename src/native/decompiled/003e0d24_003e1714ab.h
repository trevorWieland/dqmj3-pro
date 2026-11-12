#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined4 fn_0022ccb4(); extern undefined4 fn_0022cdb4(); extern undefined1 fn_00246f54(); extern undefined4 fn_0036e8fc();
extern int * fn_0036e9e4(); extern int * fn_0036eaa8(); extern undefined4 fn_0039b5d8(); extern undefined4 fn_003e0ff4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00827e28; extern undefined4 DAT_008323ac; extern undefined4 DAT_00895710;
extern undefined4 DAT_00895714; extern undefined4 DAT_00895718;
