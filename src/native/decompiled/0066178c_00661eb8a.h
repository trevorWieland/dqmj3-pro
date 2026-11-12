#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_00118290(); extern undefined4 fn_00145b00(); extern undefined4 fn_001ad9c4(); extern int fn_001adf18(); extern undefined4 fn_001ae3f8(); extern undefined4 fn_001ae478();
extern undefined4 fn_001ae814(); extern undefined4 fn_001aeba8(); extern int fn_001aec3c(); extern undefined4 fn_00240dc4(); extern undefined4 fn_00661ea0(); extern undefined4 * fn_0066233c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00892804;
