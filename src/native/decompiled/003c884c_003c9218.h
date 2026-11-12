#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_00159f34(); extern undefined4 fn_00176d68(); extern undefined4 fn_001853ec(); extern undefined4 fn_001854ac(); extern undefined4 fn_001cb048();
extern undefined4 fn_001cb55c(); extern undefined4 * fn_001cb644(); extern undefined4 fn_0020bbc4(); extern undefined4 fn_00243e04(); extern undefined4 fn_00243e8c(); extern undefined4 fn_00243f58();
extern undefined4 fn_0024405c(); extern undefined4 * fn_002440dc(); extern undefined4 fn_0029432c(); extern undefined8 fn_00301a9c(); extern undefined4 fn_00303afc(); extern undefined4 fn_003c866c();
extern undefined4 fn_005456f4(); extern undefined4 * fn_0068ab5c(); extern undefined4 fn_0069d9f0(); extern undefined4 fn_006b64b0(); extern int fn_006be0f4(); extern int fn_006be118();
extern int fn_006bfda8(); extern undefined4 fn_006bfe90(); extern uint * fn_006dcd40(); extern undefined4 fn_0079090c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007ba154; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00830968; extern undefined4 DAT_00830a78;
extern undefined4 DAT_00897804; extern undefined4 DAT_008c62fc; extern undefined4 DAT_008f9e2c; extern undefined4 DAT_008f9e30;
extern undefined4 DAT_008f9e34; extern undefined4 s_reactor_loop_008c62c6;
