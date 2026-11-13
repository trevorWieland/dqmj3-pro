#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern undefined4 fn_001638a0(); extern undefined4 fn_001daaf8(); extern undefined4 fn_001db0b0(); extern undefined4 fn_001db0c0(); extern undefined4 fn_001db900();
extern undefined4 fn_001dbc64(); extern undefined4 fn_002113c8(); extern undefined4 fn_0021197c(); extern bool fn_00211f24(); extern undefined4 fn_00303afc(); extern undefined4 fn_006c70f4();
extern undefined4 fn_006c71b8(); extern undefined4 fn_006c72f0(); extern undefined4 fn_006f72e0(); extern undefined4 fn_006f7a84(); extern undefined4 fn_00773148(); extern undefined4 fn_007738b0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0082e254; extern undefined4 DAT_008918ac; extern undefined4 DAT_008977e0; extern undefined4 DAT_008c62fc;
extern undefined4 DAT_008c8e78; extern undefined4 DAT_008f9e2c; extern undefined4 DAT_008f9e30; extern undefined4 DAT_008f9e34;
