#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_001287d4(); extern undefined4 fn_0016a43c(); extern undefined4 fn_0016dcdc(); extern undefined4 fn_0016dd18(); extern undefined4 fn_001781f0();
extern undefined4 fn_00178f9c(); extern undefined4 fn_00192f50(); extern undefined4 fn_006896f4(); extern undefined4 fn_0068af70();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0057992c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00841658;
