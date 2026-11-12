#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_001010c8(); extern uint fn_00101a50(); extern undefined4 fn_001028d4(); extern undefined4 fn_0011c1b4(); extern undefined4 fn_0012d73c(); extern undefined1 fn_00145aac();
extern undefined4 fn_00145ac0(); extern undefined4 * fn_00158f6c(); extern undefined8 fn_0017821c(); extern undefined4 fn_00268720(); extern undefined4 fn_00268758(); extern undefined4 fn_0028b908();
extern undefined8 fn_00301a9c(); extern undefined4 * fn_00301f50(); extern undefined4 fn_00388df8(); extern undefined4 fn_00388f38(); extern undefined4 fn_0066dc40(); extern undefined4 fn_0066ec10();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0030e62c; extern undefined4 DAT_0030e6a0; extern undefined4 DAT_0030e80c; extern undefined4 DAT_0030eb2c;
extern undefined4 DAT_00897804; extern undefined4 DAT_00897820; extern undefined4 DAT_00897850;
