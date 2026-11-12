#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern int * fn_00147974(); extern undefined4 * fn_00168a24(); extern undefined4 fn_00190d50(); extern void fn_0031b6ec(); extern undefined4 fn_00689210();
extern undefined4 fn_0069e7cc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0031bdf0; extern undefined4 DAT_0031c070; extern undefined4 DAT_007c68f8; extern undefined4 DAT_00822fd8;
extern undefined4 DAT_00893330;
