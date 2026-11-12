#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern short * fn_001003e0(); extern undefined4 fn_001008c4(); extern undefined4 fn_0011a604(); extern int * fn_0012219c(); extern undefined4 fn_00145b00(); extern undefined4 fn_00162d44();
extern undefined4 fn_00162d54(); extern undefined4 fn_00163868(); extern undefined4 fn_00176fb0(); extern undefined8 fn_0017821c(); extern undefined4 fn_0017fde4(); extern undefined4 fn_001969a4();
extern undefined4 * fn_001cccdc(); extern undefined4 fn_0023dd30(); extern int fn_002653b0(); extern undefined4 fn_00266874(); extern undefined4 * fn_00267ec0(); extern undefined4 fn_002feef8();
extern undefined4 fn_002ff628(); extern undefined8 fn_00301a9c(); extern undefined4 * fn_005efdbc(); extern undefined4 fn_0068c694(); extern void fn_0068c6c4(); extern undefined4 fn_0068c7e8();
extern undefined4 fn_0068cc48(); extern undefined4 fn_0068eb30(); extern bool fn_0069ee40(); extern bool fn_006ebf84();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008977e8; extern undefined4 DAT_008c7328; extern undefined4 DAT_008c766f;
extern undefined4 DAT_008cd57c; extern undefined4 DAT_008cd580; extern undefined4 DAT_008cd588; extern undefined4 DAT_008cd58c;
extern undefined4 PTR_FUN_00851160;
