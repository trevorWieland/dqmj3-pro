#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00102908(); extern undefined4 fn_0011c184(); extern undefined4 fn_0012d6b0(); extern undefined1 fn_00145aac();
extern undefined4 fn_002afd5c(); extern undefined4 fn_002afe58(); extern undefined4 fn_00343558(); extern undefined4 fn_00343ca8(); extern int fn_006afe90();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003433b8; extern undefined4 DAT_003433c0; extern undefined4 DAT_00825100; extern undefined4 DAT_008977e0;
extern undefined4 s_GT;
