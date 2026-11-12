#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0015b0dc(); extern undefined4 fn_0015b0f8(); extern undefined4 fn_0017d96c(); extern char * fn_00203bc8(); extern undefined4 fn_0022f750(); extern undefined4 fn_003ba4b8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003ba9ac; extern undefined4 DAT_00898214;
