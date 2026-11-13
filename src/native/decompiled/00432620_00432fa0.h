#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00144df4(); extern undefined8 fn_0017821c(); extern undefined4 fn_001cab7c(); extern undefined4 fn_0020bbc4(); extern int * fn_0028aad0();
extern int fn_002b0948(); extern undefined4 fn_002b20a4(); extern int fn_002c11d0(); extern undefined4 * fn_002e8cf0(); extern undefined4 fn_002ff628(); extern undefined4 * fn_00301f50();
extern undefined4 fn_0031ee10(); extern undefined4 fn_0031ef00(); extern undefined4 fn_0031f8fc(); extern undefined4 fn_0042fe80(); extern undefined4 fn_004309e8(); extern undefined4 fn_004323d8();
extern undefined4 fn_0043243c(); extern undefined4 fn_00433620(); extern int fn_006bf5bc(); extern int fn_006bf5c8(); extern undefined4 fn_006bfe90(); extern int fn_006c0028();
extern int fn_006c0114(); extern int * fn_0079e0cc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897804; extern undefined4 DAT_008c760d;
