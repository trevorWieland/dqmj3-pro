#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00129d4c(); extern uint fn_00147e6c(); extern undefined4 fn_001638a0(); extern undefined4 fn_00163988(); extern undefined4 fn_00173b98(); extern void fn_002fb70c();
extern undefined4 fn_005e9db0(); extern int fn_006a93fc(); extern int fn_006afe90(); extern undefined4 fn_006ebdc0(); extern int fn_006ebdd4(); extern undefined4 fn_006f73a0();
extern undefined4 fn_006f7a0c(); extern undefined4 fn_006f7a5c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_002fbe60; extern undefined4 DAT_002fbea4; extern undefined4 DAT_0082169c; extern undefined4 DAT_00859070;
extern undefined4 DAT_00891960; extern undefined4 DAT_008977d0; extern undefined4 DAT_008977e0; extern undefined4 DAT_00897808;
extern undefined4 DAT_0089780c;
