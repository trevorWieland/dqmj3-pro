#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0020bbc4(); extern int * fn_0028aad0(); extern undefined4 fn_00290100(); extern undefined4 fn_0031ef00(); extern undefined4 fn_0056d0fc(); extern undefined4 fn_0056d5f4();
extern undefined4 fn_0056df68(); extern undefined4 fn_0056e744(); extern undefined4 fn_0056e984(); extern undefined4 fn_0068ab44(); extern undefined4 fn_006bfe90();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897804;
