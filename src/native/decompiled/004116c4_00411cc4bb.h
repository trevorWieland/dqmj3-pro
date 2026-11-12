#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined8 fn_00169f1c(); extern undefined4 fn_001c9d44(); extern undefined4 fn_001c9d80(); extern undefined4 fn_001f74ec(); extern undefined4 fn_002b20a4(); extern undefined4 fn_002c3df4();
extern undefined4 fn_002ff628(); extern undefined4 fn_0031b3c4(); extern undefined4 fn_0031b474(); extern undefined4 fn_0068ab44();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00893ddc; extern undefined4 DAT_008c7653;
