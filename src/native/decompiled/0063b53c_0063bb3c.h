#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00176dc0(); extern int fn_00176e70(); extern undefined4 fn_0063b164(); extern int fn_0065e448(); extern bool fn_006f0b40(); extern int fn_006f0b54();
extern int fn_006f17d0(); extern undefined4 fn_006f2450(); extern bool fn_006f2718(); extern bool fn_006f4810(); extern bool fn_006f4850();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0080e148; extern undefined4 DAT_0080e14c; extern undefined4 DAT_0080f154; extern undefined4 DAT_0080f158;
