#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern int fn_00124e48(); extern undefined4 * fn_0013d4ec(); extern undefined4 * fn_00158f40(); extern undefined4 fn_004ed13c(); extern undefined4 fn_004ed164();
extern undefined4 fn_004ed2e8(); extern undefined4 * fn_004eddf4(); extern undefined4 fn_004ede4c(); extern undefined4 fn_004f0ab4(); extern undefined4 fn_004f0c1c(); extern int fn_00507000();
extern int fn_0050b0d4(); extern undefined4 fn_00656b0c(); extern undefined4 fn_00656b7c(); extern undefined4 fn_00656e14(); extern int fn_006d9e0c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00508060(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008bf4cc; extern undefined4 DAT_008bf4d4; extern undefined4 DAT_008bf4e0; extern undefined4 DAT_008bf4e8;
extern undefined4 DAT_d8814829; extern undefined4 PTR_FUN_00856ec4;
