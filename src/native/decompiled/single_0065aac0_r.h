#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001638a0(); extern undefined4 fn_0017fde4(); extern float fn_001a4a80(); extern undefined4 fn_001db0c0(); extern longlong fn_00300f74(); extern undefined4 fn_00303afc();
extern undefined4 fn_00318bf4(); extern undefined4 fn_005ea354(); extern undefined4 fn_005ea590(); extern undefined4 fn_005eeda8(); extern undefined4 fn_005ef320(); extern int fn_006ebef8();
extern int fn_006ebf30(); extern undefined4 fn_006ec21c(); extern undefined4 fn_006f733c(); extern int fn_006f7770();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008918b8; extern undefined4 DAT_008918bc; extern undefined4 DAT_008977e0;
