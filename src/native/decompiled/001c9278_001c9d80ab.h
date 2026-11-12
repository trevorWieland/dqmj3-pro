#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00194ee4(); extern undefined4 fn_001c8398(); extern undefined4 fn_001c9058(); extern undefined4 fn_001c942c(); extern uint fn_001f7254(); extern int fn_001f72e0();
extern undefined4 fn_002feef8(); extern undefined4 fn_00552ea4(); extern undefined4 fn_00552f70(); extern int fn_00553250(); extern undefined4 fn_006e1ee8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0081bb6c; extern undefined4 PTR_LAB_0081bb7c;
