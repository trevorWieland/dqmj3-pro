#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern int fn_00172c98(); extern undefined4 fn_00245330(); extern undefined4 fn_0025e4c0(); extern undefined4 fn_00290100(); extern undefined4 * fn_0029011c();
extern undefined4 fn_002b427c(); extern undefined4 fn_002bfd10(); extern undefined4 fn_002c07e4(); extern undefined4 fn_002c0bc0(); extern undefined4 fn_002e3ef4(); extern undefined4 fn_002e3f3c();
extern longlong fn_00300f74(); extern undefined4 fn_00307ba8(); extern undefined4 fn_00307cc4(); extern undefined4 fn_0042ff80(); extern void fn_004309c4(); extern undefined4 fn_004318ac();
extern undefined4 fn_00660200(); extern undefined4 fn_0068b14c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00430928; extern undefined4 DAT_00812c8c;
