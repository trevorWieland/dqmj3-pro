#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00121838(); extern int fn_0016ba34(); extern undefined4 fn_00190d50(); extern undefined4 fn_002e6978(); extern undefined4 * fn_002e6a94(); extern undefined * fn_0059e438();
extern undefined * fn_0059e448();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_003fd0c8(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00836638; extern undefined4 DAT_00897800; extern undefined4 DAT_00898788;
