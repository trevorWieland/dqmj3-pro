#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_002792b4(); extern undefined4 fn_00279550(); extern undefined4 fn_002cd59c(); extern undefined4 * fn_002dcc34(); extern undefined4 fn_002fb61c();
extern uint fn_002fe310(); extern uint fn_002ff310(); extern undefined4 fn_00341260(); extern undefined4 fn_0035d2c8(); extern undefined4 * fn_0035d66c(); extern undefined4 fn_003d5b48();
extern int fn_0066173c(); extern undefined4 fn_006c89bc(); extern int fn_006c89fc(); extern bool fn_006c8cb8(); extern int fn_006c9504(); extern int fn_006c958c();
extern undefined4 fn_006f6fc4(); extern undefined4 fn_006f7a0c(); extern undefined4 fn_006f7a70(); extern undefined4 fn_006f7a84(); extern int fn_006f7a9c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007bec20; extern undefined4 DAT_00812c8c; extern undefined4 DAT_008977e0;
