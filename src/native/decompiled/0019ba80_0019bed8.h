#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00102ca2(); extern undefined8 fn_0017821c(); extern undefined4 fn_00183718(); extern int fn_00183840(); extern int fn_0018385c(); extern undefined4 fn_001a1fb8();
extern int fn_001a2150(); extern int fn_001a232c(); extern undefined4 fn_001a24b8(); extern undefined4 fn_001a24d0(); extern longlong fn_001a2abc(); extern uint fn_003035b0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0019bb88; extern undefined4 DAT_0019bb8c; extern undefined4 PTR_s_pos_700_0088ff30;
