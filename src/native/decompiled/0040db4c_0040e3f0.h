#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_00166824(); extern undefined4 fn_001a46f4(); extern undefined4 fn_002fb61c(); extern undefined4 fn_002ff628();
extern undefined4 fn_00341260(); extern undefined4 fn_00368c90(); extern undefined4 fn_003690f4(); extern int fn_003b1928(); extern bool fn_003b21d0(); extern int fn_003b237c();
extern int fn_003b2730(); extern int fn_003b37b0(); extern bool fn_003f2b64(); extern undefined4 fn_005f1940(); extern int fn_006afabc(); extern uint fn_006b520c();
extern undefined4 fn_006c32a8(); extern bool fn_006c3a70(); extern bool fn_006c3a84(); extern undefined4 fn_006f7358(); extern undefined4 fn_006f7508(); extern int fn_006f7770();
extern undefined4 fn_006f7a0c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0; extern undefined4 DAT_00897804; extern undefined4 DAT_008c762b; extern undefined4 PTR_FUN_008380e8;
