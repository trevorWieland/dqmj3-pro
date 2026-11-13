#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_001283fc(); extern undefined4 * fn_001287b0(); extern undefined4 fn_0012d6b0(); extern undefined4 fn_0012d73c(); extern undefined4 fn_00145b00();
extern bool fn_00147fd4(); extern undefined4 * fn_00168a24(); extern undefined4 fn_0018a618(); extern undefined4 fn_001f8424(); extern int fn_00242bd4(); extern undefined4 fn_002f8fd0();
extern undefined4 fn_002feef8(); extern undefined8 fn_00301a9c(); extern undefined4 * fn_00301f50(); extern int fn_003b7164(); extern undefined4 fn_003b74f8(); extern int fn_003b78e4();
extern void fn_003b7bc4(); extern void fn_003b7e40(); extern int fn_003b7f00(); extern undefined4 * fn_003b8284(); extern int fn_0069cd0c(); extern undefined4 fn_0078717c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008522b4; extern undefined4 DAT_00893240; extern undefined4 DAT_00893244;
extern undefined4 DAT_00893248; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4; extern undefined4 PTR_FUN_008522d0;
