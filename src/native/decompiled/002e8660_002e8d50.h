#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00144df4(); extern undefined4 fn_00154ac8(); extern undefined8 fn_0017821c(); extern undefined4 fn_001f74f8(); extern undefined4 fn_0020bbc4();
extern int * fn_0028aad0(); extern undefined4 fn_002d6808(); extern uint fn_002e3204(); extern undefined4 fn_002ff628(); extern undefined4 fn_006b51c0(); extern undefined4 fn_006b51d8();
extern int fn_006b83e4(); extern uint fn_006bf184(); extern undefined4 fn_006bf2b4(); extern bool fn_006bf34c(); extern undefined4 fn_006bfe90(); extern undefined4 fn_0079df24();
extern undefined4 fn_007b8d50();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007c6644; extern undefined4 DAT_007c6646; extern undefined4 DAT_00893064; extern undefined4 DAT_00897804;
extern undefined4 DAT_00897828; extern undefined4 DAT_008c7672;
