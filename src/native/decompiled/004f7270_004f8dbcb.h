#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_004ed050(); extern undefined4 fn_004ed0e4(); extern undefined4 * fn_004eddf4(); extern int fn_004f5524(); extern undefined4 fn_00505d54(); extern undefined4 fn_006d92e4();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004f8ac0(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_004f8ce8(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00856ce8; extern undefined4 DAT_008bf4d9; extern undefined4 DAT_008bf4e0; extern undefined4 PTR_FUN_00856e04;
