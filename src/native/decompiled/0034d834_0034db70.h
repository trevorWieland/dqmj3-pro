#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001638a0(); extern int fn_00191238(); extern undefined4 fn_002c8f50(); extern undefined4 fn_002feef8(); extern undefined4 fn_003e5ab8(); extern undefined4 fn_003e5bc0();
extern int fn_005ea33c(); extern undefined4 fn_005ed74c(); extern undefined4 fn_006b64b0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007bd7ac; extern undefined4 DAT_00897804; extern undefined4 PTR_LAB_00825f6c;
