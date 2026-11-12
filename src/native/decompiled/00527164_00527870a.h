#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_001010c8(); extern undefined4 fn_00125e10(); extern undefined4 fn_00125e98(); extern undefined4 fn_00146594(); extern undefined4 * fn_00158f6c(); extern int fn_0051e634();
extern int fn_0051e7ac(); extern undefined4 fn_0051e7dc(); extern undefined4 fn_0052720c(); extern void fn_00527310(); extern undefined4 fn_00527600(); extern undefined4 fn_00527ca8();
extern undefined4 fn_00755a98();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008574b8; extern undefined4 DAT_008574e4; extern undefined4 DAT_00857518; extern undefined4 DAT_008575a0;
