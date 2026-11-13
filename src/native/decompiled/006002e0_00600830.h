#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0020cda0(); extern int fn_0028be14(); extern int fn_0028be30(); extern undefined1 fn_00344e64(); extern undefined4 fn_00660c64(); extern undefined4 fn_00660ccc();
extern int fn_00660ff8(); extern int fn_00661058(); extern int fn_00692568(); extern int fn_006925b8(); extern int * fn_006b2a74(); extern uint fn_006b7d14();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897804;
