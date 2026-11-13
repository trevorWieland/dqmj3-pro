#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_0015ece0(); extern undefined4 fn_002ff628(); extern undefined4 fn_0030233c(); extern undefined4 fn_0045bbcc(); extern undefined4 fn_0046beb4(); extern int fn_0048c694();
extern int fn_004b61c8(); extern undefined4 fn_0079abe0(); extern undefined4 fn_0079c308();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_004640e4;
