#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00157f00(); extern undefined4 fn_00157fb0(); extern undefined4 fn_001580cc(); extern undefined4 fn_001581d0(); extern undefined4 fn_00165d3c(); extern undefined4 fn_001c93c8();
extern undefined4 fn_0028c2fc(); extern undefined4 fn_002b183c(); extern undefined4 fn_002b1908(); extern undefined4 * fn_002d40c8(); extern undefined4 fn_002d4710(); extern uint fn_003035b0();
extern undefined4 fn_003b7fec(); extern undefined4 fn_00405730(); extern undefined4 fn_00422638(); extern undefined4 fn_0069e878();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00148920; extern undefined4 DAT_00227c80; extern undefined4 DAT_0086a0ac; extern undefined4 DAT_0086a0b4;
extern undefined4 DAT_0086a0bc; extern undefined4 DAT_00897808; extern undefined4 DAT_0089780c; extern unsigned char *DAT_00897894;
extern unsigned char *DAT_00898898;
