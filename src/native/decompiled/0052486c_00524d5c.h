#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00524ca4(); extern int fn_00524cd4(); extern int fn_00524d5c(); extern int fn_00524dc0(); extern int fn_0052514c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_001100c4; extern undefined4 DAT_00200082; extern undefined4 DAT_0085746c; extern undefined4 DAT_008e3674;
extern undefined4 DAT_008e369c;
