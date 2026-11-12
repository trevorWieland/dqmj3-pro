#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern undefined4 fn_00163868(); extern undefined4 fn_001c7764(); extern bool fn_001e6e78(); extern undefined4 fn_00215aec(); extern undefined4 fn_0023dca4();
extern int fn_0023de00(); extern undefined1 fn_00242b6c(); extern undefined4 fn_002fdf94(); extern undefined4 fn_005f2d30(); extern uint fn_006a9938(); extern int fn_006aa6e0();
extern undefined4 fn_006b0000(); extern undefined4 fn_006b1300(); extern int fn_006c9504(); extern undefined4 fn_006f7a84();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0082b0d4; extern undefined4 DAT_008977e0; extern undefined4 PTR_LAB_0082b0fc;
