#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_001638a0(); extern undefined4 fn_00163940(); extern undefined4 fn_0022e4c4(); extern undefined4 fn_002ad000();
extern undefined4 fn_002af684(); extern bool fn_002afc68(); extern undefined1 fn_00660e2c(); extern bool fn_00660e88(); extern undefined1 fn_00660ec0(); extern uint fn_006a7ea4();
extern undefined4 fn_006a99dc(); extern int fn_006b2aa0(); extern undefined4 fn_006f7a5c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0; extern undefined4 DAT_00897804; extern undefined4 UNK_002afc54;
