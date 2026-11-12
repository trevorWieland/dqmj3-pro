#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_001482f4(); extern undefined4 fn_0016a43c(); extern undefined4 fn_002bf2cc(); extern undefined4 fn_002c07c0(); extern undefined4 fn_002c07e4();
extern undefined4 fn_002c0bc0(); extern undefined4 fn_002c2070(); extern undefined4 fn_002feef8(); extern undefined4 fn_002ff628(); extern undefined4 fn_006898b8(); extern undefined4 fn_006899f4();
extern undefined4 fn_0068ab44();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008c7655;
