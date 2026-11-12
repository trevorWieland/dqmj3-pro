#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_001010c8(); extern undefined4 * fn_00301f50(); extern bool fn_0044c844(); extern int fn_0044ce6c(); extern undefined4 fn_004539f4(); extern undefined4 fn_00453a64();
extern undefined4 fn_00453a8c(); extern undefined4 fn_00453ac8(); extern undefined4 fn_006cf9a4(); extern undefined4 fn_006d02f4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0089a638; extern undefined4 DAT_0089a63c; extern undefined4 DAT_e0810bf8; extern undefined4 DAT_e0e10bfd;
extern undefined4 s_ERROR_0089a626;
