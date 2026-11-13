#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0025dbc4(); extern undefined4 * fn_0025dea8(); extern undefined4 fn_0025e31c(); extern undefined4 fn_0043c608(); extern undefined4 fn_00689210();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005b8188; extern undefined4 DAT_007c4dbc; extern undefined4 DAT_00848c14; extern undefined4 DAT_00892b20;
