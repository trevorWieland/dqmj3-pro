#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00116fdc(); extern undefined4 * fn_00117008(); extern undefined4 fn_002feef8(); extern undefined4 fn_0052534c(); extern undefined4 fn_00561a9c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00858780; extern undefined4 DAT_008c0614;
