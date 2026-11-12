#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00146590(); extern int fn_00176e18(); extern int fn_00176e70(); extern undefined8 fn_0017821c(); extern undefined4 fn_0061be08(); extern undefined4 fn_0061fc60();
extern undefined4 fn_00628970(); extern undefined4 fn_00628b98(); extern int fn_006f33f0(); extern byte fn_006f44fc(); extern bool fn_006f4850();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007f03d4; extern undefined4 DAT_007f03f8; extern undefined4 DAT_007f092c; extern undefined4 DAT_007f0930;
