#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern uint fn_00101a50(); extern undefined4 fn_001287d4(); extern undefined4 fn_0013ef80(); extern undefined4 fn_0015b0dc(); extern undefined4 fn_00163940(); extern bool fn_001667e0();
extern undefined4 fn_0016a50c(); extern undefined4 fn_0016a82c(); extern int fn_0016b874(); extern int fn_001746dc(); extern int fn_001746f4(); extern undefined4 fn_00174828();
extern undefined4 fn_00174834(); extern undefined4 fn_00174858(); extern undefined8 fn_0017821c(); extern undefined4 fn_00190d50(); extern undefined4 fn_001caca8(); extern undefined4 fn_00230e1c();
extern int fn_00242bd4(); extern undefined4 fn_0028eac8(); extern undefined4 fn_002feca8(); extern undefined4 * fn_00301f50(); extern undefined4 fn_0038df80(); extern undefined4 fn_005273d8();
extern uint fn_005f5c50(); extern int fn_00607b14(); extern int fn_0069cd0c(); extern undefined4 fn_006a7b78();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00000001; extern undefined4 DAT_00812c8c; extern undefined4 DAT_0081d724; extern undefined4 DAT_008977e4;
extern undefined4 PTR_DAT_00890248; extern undefined4 UNK_007cc503; extern undefined4 UNK_007cc513;
