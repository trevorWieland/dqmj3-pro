#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00163868(); extern int fn_0020ad98(); extern int fn_002faa38(); extern uint fn_005f5c50(); extern int fn_006bd32c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007c339c; extern undefined4 DAT_007c339d; extern undefined4 DAT_007c339e; extern undefined4 DAT_007c339f;
extern undefined4 DAT_007c33a0; extern undefined4 DAT_00892460;
