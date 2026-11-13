#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_0017d96c(); extern undefined4 fn_001a46f4(); extern undefined4 fn_0022f584(); extern undefined4 fn_002b1f40(); extern undefined4 fn_0031db8c();
extern int * fn_0031e264(); extern undefined4 fn_00394544(); extern undefined4 fn_00589198();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00588fa4; extern undefined4 DAT_00588fc4; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00843644;
