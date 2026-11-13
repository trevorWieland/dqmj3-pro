#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0015a4c4(); extern undefined4 fn_00226fe4(); extern undefined4 fn_0023d448(); extern undefined4 fn_0023d964(); extern undefined4 fn_002fe864(); extern undefined4 fn_00300620();
extern undefined4 fn_0030080c(); extern undefined4 fn_003b68c8(); extern undefined4 fn_00693484();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0; extern unsigned char *DAT_00897808; extern unsigned char *DAT_0089780c; extern unsigned char *DAT_00897810;
