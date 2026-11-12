#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_001f74ec(); extern undefined4 fn_00570aac(); extern undefined4 fn_006899f4(); extern undefined4 fn_00689d04(); extern undefined4 fn_0068ab44();
extern bool fn_006ba220(); extern undefined4 fn_006f72c8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00894b34; extern undefined4 DAT_008977e0;
