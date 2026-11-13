#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_0022f584(); extern undefined4 fn_003f71d0(); extern undefined4 fn_00444384(); extern void fn_0058c8bc(); extern undefined4 fn_006899f4();
extern undefined4 fn_0068ab44(); extern bool fn_0074919c(); extern undefined4 fn_007491f0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0058bed0; extern undefined4 DAT_0058bef0; extern undefined4 DAT_0058c914; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_00843ccc;
