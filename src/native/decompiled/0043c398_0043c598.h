#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0020bbc4(); extern undefined4 fn_003979f0(); extern int fn_00397a0c(); extern undefined4 fn_00689824(); extern undefined4 fn_006899f4(); extern undefined4 fn_0068ab44();
extern uint fn_0068f708(); extern int fn_0068f7c4(); extern int fn_006c02d4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0083cca0;
