#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00154ac8(); extern undefined4 fn_001c93c8(); extern undefined4 fn_002195bc(); extern undefined4 fn_0021a5a0(); extern undefined4 fn_0021b104(); extern undefined4 fn_0021b84c();
extern undefined4 fn_0021bcf4(); extern undefined4 fn_0021c9f8(); extern undefined4 fn_0021cd38(); extern undefined4 fn_0021cf38(); extern undefined4 fn_0021d9e8(); extern undefined4 fn_0024281c();
extern int fn_00259f5c(); extern undefined4 fn_006bc57c(); extern undefined4 fn_006f637c(); extern undefined4 fn_006f72e0(); extern int fn_006f7770(); extern undefined4 fn_006f7a0c();
extern undefined4 fn_006f7a5c(); extern undefined4 fn_006f7a84();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0021c470; extern undefined4 DAT_0021c47c; extern undefined4 DAT_008977e0; extern undefined4 DAT_00897804;
