#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00154ac8(); extern undefined4 fn_00190d50(); extern undefined4 fn_0022eb14(); extern undefined4 fn_0022f5d8(); extern undefined4 fn_002309d8(); extern undefined4 fn_00231cb8();
extern undefined4 fn_00243550(); extern undefined4 fn_00246858(); extern undefined4 fn_003f5990(); extern undefined4 fn_003f59b4(); extern undefined4 fn_0069e710();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007c4da8; extern undefined4 DAT_007c4da9; extern undefined4 _DAT_0089369c;
