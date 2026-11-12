#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00145b00(); extern undefined4 fn_0016b4ec(); extern int fn_0016ba34(); extern undefined4 fn_0017fde4(); extern int fn_0018cdf4();
extern undefined4 fn_0018d16c(); extern int fn_00191238(); extern int * fn_0019695c(); extern undefined4 fn_00196998(); extern undefined4 fn_0019bc38(); extern undefined4 fn_001c72c0();
extern int * fn_00242324(); extern undefined4 fn_002e2c68(); extern undefined4 fn_002feef8(); extern undefined4 fn_00683224(); extern undefined4 fn_006abd58(); extern undefined4 fn_006f75ac();
extern bool fn_006f7a20();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0083d218; extern undefined4 DAT_00858c10; extern undefined4 DAT_008977e0;
extern undefined4 DAT_00897800; extern undefined4 DAT_00897804; extern undefined4 DAT_00898224;
