#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined4 * fn_0028e3b4(); extern undefined4 fn_0028e718(); extern undefined4 fn_0028eaf4(); extern undefined4 fn_0028fb1c();
extern undefined4 fn_002feef8(); extern undefined4 fn_006896e0(); extern undefined4 fn_00689c30(); extern undefined4 fn_0068aab0(); extern undefined4 fn_0069d3a0(); extern bool fn_006f69f4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0081e218;
