#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145adc(); extern undefined4 fn_00146590(); extern undefined1 fn_001639e4(); extern int fn_0063a510(); extern int fn_0063a54c(); extern bool fn_0069180c();
extern undefined1 fn_00691860(); extern undefined1 fn_0069187c(); extern int fn_00691994(); extern int fn_00691af0(); extern int fn_0069259c(); extern undefined4 fn_006f4044();
extern byte fn_006f44fc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007f0614; extern undefined4 DAT_007f0618; extern undefined4 DAT_007f061c; extern undefined4 DAT_007f0650;
extern undefined4 DAT_007f0654; extern undefined4 DAT_007f0658;
