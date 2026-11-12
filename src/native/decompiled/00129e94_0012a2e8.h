#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined8 fn_0011c10c(); extern int fn_0011c134(); extern uint fn_001457bc(); extern undefined4 fn_00145a40(); extern undefined4 * fn_00146510(); extern uint fn_001562d0();
extern undefined4 fn_00156750(); extern undefined4 fn_00156818();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0012a2cc; extern undefined4 DAT_007d6270; extern undefined4 DAT_007d6274; extern unsigned char *DAT_008bf798;
