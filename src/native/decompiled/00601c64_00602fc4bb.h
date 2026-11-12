#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_001f74d8(); extern undefined4 fn_0043cd80(); extern undefined4 fn_0043d370(); extern undefined4 * fn_005d4f1c(); extern void fn_00602fc4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0060300c; extern undefined4 DAT_00812c8c; extern undefined4 DAT_0084ef48; extern undefined4 DAT_0084f090;
extern undefined4 DAT_0085a9f4; extern undefined4 DAT_00893b10; extern undefined4 DAT_00899218;
