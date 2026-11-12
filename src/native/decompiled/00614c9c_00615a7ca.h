#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00120f74(); extern undefined4 fn_001218d4(); extern undefined4 fn_00129004(); extern undefined4 fn_00145b00(); extern undefined4 fn_001482f4(); extern undefined4 fn_00159f34();
extern undefined4 fn_0016a43c(); extern undefined8 fn_0017821c(); extern bool fn_0028eb38(); extern undefined4 fn_002f96c4(); extern undefined4 fn_002f9980(); extern undefined4 fn_002f9da0();
extern int fn_002fa328(); extern undefined4 fn_002feef8(); extern undefined4 fn_003f4edc(); extern undefined4 * fn_005f6f1c(); extern undefined4 fn_00613c58(); extern undefined4 * fn_0061564c();
extern int fn_006157d8(); extern undefined4 fn_006f7a84();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007cbdcc; extern undefined4 DAT_007cbeb8; extern undefined4 DAT_00812c8c; extern undefined4 DAT_008977e0;
extern undefined4 DAT_00897800; extern undefined4 PTR_FUN_007cbdcc; extern undefined4 PTR_FUN_007cbe10;
