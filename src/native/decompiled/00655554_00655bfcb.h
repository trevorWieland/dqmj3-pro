#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined1 fn_001639e4(); extern longlong fn_00301bb0(); extern undefined4 fn_00633824(); extern int fn_0063a510(); extern undefined4 * fn_006562a0(); extern undefined4 * fn_006563c4();
extern int fn_00691af0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00859598; extern undefined4 DAT_008595a8;
