#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00656bb8(); extern undefined4 fn_00656ca4(); extern undefined4 fn_006cf94c(); extern void fn_006f4ecc(); extern void fn_006f4f38(); extern int fn_006f5134();
extern int fn_006f51d0(); extern int fn_006f529c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008c06e0;
