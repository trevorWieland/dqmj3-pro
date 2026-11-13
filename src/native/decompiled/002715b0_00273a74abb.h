#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0010887c(); extern undefined4 fn_00159f34(); extern undefined4 fn_00271e64();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00271f8c; extern undefined4 DAT_00271f9c; extern undefined4 DAT_00271fac; extern undefined4 DAT_002755c0;
extern undefined4 DAT_00276148; extern undefined4 DAT_00861a48; extern undefined4 DAT_008921e0;
