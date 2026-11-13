#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_001010c8(); extern undefined4 fn_0013c500(); extern undefined4 fn_0014ded0(); extern int fn_0014df84(); extern undefined4 fn_0014e79c();
extern undefined4 fn_001585d4(); extern undefined8 fn_00169f1c(); extern undefined4 fn_00170704(); extern undefined4 fn_001707b4(); extern int fn_002febd8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008f9ce8; extern undefined4 DAT_008f9cf4;
