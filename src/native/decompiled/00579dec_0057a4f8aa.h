#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_0020bbc4(); extern undefined4 fn_0024e350(); extern int * fn_0028aad0(); extern undefined4 fn_004059f4(); extern undefined4 fn_00406c48();
extern undefined4 fn_00406e9c(); extern undefined4 fn_00407140(); extern undefined4 fn_00407de0(); extern undefined4 fn_00408118(); extern undefined4 fn_004082a4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008416a4; extern undefined4 DAT_00890bac; extern undefined4 DAT_00890bb0; extern undefined4 DAT_00897804;
