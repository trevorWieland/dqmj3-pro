#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0015e228(); extern int fn_00524b9c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_001d0040; extern undefined4 DAT_00240082; extern undefined4 DAT_008e3674; extern undefined4 DAT_008e3678;
extern undefined4 DAT_008e368c; extern undefined4 DAT_008e3698; extern undefined4 DAT_008e369c;
