#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined1 fn_00163a00(); extern bool fn_0069180c(); extern undefined1 fn_00691860(); extern undefined1 fn_0069187c(); extern undefined4 fn_006f3bdc(); extern undefined4 fn_006f4684();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007d5e58;
