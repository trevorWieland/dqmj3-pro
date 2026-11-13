#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0013d0fc(); extern undefined4 fn_0014ea80(); extern undefined4 fn_0017695c(); extern undefined4 fn_003e68fc(); extern char fn_0045e504(); extern undefined4 fn_0048322c();
extern undefined4 fn_00484074(); extern undefined4 fn_004b301c(); extern undefined4 fn_004b7748();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00483224;
