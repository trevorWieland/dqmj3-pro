#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_001638a0(); extern undefined4 fn_0016a43c(); extern undefined4 fn_0018963c(); extern undefined4 fn_001caa80(); extern undefined4 fn_0025e31c();
extern undefined4 fn_0025e378(); extern undefined4 fn_0025e7cc(); extern undefined4 * fn_0025e920(); extern undefined4 fn_002ff628(); extern longlong fn_00300f74(); extern undefined4 fn_003138f0();
extern undefined4 fn_0038d4c4(); extern undefined4 * fn_0038ddac(); extern undefined4 fn_003d0bac();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00831194; extern undefined4 DAT_00859410; extern undefined4 DAT_008c765f;
