#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined8 fn_00169f1c(); extern undefined8 fn_0017821c(); extern int fn_001d4f28(); extern undefined1 fn_00242b0c(); extern undefined1 fn_00242b6c();
extern undefined1 fn_00661094(); extern int fn_006616f4(); extern undefined1 fn_00661714(); extern int fn_0066173c(); extern undefined4 fn_006c9184(); extern int fn_006c9754();
extern void fn_006c9c84(); extern undefined4 fn_0079e460(); extern undefined4 fn_0079e764();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007bd96c; extern undefined4 DAT_007bd990;
