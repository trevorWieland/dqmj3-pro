#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00176dc0(); extern int fn_00176e70(); extern undefined4 fn_002b13a0(); extern undefined4 fn_0035a17c(); extern undefined1 fn_00660ea8(); extern undefined1 fn_00660ec0();
extern int fn_0068fce0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00821614;
