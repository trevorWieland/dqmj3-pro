#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern undefined4 fn_0013d0fc(); extern undefined4 * fn_0015ece0(); extern undefined4 fn_0030233c(); extern undefined4 fn_004600b4(); extern undefined4 fn_00460784();
extern int fn_004b61c8(); extern longlong fn_006d39e4(); extern undefined4 fn_00769544(); extern undefined4 fn_0076ea8c(); extern undefined4 fn_00798d0c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008b6510; extern undefined4 DAT_008b6514;
