#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b08(); extern undefined4 fn_00145c5c(); extern undefined4 fn_00146034(); extern undefined4 fn_00146050(); extern undefined4 fn_001463c0(); extern undefined4 fn_001464f4();
extern undefined4 fn_001502b0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0089a520; extern code *DAT_0089a524; extern undefined4 DAT_0089a530; extern undefined4 DAT_008e3078;
extern undefined4 DAT_008e3084; extern undefined4 DAT_008e310c;
