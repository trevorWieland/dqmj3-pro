#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101d80(); extern short * fn_0010313a(); extern short * fn_00103156(); extern undefined4 fn_00145ac0(); extern undefined4 fn_001638a0(); extern undefined4 fn_0017fde4();
extern undefined4 fn_00190d50(); extern undefined4 fn_001ccc2c(); extern undefined4 fn_0022f5d8(); extern int fn_0023040c(); extern undefined4 fn_0023051c(); extern undefined4 fn_00231ca0();
extern undefined4 fn_0028c0d0(); extern undefined4 fn_0028c0e0(); extern bool fn_0028c2e8(); extern undefined4 fn_0028fad0(); extern undefined4 fn_0068c694(); extern undefined4 fn_0068ef00();
extern bool fn_006ebf84();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0068f0cc; extern undefined4 DAT_0068f0d8; extern undefined4 DAT_008511c0; extern undefined4 DAT_008977e8;
