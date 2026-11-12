#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0022f584(); extern bool fn_002f55f0(); extern int fn_0036c13c(); extern undefined4 fn_0043f144(); extern undefined4 fn_0068974c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005f9780; extern undefined4 DAT_005f979c; extern undefined4 DAT_0084e068;
