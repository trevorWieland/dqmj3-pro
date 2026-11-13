#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001006ac(); extern undefined4 fn_001008c4(); extern int fn_00100b58(); extern int fn_00100fc6(); extern undefined4 fn_0012d6a4(); extern undefined4 fn_0012d73c();
extern undefined4 fn_0012f208(); extern undefined1 fn_00145aac(); extern undefined4 fn_00145ac0(); extern undefined8 fn_0017821c(); extern uint fn_00179fc4(); extern undefined4 fn_0020ddfc();
extern undefined4 fn_0020e3a4(); extern undefined4 fn_0020e628(); extern undefined4 fn_0020fd10(); extern undefined4 fn_00210174(); extern undefined4 fn_002317d8(); extern undefined4 fn_0025f3f4();
extern undefined4 fn_002a4b8c(); extern undefined4 fn_002feef8(); extern undefined4 fn_002ff628(); extern undefined8 fn_00301a9c(); extern undefined4 fn_0042e9bc(); extern undefined4 fn_005f0938();
extern int fn_005fe128(); extern int fn_006610b0(); extern int fn_00661270(); extern int fn_006612ec(); extern int fn_006613b4(); extern int fn_00661770();
extern int fn_0066178c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008c7611; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
