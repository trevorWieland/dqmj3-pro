#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00162d44(); extern undefined4 fn_00162d54(); extern undefined4 fn_0016a9b0(); extern undefined4 fn_00175978(); extern undefined4 fn_0017fc3c(); extern undefined4 fn_0017fcfc();
extern undefined4 fn_0017fde4(); extern undefined4 fn_002ee5ac(); extern undefined4 fn_002feef8(); extern undefined4 fn_005ea608(); extern undefined4 fn_005ea624(); extern undefined4 fn_0068c694();
extern undefined4 fn_0068c7e8(); extern undefined4 fn_006ebee0(); extern int fn_006ebf14(); extern bool fn_006ebf84(); extern undefined4 fn_006fa358();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007d6f20; extern undefined4 DAT_007d6f24; extern undefined4 DAT_007d6f28; extern undefined4 DAT_007d6f2c;
extern undefined4 DAT_008977e8; extern undefined4 PTR_FUN_0081bce8;
