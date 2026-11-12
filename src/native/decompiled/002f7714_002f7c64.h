#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00110c80(); extern undefined4 fn_0011ddb8(); extern undefined4 * fn_00120ea0(); extern uint * fn_00120ec8(); extern undefined4 fn_00176fb0(); extern undefined8 fn_0017821c();
extern undefined4 fn_001f825c(); extern undefined1 fn_00246ec4(); extern undefined4 fn_0028b908(); extern undefined4 fn_0028b940(); extern undefined4 fn_0028b970(); extern int fn_002f5944();
extern undefined4 fn_002f5fa0(); extern int fn_002f6980(); extern undefined1 fn_002f8914(); extern undefined4 * fn_00301f50(); extern undefined4 fn_0036a810(); extern undefined4 fn_0036a840();
extern undefined4 fn_0036a860(); extern undefined4 fn_0036a874(); extern int fn_0041fe48(); extern undefined4 fn_0041fe58(); extern undefined4 fn_0066193c(); extern int fn_006b8718();
extern int fn_006b873c(); extern int fn_006c3ab0(); extern undefined4 fn_006c3acc(); extern undefined4 fn_006cba34();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977ec; extern undefined4 DAT_00897804;
