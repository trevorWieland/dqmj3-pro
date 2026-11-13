#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern undefined4 fn_0014f1bc(); extern undefined4 * fn_0015ecdc(); extern undefined4 fn_00455018(); extern undefined4 fn_00455e10(); extern undefined4 * fn_0046b3fc();
extern undefined4 fn_0046dd70(); extern int fn_00487308(); extern void fn_0048d5d0(); extern undefined4 fn_004916dc(); extern undefined4 fn_004bdba4(); extern undefined4 fn_0076a024();
extern undefined1 * fn_0076a798(); extern undefined4 fn_00778f4c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00853ba8;
