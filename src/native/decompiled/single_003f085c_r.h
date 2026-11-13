#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0015b0f8(); extern undefined4 fn_001603f8(); extern undefined4 fn_0022f584(); extern undefined4 fn_0029180c(); extern undefined4 fn_00291828(); extern undefined4 fn_00291888();
extern undefined4 fn_003f06c4(); extern undefined4 fn_00688d44(); extern int fn_006b7f9c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003f0820; extern undefined4 DAT_003f0840; extern undefined4 DAT_00897804;
