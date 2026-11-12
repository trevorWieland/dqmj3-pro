#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 * fn_00118290(); extern undefined4 fn_0011c184(); extern undefined4 fn_0012d6a4(); extern undefined4 fn_0012d73c();
extern undefined1 fn_00145aac(); extern undefined4 fn_00145ac0(); extern undefined8 fn_0017821c(); extern undefined4 fn_002106cc(); extern uint fn_00211d58(); extern uint fn_00211dc8();
extern undefined4 fn_0026e744(); extern undefined4 fn_0026e8b0(); extern undefined4 fn_0026e94c(); extern undefined4 fn_00303afc(); extern undefined4 fn_00336a28(); extern undefined4 fn_00337750();
extern undefined1 * fn_00337790(); extern undefined4 fn_00337ccc(); extern undefined4 fn_00337d5c(); extern undefined4 fn_005dfa90(); extern undefined4 fn_005dfc48(); extern undefined4 fn_005f4484();
extern bool fn_006c0e58(); extern bool fn_006c0e8c(); extern undefined4 fn_006e9e34(); extern undefined4 fn_006ec94c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0026f020; extern undefined4 DAT_008977e0; extern undefined4 DAT_008c62fc; extern undefined4 DAT_008f9e2c;
extern undefined4 DAT_008f9e30; extern undefined4 DAT_008f9e34;
