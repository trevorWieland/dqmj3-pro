#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_002c4694(); extern int fn_002f65b4(); extern int fn_002f6de0(); extern int fn_002f7930(); extern undefined4 fn_005a56e4(); extern undefined4 fn_005a5ad0();
extern undefined4 fn_005a5dc0(); extern undefined4 fn_005a5f50();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005cc45c; extern undefined4 DAT_0084b744;
