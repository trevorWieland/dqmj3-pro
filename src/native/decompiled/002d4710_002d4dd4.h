#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_00145b00(); extern undefined4 fn_00174828(); extern undefined4 fn_00182988(); extern undefined4 fn_001a46f4(); extern undefined4 fn_001c2374();
extern undefined4 fn_001f748c(); extern undefined4 * fn_001f7e18(); extern undefined4 * fn_001f8010(); extern undefined4 fn_0028e434(); extern undefined4 * fn_002d40c8(); extern undefined4 fn_002feef8();
extern bool fn_00313870(); extern int fn_00353250(); extern undefined4 fn_003a5b64(); extern int fn_00405898(); extern undefined1 fn_0066e158(); extern int fn_0066e28c();
extern undefined4 fn_0066e3d8(); extern bool fn_0066e510();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_001d4e64(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007bad64; extern undefined4 DAT_007badf0; extern undefined4 DAT_007bb2a0; extern undefined4 DAT_007bb32c;
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008977e4; extern undefined4 DAT_00897840; extern undefined4 DAT_00898840;
extern undefined4 PTR_FUN_0082012c;
