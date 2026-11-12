#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00146578(); extern undefined4 fn_00157994(); extern undefined4 fn_006f96b8(); extern undefined4 fn_006fb25c(); extern undefined4 fn_00729300(); extern undefined4 fn_007458f4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0089a51c; extern undefined4 DAT_008bfab0;
