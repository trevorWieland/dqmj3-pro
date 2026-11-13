#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined4 fn_0028e264(); extern undefined4 fn_002c3de4(); extern undefined4 fn_002ff628();
extern undefined4 fn_005c8a6c(); extern undefined4 fn_005ce8b4(); extern undefined4 fn_005ceb40(); extern undefined4 fn_005cef64(); extern undefined4 fn_00660c64();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0084afdc; extern undefined4 DAT_008c7605; extern undefined4 DAT_008c7632;
