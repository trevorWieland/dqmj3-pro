#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined4 fn_00176d68(); extern undefined4 fn_0017fe34(); extern undefined4 fn_001f73a0();
extern undefined4 fn_0024146c(); extern int * fn_0028c0f0(); extern undefined4 fn_0028c190(); extern undefined4 fn_0028e650(); extern undefined4 fn_002feef8(); extern undefined4 fn_003f8160();
extern undefined4 fn_003f820c(); extern undefined4 fn_00545310(); extern undefined4 fn_005456f4(); extern undefined4 fn_00580d1c(); extern undefined4 fn_00580e58(); extern undefined4 * fn_005f40b4();
extern undefined4 fn_0069e7cc(); extern undefined4 fn_006dcca4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0081e18c; extern undefined4 DAT_00894374; extern undefined4 DAT_008943b0;
extern undefined4 DAT_00897808; extern undefined4 DAT_0089780c; extern undefined4 PTR_FUN_0081e1a4;
