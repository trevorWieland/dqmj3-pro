#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001638a0(); extern undefined4 fn_001747e8(); extern undefined8 fn_0017821c(); extern undefined4 fn_001dcf20(); extern undefined4 fn_001de2b0(); extern float * fn_001e2d40();
extern undefined4 fn_001ea9c0(); extern undefined4 fn_001eab44(); extern bool fn_00242a90(); extern undefined1 fn_00242b0c(); extern undefined4 fn_0025988c(); extern undefined4 fn_006a7cb0();
extern undefined4 fn_006a7cbc(); extern uint fn_006a9938(); extern uint fn_006a99b0(); extern int fn_006aa538(); extern undefined4 fn_006ccbd8(); extern bool fn_006f7370();
extern undefined4 fn_006f7984(); extern undefined4 fn_006f7a48();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0;
