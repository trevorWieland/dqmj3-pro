#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern uint fn_00147e6c(); extern undefined4 fn_00154ac8(); extern undefined4 fn_00163d44(); extern undefined8 fn_0017821c(); extern undefined4 fn_002feef8();
extern undefined4 fn_00395760(); extern bool fn_0060b950(); extern undefined4 fn_0060b968(); extern int fn_006afe90(); extern int fn_006c5138(); extern undefined4 fn_006f72e0();
extern undefined4 fn_007a36c0(); extern undefined4 fn_007ab19c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007c7264; extern undefined4 DAT_007c7268; extern undefined4 DAT_008977e0;
