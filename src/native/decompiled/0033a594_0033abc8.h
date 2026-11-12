#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00145b00(); extern undefined4 fn_00163940(); extern int fn_0016ba34(); extern int fn_001746f4();
extern undefined4 fn_0020bbc4(); extern int * fn_0028aad0(); extern bool fn_002cb154(); extern bool fn_002cb15c(); extern undefined4 fn_00305a4c(); extern undefined4 fn_00305b48();
extern undefined4 fn_00305b50(); extern int fn_00305c50(); extern undefined4 fn_0033b240(); extern int fn_00660d60(); extern bool fn_00660e64(); extern int fn_006b2aa0();
extern undefined4 fn_006ba320(); extern undefined4 fn_006ba674(); extern int fn_006c02d4(); extern undefined4 fn_0079e460();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0033aae4; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00852140; extern undefined4 DAT_00897800;
extern undefined4 DAT_00897804; extern undefined4 DAT_00898228;
