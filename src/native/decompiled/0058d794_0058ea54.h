#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001638a0(); extern undefined8 fn_0017821c(); extern undefined4 fn_0018a618(); extern undefined4 fn_0018d060(); extern undefined4 fn_00190e40(); extern undefined4 fn_001f74d8();
extern undefined4 fn_001f74ec(); extern int fn_00242984(); extern undefined1 fn_00242b0c(); extern undefined4 fn_0025bd60(); extern undefined4 fn_002b1588(); extern undefined4 fn_002cd59c();
extern int fn_00397f10(); extern undefined4 fn_0058ce98(); extern undefined4 fn_005d27ac(); extern int fn_005ef148(); extern undefined4 fn_0068ab44(); extern undefined4 fn_0069decc();
extern undefined4 fn_006b64b0(); extern bool fn_006f7d68();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0058cf84; extern undefined4 DAT_00843e68; extern undefined4 DAT_00893fac; extern undefined4 DAT_00894020;
extern undefined4 DAT_00897804;
