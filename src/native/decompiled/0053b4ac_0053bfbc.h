#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined8 fn_00191e2c(); extern uint fn_001a23a8(); extern undefined4 fn_0053138c(); extern undefined4 fn_00534618(); extern undefined4 fn_00534a50(); extern int fn_00535ec4();
extern undefined4 fn_0053661c(); extern int fn_00536d0c(); extern undefined4 fn_0053735c(); extern undefined4 fn_00537f44(); extern undefined4 fn_005381ac(); extern undefined4 fn_00538498();
extern void fn_0053b4ac();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007f36ec; extern undefined4 DAT_007f36f0; extern undefined4 DAT_007f36f4; extern undefined4 DAT_007f36f8;
extern undefined4 PTR_LAB_008c0468; extern undefined4 PTR_LAB_008c3410;
