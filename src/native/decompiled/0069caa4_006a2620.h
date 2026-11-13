#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00144810(); extern undefined4 fn_0014481c(); extern undefined4 fn_00145b00(); extern undefined4 fn_00163868(); extern undefined4 fn_00263814(); extern undefined4 fn_002cf370();
extern undefined4 fn_002cf5e4(); extern undefined4 fn_002cfa2c(); extern undefined4 fn_002cfa60(); extern undefined4 fn_002cfa94(); extern uint * fn_0054e5b8(); extern undefined4 fn_0054f158();
extern int * fn_00550670(); extern int fn_00560bf4(); extern undefined4 fn_00560c1c(); extern undefined4 fn_00561320(); extern undefined4 fn_00660790(); extern undefined4 fn_0068c7e8();
extern uint * fn_0069c778(); extern undefined1 fn_006a8730(); extern bool fn_006a8a84(); extern undefined4 fn_006b6c9c(); extern undefined4 fn_006b6d3c(); extern int fn_006b6e94();
extern undefined4 fn_006ba7d4(); extern undefined4 fn_006dc524(); extern undefined4 fn_007984ec();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008977e8;
