#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001f74d8(); extern undefined4 fn_001f74ec(); extern undefined4 fn_0022f584(); extern undefined4 fn_002c98c4(); extern undefined1 * fn_002c9a54(); extern undefined4 fn_002ca330();
extern undefined4 fn_002ca68c(); extern undefined4 fn_00445fb8(); extern undefined4 fn_006896fc(); extern undefined4 fn_0068974c(); extern undefined4 fn_00689818(); extern undefined4 fn_00689824();
extern undefined4 fn_006899f4(); extern int fn_006ba0dc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_002c94a0; extern undefined4 DAT_002ca5c4; extern undefined4 DAT_00895b24; extern undefined4 DAT_00895dec;
extern undefined4 DAT_00897804;
