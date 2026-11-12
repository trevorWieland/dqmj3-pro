#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00102ca2(); extern uint fn_001a8760(); extern undefined4 fn_001a878c(); extern undefined4 fn_001a879c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812d48; extern undefined4 DAT_00812d4c; extern undefined4 DAT_00812dc8; extern undefined4 DAT_00812e08;
extern undefined4 DAT_00812e48;
