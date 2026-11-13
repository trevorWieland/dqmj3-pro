#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_001480d0(); extern undefined4 fn_001481c8(); extern undefined4 fn_001482f4(); extern undefined4 fn_0016a43c(); extern void fn_003cc224();
extern undefined4 * fn_003ccfa4(); extern undefined4 fn_00689930(); extern undefined4 * fn_0068ab5c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003cc2d4; extern undefined4 DAT_003cc2dc; extern undefined4 DAT_003cc2e0; extern undefined4 DAT_003cc428;
extern undefined4 DAT_003cc430; extern undefined4 DAT_003cc434; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00830be4;
extern undefined4 DAT_00830cf4;
