#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern int fn_0011c134(); extern undefined4 fn_00123d00(); extern undefined4 fn_001287d4(); extern undefined4 fn_002feca8(); extern undefined8 fn_00301a9c();
extern undefined4 fn_0067a1a8(); extern int fn_0067a1d0(); extern int fn_0068c7f4(); extern undefined4 fn_006d3d30(); extern undefined4 fn_006f5e08();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0066e074(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008977e8; extern undefined4 DAT_00897850;
