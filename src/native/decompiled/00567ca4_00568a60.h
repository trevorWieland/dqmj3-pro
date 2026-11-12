#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_001c7160(); extern undefined4 fn_00214c4c(); extern undefined4 fn_00215e38(); extern undefined4 fn_00217988();
extern undefined4 fn_002fdea0(); extern undefined4 fn_002fdeac(); extern undefined4 fn_002fdebc(); extern undefined4 fn_00525bd0(); extern undefined4 fn_00567f0c(); extern undefined4 fn_00683320();
extern int fn_006b0d10(); extern undefined4 fn_006bb518(); extern undefined4 fn_006bb538(); extern undefined4 fn_006f7a84();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0;
