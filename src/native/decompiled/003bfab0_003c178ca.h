#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00145b00(); extern undefined4 fn_001482f4(); extern undefined4 fn_00148348(); extern undefined4 fn_001f74d8(); extern int fn_002298d8();
extern undefined4 fn_0022ccb4(); extern int * fn_00242324(); extern undefined4 fn_0039b600(); extern undefined4 fn_0039bdf4(); extern undefined4 fn_0039be98(); extern undefined4 fn_0039c4c8();
extern undefined4 fn_003bfe38(); extern undefined4 fn_003c0fcc(); extern undefined4 fn_003e5aa8(); extern undefined4 fn_006899f4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00894d28; extern undefined4 DAT_00894e18; extern undefined4 DAT_00894e1c;
extern undefined4 DAT_00894e20; extern undefined4 DAT_00897804; extern undefined4 PTR_FUN_0082f898;
