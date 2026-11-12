#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00127a60(); extern undefined4 fn_001718c4(); extern undefined8 fn_0017821c(); extern int * fn_0017d948(); extern undefined4 fn_0018a69c(); extern undefined4 fn_0054a2d4();
extern undefined4 fn_0054a918(); extern undefined4 * fn_0054d240();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00000001; extern unsigned char *DAT_0089a918;
