#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_0011dda8(); extern undefined4 fn_00144834(); extern undefined4 fn_00154ac8(); extern undefined4 fn_001f7350(); extern undefined4 fn_001f7438();
extern undefined4 fn_001f748c(); extern undefined4 fn_001f7624(); extern undefined4 * fn_001f7e18(); extern undefined4 fn_001f82ac(); extern undefined4 fn_00246e00(); extern undefined4 fn_00246e68();
extern int * fn_00246e74(); extern undefined1 fn_00246ec4(); extern undefined4 fn_0028e434(); extern undefined4 fn_002908c8(); extern undefined4 fn_002cd1dc(); extern undefined4 fn_002cd288();
extern undefined4 * fn_002cd364(); extern undefined4 fn_002fb61c(); extern undefined4 fn_006b5424(); extern undefined4 fn_006f7a70();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007bd7bc; extern undefined4 DAT_007bd820; extern undefined4 DAT_007bd884; extern undefined4 DAT_007bde18;
extern undefined4 DAT_00821650; extern undefined4 DAT_00821664; extern undefined4 DAT_008912a0; extern undefined4 DAT_008977e0;
extern undefined4 DAT_00897804; extern undefined4 PTR_FUN_00821634;
