#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001287d4(); extern undefined4 fn_00144810(); extern undefined4 fn_0014481c(); extern undefined4 fn_001cc324(); extern undefined4 fn_001fd428(); extern undefined4 fn_00263814();
extern undefined4 fn_0066eb64(); extern undefined4 fn_006b6f3c(); extern undefined4 fn_006b71a8(); extern undefined4 fn_006f9b80();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00896cbc; extern undefined4 DAT_00896cc0; extern undefined4 DAT_00896cc4;
extern undefined4 DAT_008977e8; extern undefined4 DAT_00897850; extern undefined4 DAT_008cd180; extern undefined4 DAT_008cd190;
extern undefined4 DAT_008cd224;
