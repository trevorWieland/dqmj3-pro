#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100b58(); extern int fn_00101d80(); extern int * fn_0015e6f0(); extern undefined4 * fn_00170f54(); extern undefined4 fn_00183718(); extern int fn_00183840();
extern int fn_0018385c(); extern int fn_00192548(); extern undefined4 fn_0019501c(); extern undefined4 fn_0019a308(); extern undefined4 fn_001a1fb8(); extern undefined4 fn_002fece8();
extern uint fn_003035b0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00190fb0; extern undefined4 DAT_0019bb88; extern undefined4 DAT_0019bb8c; extern undefined4 DAT_00855a94;
extern undefined4 PTR_s_pos_700_0088ff30;
