#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_001010c8(); extern int fn_00101d80(); extern undefined4 fn_001028d4(); extern undefined4 fn_00159f34(); extern undefined4 fn_002782b4();
extern undefined4 fn_003191f8(); extern int fn_00661324(); extern bool fn_006a7f8c(); extern int fn_006f7a9c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0065cb9c; extern undefined4 DAT_0065cbd4; extern undefined4 DAT_00869ea0; extern undefined4 DAT_00869ea8;
extern undefined4 DAT_00869eb0; extern undefined4 DAT_00869eb8; extern undefined4 DAT_00869ec0; extern undefined4 DAT_00869f40;
extern undefined4 DAT_008977e0; extern undefined4 DAT_008cdb24; extern undefined4 DAT_008cdb64;
