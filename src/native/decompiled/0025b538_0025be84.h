#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern short * fn_001003e0(); extern int fn_001010c8(); extern undefined4 fn_0010b2b4(); extern int fn_00114150(); extern undefined4 fn_00114248(); extern undefined4 fn_0011a314();
extern undefined4 fn_0011a36c(); extern undefined4 fn_0011a3c4(); extern undefined4 fn_00122c48(); extern undefined4 fn_00123d00(); extern undefined4 fn_0013ef80(); extern undefined4 fn_00166824();
extern undefined8 fn_00301a9c(); extern undefined8 fn_00691514();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0088fcb8; extern undefined4 DAT_00892814; extern undefined4 DAT_00892818; extern undefined4 DAT_00897804;
