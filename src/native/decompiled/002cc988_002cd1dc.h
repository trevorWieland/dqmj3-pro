#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00144df4(); extern undefined4 * fn_00158f6c(); extern undefined8 fn_0017821c(); extern undefined4 fn_001a46f4(); extern undefined4 fn_0024e350();
extern undefined4 fn_002506e0(); extern int * fn_0028aad0(); extern undefined1 * fn_0028abc4(); extern undefined4 fn_0028b148(); extern undefined4 fn_0028b3b0(); extern void fn_002cd1dc();
extern undefined4 fn_002cd288(); extern undefined1 fn_00661088(); extern undefined4 fn_006b8538(); extern byte fn_006c41e4(); extern byte fn_006c4224(); extern undefined4 fn_00787f6c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897804;
