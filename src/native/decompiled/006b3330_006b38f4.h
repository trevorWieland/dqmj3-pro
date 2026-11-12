#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern short * fn_001003e0(); extern undefined4 fn_001008c4(); extern undefined4 * fn_00168a24(); extern undefined4 fn_00176fb0(); extern undefined8 fn_0017821c(); extern undefined4 fn_00294610();
extern undefined4 fn_0066e368(); extern undefined4 fn_006b2ed0(); extern int fn_006b39b4(); extern int * fn_006b3e50();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_006b3400(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897850; extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
