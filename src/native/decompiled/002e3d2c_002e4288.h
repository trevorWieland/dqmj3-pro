#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001a46f4(); extern int fn_001c9c0c(); extern undefined4 fn_001c9c44(); extern undefined4 fn_001c9cac(); extern undefined4 fn_001c9d44(); extern undefined4 fn_002454a4();
extern undefined4 fn_002ff628(); extern longlong fn_00300f74(); extern undefined4 fn_00660114(); extern undefined4 fn_00660298();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008c7625; extern undefined4 DAT_008c7672;
