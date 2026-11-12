#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00112f6c(); extern undefined4 fn_00120f74(); extern undefined4 fn_00121084(); extern undefined4 fn_001210e8(); extern undefined4 fn_001221d4(); extern undefined4 fn_00129004();
extern undefined4 fn_0013af30(); extern undefined4 fn_001638a0(); extern undefined4 fn_001fa3ac(); extern undefined4 fn_0028a284(); extern undefined4 fn_0028a68c(); extern int * fn_0028aad0();
extern undefined4 fn_002feef8(); extern int fn_006b8478(); extern undefined4 fn_006b85d0(); extern undefined4 fn_006f7998();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0081c238; extern undefined4 DAT_008977d4; extern undefined4 DAT_008977e0; extern undefined4 DAT_00897804;
