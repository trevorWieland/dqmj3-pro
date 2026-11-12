#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined1 fn_00163cbc(); extern undefined4 fn_001ad020(); extern undefined4 fn_0021718c(); extern undefined4 fn_0057a7ec(); extern undefined4 * fn_0057a7f0();
extern undefined4 fn_005ae400(); extern undefined4 fn_005ae5a4(); extern undefined4 fn_005f8f48(); extern undefined4 fn_006899f4(); extern int fn_006b0d10();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0084dda0; extern undefined4 DAT_0084deec;
