#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00154ac8(); extern undefined4 fn_0020bbc4(); extern int * fn_0028aad0(); extern uint fn_0068f708();
extern int fn_0068f7f8(); extern int fn_006b8478(); extern undefined4 fn_006b85d0(); extern uint fn_006bf184(); extern bool fn_006bf34c(); extern int fn_006bf5ec();
extern int fn_006bfda8(); extern int fn_006c02d4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00000001; extern undefined4 DAT_00897804;
