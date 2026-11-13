#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_002043cc(); extern int fn_0020afb4(); extern int fn_0020b124(); extern int fn_0020b14c();
extern undefined4 fn_0020b1b4(); extern int fn_0020b248(); extern undefined4 fn_00239700(); extern undefined4 fn_002ff628(); extern int fn_006c58ac(); extern undefined4 fn_0079e460();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897840; extern undefined4 DAT_008c7603; extern undefined4 DAT_008c760b;
