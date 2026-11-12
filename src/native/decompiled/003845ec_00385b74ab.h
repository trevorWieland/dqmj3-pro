#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001f74ec(); extern undefined4 fn_00410d14(); extern undefined4 * fn_004111d0(); extern undefined4 fn_006899f4(); extern undefined4 fn_0068ab44(); extern undefined4 fn_006ccfd4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008299a0; extern undefined4 DAT_008939d8;
