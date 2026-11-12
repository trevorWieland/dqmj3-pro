#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0012d6a4(); extern undefined4 fn_00170704(); extern undefined4 fn_001707b4(); extern int fn_001ad654(); extern int fn_002febd8(); extern undefined8 fn_00301a9c();
extern undefined4 * fn_00301f50(); extern int fn_005280a4(); extern undefined4 fn_00528a4c(); extern undefined4 fn_00529b0c(); extern undefined4 fn_0052a79c(); extern int fn_0052aa5c();
extern undefined4 fn_0052b8b4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008575c4; extern undefined4 DAT_008c0360; extern undefined4 DAT_008c0364;
