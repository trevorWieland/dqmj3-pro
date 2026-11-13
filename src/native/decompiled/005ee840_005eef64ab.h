#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00117528(); extern undefined4 fn_00142c80(); extern undefined4 fn_00143a58(); extern undefined4 fn_00143ac8(); extern undefined4 fn_00145b00(); extern int fn_001539a0();
extern undefined4 fn_002feef8(); extern undefined4 * fn_005e762c(); extern undefined4 fn_005ee918();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00858da8;
