#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00146590(); extern undefined8 fn_00169f1c(); extern undefined4 fn_0019bc50(); extern bool fn_00655488(); extern byte fn_006f44fc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007f0a34; extern undefined4 DAT_008bf60c; extern undefined4 DAT_008bf610; extern undefined4 DAT_008bf614;
extern undefined4 DAT_008bf618;
