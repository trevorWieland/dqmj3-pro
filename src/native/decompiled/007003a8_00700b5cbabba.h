#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00303b10(); extern int * fn_004549cc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008c077c; extern undefined4 DAT_008eefb8; extern undefined4 DAT_008eefbc; extern undefined4 DAT_008eefc0;
extern undefined4 DAT_008eefc4; extern undefined4 DAT_008eefc8; extern undefined4 DAT_008eefcc; extern undefined4 DAT_008eefd0;
