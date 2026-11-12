#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_004ecfd0(); extern undefined4 fn_004f8204(); extern undefined4 fn_0050c738(); extern undefined4 fn_0050c7f0(); extern undefined4 fn_00512de8(); extern undefined4 fn_0051b440();
extern undefined4 fn_0051d9f0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00856fbc; extern undefined4 DAT_008bf4d4; extern undefined4 DAT_e0a14827;
