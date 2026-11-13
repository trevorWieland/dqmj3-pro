#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0015e590(); extern int fn_0017c354(); extern int fn_0017c8a0(); extern undefined4 fn_0017d77c(); extern uint fn_00191dd4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00200080; extern undefined4 DAT_008c07c0; extern undefined4 DAT_008c07c4; extern undefined4 DAT_008f314c;
