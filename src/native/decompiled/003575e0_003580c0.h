#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int fn_00101a1c(); extern undefined4 fn_00145b00(); extern undefined4 fn_0016a43c(); extern undefined4 fn_0016dd18();
extern undefined4 fn_00192f50(); extern undefined4 fn_001cab7c(); extern undefined4 fn_0020bbc4(); extern int * fn_0028b0a0(); extern int * fn_0028b348(); extern undefined4 fn_00354b70();
extern void fn_003575e0(); extern undefined4 fn_0036fc00(); extern undefined4 * fn_0068ab5c(); extern undefined4 * fn_0068ad5c(); extern undefined4 fn_006bf5e0(); extern undefined4 fn_006bfe90();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0035490c(void) { }
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_003573a4(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00890360; extern undefined4 DAT_00897804; extern undefined4 PTR_FUN_00826908;
