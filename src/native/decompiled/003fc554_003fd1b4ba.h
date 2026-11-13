#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00178f9c(); extern undefined4 fn_00385b88(); extern int * fn_0068897c(); extern undefined4 fn_00688c04(); extern undefined4 * fn_0068ad5c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003fce8c; extern undefined4 DAT_003fcea4; extern undefined4 DAT_003fcebc; extern undefined4 DAT_0081cd10;
extern undefined4 DAT_0089584c; extern undefined4 DAT_00895850; extern undefined4 DAT_00895854; extern undefined4 PTR_FUN_00836504;
