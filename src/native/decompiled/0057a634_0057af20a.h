#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined8 fn_0017821c(); extern undefined4 fn_0018a618(); extern undefined4 fn_0020bbc4(); extern undefined4 fn_002c4304(); extern undefined4 fn_002feef8();
extern undefined4 fn_002ff628(); extern int fn_00397a0c(); extern undefined4 fn_00397a78(); extern undefined4 fn_0059e110(); extern undefined4 fn_0068ab44(); extern int fn_006bf5c8();
extern int fn_006c0114(); extern undefined4 fn_006f6a5c(); extern undefined4 fn_006f6ab4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00841944; extern undefined4 DAT_00891a10; extern undefined4 DAT_00891a14; extern undefined4 DAT_008c761b;
extern undefined4 PTR_FUN_008417f8;
