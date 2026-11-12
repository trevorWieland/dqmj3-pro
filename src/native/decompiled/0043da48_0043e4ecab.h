#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001f74ec(); extern undefined4 fn_0022f584(); extern undefined4 fn_002c4694(); extern undefined4 fn_0068974c(); extern undefined4 fn_006899f4(); extern undefined4 fn_0068ab44();
extern int fn_006b4f84(); extern int fn_006b83e4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0043e17c; extern undefined4 DAT_0043e1a4; extern undefined4 DAT_0043e1d0; extern undefined4 DAT_0043e1f0;
extern undefined4 DAT_0083d22c; extern undefined4 DAT_00894230; extern undefined4 DAT_00895964; extern undefined4 DAT_00897804;
