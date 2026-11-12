#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_00158f6c(); extern undefined4 fn_002fecec(); extern undefined4 fn_0030233c(); extern undefined4 fn_00736060(); extern uint fn_00736384(); extern uint fn_00736734();
extern undefined4 fn_00739c74(); extern void fn_0073aa84(); extern void fn_0073aa8c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007eabfc; extern undefined4 DAT_007eabfe; extern undefined4 DAT_007eac00; extern undefined4 DAT_007eac02;
