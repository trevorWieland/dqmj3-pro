#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 * fn_00118290(); extern undefined4 fn_001287d4(); extern undefined4 fn_00145b00(); extern undefined4 fn_00176d68(); extern undefined4 fn_0017fde4();
extern undefined4 fn_001d5a74(); extern void fn_001d926c(); extern undefined4 fn_001dbc6c(); extern undefined4 fn_0023e508(); extern undefined4 fn_002770b4(); extern undefined4 fn_00277ae0();
extern undefined4 fn_002feca8(); extern undefined4 fn_002feef8(); extern undefined4 fn_00303afc(); extern undefined4 fn_0033ce74(); extern undefined4 * fn_003adb10(); extern undefined4 fn_00543e80();
extern undefined4 fn_005456f4(); extern int fn_005ea4fc(); extern undefined4 fn_0069c2c8(); extern undefined4 fn_006a8fac(); extern int fn_006f7a9c(); extern undefined4 fn_00764608();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001daffc(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00891e30; extern undefined4 DAT_008977e0; extern undefined4 DAT_008c62fc;
extern undefined4 DAT_008c85a8; extern undefined4 DAT_008c85ac; extern undefined4 DAT_008c85b0; extern undefined4 DAT_008c85b4;
extern undefined4 DAT_008c85b8; extern undefined4 DAT_008c85bc; extern undefined4 DAT_008f9e2c; extern undefined4 DAT_008f9e30;
extern undefined4 DAT_008f9e34; extern undefined4 PTR_FUN_0081be40;
