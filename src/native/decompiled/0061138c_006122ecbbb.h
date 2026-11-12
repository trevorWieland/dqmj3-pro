#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0010887c(); extern undefined4 fn_001088e0(); extern undefined4 fn_001218d4(); extern bool fn_00154a6c(); extern undefined4 fn_00159f34(); extern undefined4 fn_002feef8();
extern undefined4 * fn_0061564c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007cbe80; extern undefined4 DAT_00897800; extern undefined4 DAT_0089878c;
