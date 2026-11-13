#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00163988(); extern undefined4 fn_00182988(); extern undefined4 fn_001f73a0(); extern int fn_0024222c();
extern undefined4 fn_0028e650(); extern undefined4 fn_002d37e8(); extern undefined4 fn_002e3c08(); extern undefined4 fn_002e3d70(); extern undefined4 fn_002e3e30(); extern undefined4 fn_002e4004();
extern undefined4 fn_002e40d8(); extern undefined4 * fn_002e42dc(); extern undefined4 * fn_002e4388(); extern void fn_0036aa68(); extern int fn_006b4f84();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008964f4; extern undefined4 DAT_008977e4; extern undefined4 DAT_00897804; extern undefined4 DAT_00897808;
extern undefined4 DAT_0089780c; extern undefined4 PTR_FUN_008276a8;
