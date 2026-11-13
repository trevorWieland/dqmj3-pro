#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00121118(); extern undefined4 fn_001221d4(); extern undefined8 fn_0017821c(); extern undefined4 fn_002feef8(); extern undefined4 fn_00301e54(); extern int fn_00302364();
extern undefined4 fn_00303590(); extern undefined4 fn_0030488c();
/* The decompiler took the address of a label outside its own function. A file-scope identifier gives that expression a value. */
static void LAB_0010424c_1(void) { }

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897804; extern undefined4 DAT_008c3db8;
