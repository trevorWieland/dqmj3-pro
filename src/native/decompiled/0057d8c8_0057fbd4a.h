#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001f74d8(); extern undefined4 fn_001f74ec(); extern undefined4 fn_0025f3f4(); extern undefined4 fn_002c246c(); extern undefined4 fn_002c263c(); extern undefined4 fn_002c2648();
extern undefined4 fn_002c265c(); extern undefined4 fn_002c26a4(); extern undefined4 * fn_002c27a8(); extern undefined1 fn_003f71f4(); extern undefined4 fn_006898b8(); extern undefined4 fn_006899f4();
extern undefined4 fn_00689efc(); extern undefined4 fn_006f6a5c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00841e28; extern undefined4 DAT_00893064; extern undefined4 DAT_008951dc;
