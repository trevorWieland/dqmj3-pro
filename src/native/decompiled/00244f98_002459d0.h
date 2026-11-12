#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100b58(); extern int fn_00100fc6(); extern undefined4 fn_001028d4(); extern undefined4 fn_0011dda8(); extern undefined4 fn_001638a0(); extern undefined8 fn_0017821c();
extern undefined4 fn_00178f9c(); extern undefined4 fn_0017a11c(); extern int * fn_001827b0(); extern undefined4 fn_001828f0(); extern undefined4 fn_00190d50(); extern undefined4 fn_001c80ac();
extern undefined4 fn_00245bb8(); extern undefined4 fn_006896e0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0081d590; extern undefined4 DAT_0088fe78; extern undefined4 DAT_0088fe8c; extern undefined4 DAT_0088fea0;
