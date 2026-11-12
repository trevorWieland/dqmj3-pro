#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_002f8444(); extern undefined4 * fn_005b92d4(); extern undefined4 fn_006896fc(); extern undefined4 fn_00689818(); extern undefined4 fn_00689824();
extern undefined4 fn_00689930(); extern undefined4 fn_006899f4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005b8f08; extern undefined4 DAT_00812c8c;
