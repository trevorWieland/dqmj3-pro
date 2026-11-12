#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0012d6a4(); extern int fn_00452a9c(); extern int fn_00452b0c(); extern int fn_00452f8c(); extern int fn_00452ffc();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_00110104(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008c071c; extern undefined4 DAT_008c0720; extern undefined4 DAT_e0810bf8;
