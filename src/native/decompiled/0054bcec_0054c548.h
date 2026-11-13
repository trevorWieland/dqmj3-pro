#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_001615fc(); extern undefined4 fn_0017d90c(); extern int * fn_0017d948(); extern undefined4 fn_0017d96c(); extern int fn_0054a484(); extern uint fn_0054a4f4();
extern undefined4 fn_0054a72c(); extern undefined4 * fn_0054aa6c(); extern int fn_006e1e78();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007d8588; extern undefined4 DAT_007d8590; extern undefined4 DAT_0089a930;
