#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_0021472c(); extern undefined4 fn_002178f8(); extern undefined4 * fn_00226f28(); extern undefined4 fn_0023fa74(); extern undefined4 fn_002d8370();
extern undefined4 fn_002dbc28(); extern undefined4 fn_002dbe28(); extern int * fn_002defe0(); extern undefined4 fn_002fc8f0(); extern undefined4 fn_002fca3c(); extern undefined4 fn_002fcf5c();
extern undefined4 fn_002fd648(); extern undefined4 fn_00365758(); extern byte fn_0042838c(); extern undefined4 fn_00692f44(); extern int fn_006afe90(); extern uint fn_006b520c();
extern undefined4 fn_006bd5fc(); extern undefined4 fn_006c392c(); extern undefined4 fn_006c3954(); extern int fn_006c3994(); extern int fn_006c39bc(); extern int fn_006c89fc();
extern undefined4 fn_006f6fc4(); extern undefined4 fn_006f7358(); extern undefined4 fn_006f7508(); extern bool fn_006f7a20(); extern undefined4 * fn_007b867c(); extern undefined4 * fn_007b8758();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0; extern undefined4 DAT_00897804; extern undefined4 PTR_FUN_008216ac; extern undefined4 PTR_FUN_008216e8;
