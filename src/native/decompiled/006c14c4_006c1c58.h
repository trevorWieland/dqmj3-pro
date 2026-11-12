#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern longlong fn_00300f74(); extern undefined4 fn_006ba4ec(); extern undefined4 fn_006ba674(); extern int fn_006c17a4(); extern void fn_006c19d0(); extern int fn_006f7770();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0; extern undefined4 DAT_008c9364;
