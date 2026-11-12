#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_004c7e40(); extern undefined4 fn_004c8c60(); extern undefined4 fn_004cee00(); extern undefined4 fn_004ed068(); extern undefined4 fn_004ed13c(); extern int fn_004ed810();
extern undefined4 fn_004f0ab4(); extern undefined4 fn_004f0c1c(); extern undefined4 * fn_0050d178(); extern uint fn_0050f57c(); extern undefined8 fn_006d6d3c(); extern undefined1 * fn_006d9d3c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008bf4d4; extern undefined4 DAT_008bf4f4;
