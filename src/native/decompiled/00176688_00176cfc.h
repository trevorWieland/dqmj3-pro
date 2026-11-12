#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0014ea80(); extern undefined4 fn_00170704(); extern undefined4 fn_001707b4(); extern undefined * fn_00172fc4(); extern undefined4 fn_00176c24(); extern undefined4 * fn_00182f2c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00200080;
