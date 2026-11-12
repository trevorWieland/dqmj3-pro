#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern undefined4 * fn_0015ecdc(); extern undefined4 fn_0015ef4c(); extern undefined8 fn_00169f1c(); extern int fn_00170fa4(); extern undefined8 fn_00301a9c();
extern undefined4 fn_0030233c(); extern bool fn_00454cbc(); extern undefined4 fn_0045616c(); extern undefined4 fn_0045f6f0(); extern undefined4 fn_0045f7f0(); extern undefined4 fn_004bbf80();
extern undefined4 fn_00615d94(); extern undefined4 fn_0074a528(); extern undefined4 fn_00769544(); extern undefined4 fn_00769ba0(); extern undefined4 fn_0076ea8c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00854bbc; extern undefined4 DAT_00854db0;
