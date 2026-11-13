#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00119b40(); extern bool fn_001296d0(); extern undefined4 fn_002feef8(); extern int fn_00524a44(); extern undefined4 fn_005252ec();
extern undefined4 fn_00666a24(); extern void fn_0066dd80(); extern undefined4 fn_0066e130(); extern undefined4 fn_0066e41c(); extern undefined4 fn_0066eb80(); extern undefined4 fn_0066ec10();
extern undefined4 fn_0066ec18(); extern undefined4 fn_00673b84(); extern undefined4 fn_00673be8(); extern undefined4 fn_00673cb8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00859b90; extern undefined4 DAT_00859e58; extern undefined4 DAT_00898840;
