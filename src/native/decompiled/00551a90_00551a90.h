#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int * fn_0017d948(); extern undefined4 fn_0017d96c(); extern undefined4 fn_0017dcb0(); extern undefined4 fn_0018a644();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007d8878; extern unsigned char *DAT_0089a918; extern undefined4 s_;
