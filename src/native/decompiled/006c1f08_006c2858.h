#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0016947c(); extern undefined4 fn_002cd59c(); extern byte fn_00308f5c(); extern byte fn_003096a4(); extern byte fn_00309afc(); extern byte fn_0030aec0();
extern undefined4 fn_00525bd0(); extern int fn_0066173c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007d6f20; extern undefined4 DAT_007d6f24; extern undefined4 DAT_007d6f28; extern undefined4 DAT_007d6f2c;
