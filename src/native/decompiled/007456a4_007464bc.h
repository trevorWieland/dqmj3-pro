#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_001010c8(); extern bool fn_001296d0(); extern undefined4 fn_00145b00(); extern undefined4 fn_00146590(); extern undefined4 fn_001a46f4(); extern undefined4 fn_0025fc8c();
extern int * fn_0028aad0(); extern int fn_002a1be0(); extern undefined8 fn_00301a9c(); extern undefined4 * fn_00301f50(); extern undefined4 fn_005fccf4(); extern undefined4 fn_005fdf34();
extern undefined4 fn_0066e13c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008221d8; extern undefined4 DAT_00897804; extern undefined4 DAT_00897850;
extern undefined4 DAT_008bf538; extern undefined4 DAT_008bf539; extern undefined4 DAT_008bf53a; extern undefined4 DAT_008bf53b;
extern undefined4 DAT_008bf53c; extern undefined4 DAT_008bf53d;
