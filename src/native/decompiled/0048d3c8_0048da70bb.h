#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00528598(); extern int fn_0052906c(); extern undefined4 fn_00529b0c(); extern int fn_0052aeb0(); extern int fn_0052b3b8(); extern int fn_0052b914();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern code *DAT_008b64b8; extern code *DAT_008b64bc;
