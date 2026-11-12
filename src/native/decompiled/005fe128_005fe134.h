#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0020bbc4(); extern int fn_006610b0(); extern int fn_00661270(); extern int fn_006612ec(); extern int fn_006613b4(); extern int fn_00661770();
extern int fn_0066178c(); extern int fn_006bf5ec(); extern undefined4 fn_006bfe90();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007c42c0;
