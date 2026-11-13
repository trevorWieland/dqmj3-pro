#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern uint fn_00101a50(); extern undefined4 * fn_00118290(); extern undefined4 fn_0011dda8(); extern bool fn_00147fd4(); extern uint * fn_001782b8(); extern undefined4 fn_001a0b78();
extern undefined4 * fn_001dbf48(); extern undefined4 * fn_001dc08c(); extern undefined4 fn_0021956c(); extern int fn_00277b10(); extern undefined4 fn_00279ae4(); extern undefined4 fn_00304cc0();
extern undefined4 fn_005e8b38(); extern int fn_005eef64(); extern undefined4 fn_00692fb0(); extern undefined4 fn_00698fb8(); extern undefined4 fn_006ac0d8(); extern undefined4 fn_006b78d8();
extern bool fn_006b9588(); extern bool fn_006cc1fc(); extern undefined2 fn_006eb368(); extern undefined4 fn_006ec21c(); extern undefined4 fn_006f72b4(); extern int fn_006f7a9c();
extern undefined4 fn_0075656c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0; extern undefined4 PTR_FUN_0081b924;
