#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00149390(); extern undefined4 fn_00149534(); extern undefined4 fn_0015b414(); extern undefined4 fn_001638a0(); extern int fn_0016561c(); extern undefined4 fn_0017484c();
extern undefined4 fn_00182994(); extern undefined4 fn_001ec30c(); extern undefined4 fn_001f52f0(); extern undefined4 fn_00311598(); extern undefined4 fn_006be4c8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0; extern undefined4 DAT_008977e4;
