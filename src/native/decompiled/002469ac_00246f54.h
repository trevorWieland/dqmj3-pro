#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00144834(); extern undefined4 fn_0020bbc4(); extern int fn_00247138(); extern int fn_00247444(); extern undefined4 fn_0024f108(); extern undefined4 fn_0024f870();
extern int * fn_0028aad0(); extern undefined4 fn_002cd49c(); extern undefined4 fn_002e9394(); extern undefined4 fn_002e94f0(); extern int fn_00661570(); extern int fn_006c0028();
extern int fn_006c0114();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897804;
