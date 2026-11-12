#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00176ac0(); extern int fn_00176cfc(); extern int * fn_0017d948(); extern int fn_0018360c(); extern uint fn_001a03e0(); extern undefined4 fn_001a03f4();
extern undefined4 fn_001a04fc(); extern int fn_001a2184(); extern int fn_001a21f0(); extern int fn_001a2258(); extern int fn_001a22c4(); extern undefined4 fn_001a3e54();
extern undefined4 fn_001a3e70();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008ece51;
