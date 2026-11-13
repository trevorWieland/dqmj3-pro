#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_001f7cac(); extern undefined4 fn_00292108(); extern bool fn_002940c0(); extern undefined4 fn_002c3d68(); extern undefined4 fn_003c4280();
extern undefined4 fn_003e6b34(); extern undefined4 fn_003e6f38(); extern undefined4 fn_003e6fc0(); extern undefined4 fn_003e7084(); extern undefined4 fn_006899f4(); extern undefined4 fn_00689b18();
extern int fn_006cb994(); extern undefined1 fn_006f6a6c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c;
