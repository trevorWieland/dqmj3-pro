#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_001010c8(); extern undefined4 fn_00122c48(); extern undefined4 fn_0013ef80(); extern undefined4 fn_00144834(); extern undefined4 fn_00154ac8(); extern undefined8 fn_0017821c();
extern undefined4 fn_0020bbc4(); extern undefined1 * fn_00289ce8(); extern void fn_00289f80(); extern undefined8 fn_00301a9c(); extern undefined4 * fn_00301f50(); extern int fn_006bf240();
extern int fn_006bf5ec(); extern undefined4 fn_006bfe90(); extern byte fn_006bffec(); extern int fn_006c02d4(); extern int fn_006c0354(); extern int * fn_0077f1f8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0081c498; extern undefined4 DAT_0088fcb8; extern undefined4 DAT_00897804;
