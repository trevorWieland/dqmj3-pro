#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_0014f480(); extern undefined4 fn_0015ef58(); extern undefined8 fn_00301a9c(); extern bool fn_00454b8c(); extern undefined4 fn_0046ffa8(); extern char fn_004b5324();
extern undefined4 * fn_004b5488(); extern int fn_004b5540(); extern int fn_004b616c(); extern undefined4 fn_0074a4c8(); extern undefined4 fn_0074a598();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008b6393; extern undefined4 DAT_008b6394; extern undefined4 DAT_008b6395;
