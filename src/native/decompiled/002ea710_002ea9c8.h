#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_0012d73c(); extern undefined4 fn_0012f208(); extern undefined4 * fn_00241ddc(); extern void fn_002ea9c8(); extern undefined4 fn_002feef8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008210a8; extern undefined4 DAT_00892874; extern undefined4 DAT_00892878; extern undefined4 DAT_00892880;
extern undefined4 DAT_0089288c; extern undefined4 DAT_00892890; extern undefined4 DAT_00892894; extern undefined4 DAT_00892898;
