#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0010301c(); extern int fn_0011c134(); extern uint fn_00147e6c(); extern undefined4 fn_00173d1c(); extern undefined8 fn_0017821c(); extern undefined4 fn_0019d680();
extern undefined4 fn_0020b55c(); extern undefined4 fn_0020bbc4(); extern undefined1 * fn_002999ac(); extern undefined4 fn_002fecec(); extern undefined4 * fn_00301f50(); extern undefined4 fn_0030233c();
extern int fn_00310b08(); extern uint fn_0068f708(); extern int fn_0068f7c4(); extern uint fn_006aed20(); extern int fn_006c02d4();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0029997c(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00299df4; extern undefined4 DAT_008928d4; extern undefined4 DAT_008928d8; extern undefined4 DAT_0089779c;
