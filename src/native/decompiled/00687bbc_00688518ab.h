#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_00162d44(); extern undefined4 fn_0017fd38(); extern undefined4 fn_0017fde4(); extern uint fn_00190fb4(); extern undefined4 fn_001969a4();
extern int fn_002febd8(); extern undefined4 fn_005e8b38(); extern undefined4 fn_005eeda8(); extern undefined4 fn_005ef390(); extern undefined4 fn_005ef524(); extern undefined4 * fn_005efdbc();
extern bool fn_0069ee40(); extern undefined2 fn_006eb368(); extern undefined4 fn_006f7358(); extern undefined4 fn_006f7a84(); extern int fn_006f7a9c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00688280; extern undefined4 DAT_0068828c; extern undefined4 DAT_0068829c; extern undefined4 DAT_00812c8c;
extern undefined4 DAT_008977e0;
