#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00176dc0(); extern undefined4 fn_0035bce0(); extern undefined4 fn_0035bfa0(); extern undefined4 fn_0035c150(); extern undefined4 fn_0035c240(); extern undefined4 fn_0035c318();
extern undefined4 fn_0035ca80(); extern int * fn_0035cbb0(); extern undefined4 fn_006f94f4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00828bd8;
