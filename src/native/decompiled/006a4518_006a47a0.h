#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00144810(); extern undefined4 fn_0014481c(); extern undefined4 fn_00176fb0(); extern undefined4 fn_0017fe34();
extern undefined4 fn_002334f0(); extern undefined4 fn_00263814(); extern undefined4 fn_002d0724(); extern undefined4 fn_00303afc(); extern undefined4 fn_0034fcd0(); extern undefined4 fn_00525bd0();
extern undefined4 fn_005df8f8(); extern undefined4 fn_005f2d30(); extern undefined4 fn_00660790(); extern undefined4 fn_0068c7e8(); extern bool fn_006a8714(); extern undefined1 fn_006b551c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00896d54; extern undefined4 DAT_00896d58; extern undefined4 DAT_008977e8;
