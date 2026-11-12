#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100b58(); extern int fn_001010c8(); extern undefined4 fn_0011c184(); extern undefined4 * fn_001287b0(); extern undefined4 fn_0012d73c(); extern undefined4 fn_00145ac0();
extern bool fn_0014a614(); extern undefined4 fn_00159f34(); extern undefined4 * fn_0016752c(); extern uint fn_00179dc0(); extern uint fn_00179fc4(); extern undefined4 fn_0017a11c();
extern int fn_0017b9b4(); extern undefined4 fn_00182810(); extern short * fn_00188184(); extern undefined4 fn_0019d680(); extern int fn_002febd8(); extern undefined4 fn_002fece8();
extern undefined4 fn_002ff628(); extern undefined8 fn_00301a9c(); extern undefined4 * fn_00301f50();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00851220; extern undefined4 DAT_0088fe80; extern undefined4 DAT_0088fe84; extern undefined4 DAT_0088fe88;
extern undefined4 DAT_0088fe9c; extern undefined4 DAT_00898200; extern undefined4 DAT_008c7604; extern undefined4 PTR_FUN_0081d70c;
