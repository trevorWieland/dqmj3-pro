#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 * fn_001287b4(); extern undefined4 fn_00161104(); extern int fn_0016156c(); extern undefined4 fn_00162d08();
extern int fn_00162e28(); extern undefined4 * fn_00163514(); extern undefined4 * fn_001636ac(); extern int * fn_00168b84(); extern undefined4 fn_00168fb8(); extern undefined4 fn_002ff628();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008c7638;
