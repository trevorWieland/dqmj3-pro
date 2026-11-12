#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00107aac(); extern undefined4 fn_00163868(); extern undefined8 fn_00169f1c(); extern int fn_001d4f28();
extern undefined4 fn_003634ec(); extern undefined4 fn_003d5fc8(); extern undefined4 fn_005f65d4(); extern undefined4 fn_005f65ec(); extern int fn_0066173c(); extern undefined4 fn_006af3a8();
extern undefined4 fn_006c8ce8(); extern int fn_006c97c0(); extern undefined4 fn_006c9c84(); extern undefined4 fn_0079e460(); extern undefined4 fn_0079e608(); extern undefined4 fn_0079e764();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0;
