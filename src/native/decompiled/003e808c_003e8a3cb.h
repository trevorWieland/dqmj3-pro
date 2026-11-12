#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001480d0(); extern undefined4 fn_001481c8(); extern undefined4 fn_001482f4(); extern undefined4 fn_0016a43c(); extern int fn_0023e194(); extern undefined4 fn_003e8b04();
extern undefined4 fn_006c4cd8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003e8ab4; extern undefined4 DAT_003e8abc; extern undefined4 DAT_003e8ac0; extern undefined4 DAT_008338c4;
extern undefined4 DAT_00859310;
