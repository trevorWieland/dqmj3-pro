#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001481c8(); extern undefined4 fn_00178f9c(); extern undefined4 fn_001828f0(); extern undefined4 fn_001923e0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008c5040; extern undefined4 DAT_008c504d; extern undefined4 s_flag_bflyt_008c5042;
