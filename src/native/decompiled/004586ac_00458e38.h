#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_001010c8(); extern undefined4 fn_001249d0(); extern int fn_0013ce04(); extern undefined4 * fn_0013ce98(); extern undefined4 * fn_0015ece0(); extern undefined8 fn_0017821c();
extern undefined4 fn_00455124(); extern undefined4 fn_00455394(); extern int fn_00457ca4(); extern int fn_00457df4(); extern undefined4 fn_004580f4(); extern undefined4 fn_004581ac();
extern undefined4 fn_004591b0(); extern undefined4 fn_00462284(); extern bool fn_004631ac(); extern undefined4 fn_0047edec(); extern undefined4 fn_004bc1a4(); extern undefined4 fn_0079d8f8();
extern undefined4 fn_0079f228();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007d9e30; extern undefined4 DAT_008b6393;
