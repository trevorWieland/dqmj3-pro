#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_002273f0(); extern undefined4 fn_00228b34(); extern undefined4 fn_002eb72c(); extern undefined4 fn_00370a70(); extern undefined4 fn_0052102c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00867230; extern undefined4 DAT_0086a15c; extern undefined4 DAT_00895be0; extern unsigned char *DAT_00897894;
