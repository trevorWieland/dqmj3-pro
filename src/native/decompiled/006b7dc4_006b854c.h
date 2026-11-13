#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern byte fn_00163c9c(); extern int fn_001c2350(); extern bool fn_0028bc94(); extern bool fn_0028bcb0(); extern byte fn_002e31e4(); extern uint fn_002e3204();
extern undefined1 fn_00661094(); extern int fn_006616e0(); extern int fn_006924e0(); extern int fn_006a7ae8(); extern undefined4 fn_0077f008();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e4; extern undefined4 DAT_008c97a8;
