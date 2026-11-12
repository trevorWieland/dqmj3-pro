#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0010fa20(); extern undefined4 fn_00117984(); extern undefined8 fn_0017821c(); extern undefined4 fn_0017fe34(); extern int fn_0023b858(); extern undefined4 fn_002b0698();
extern int fn_003415b0(); extern int fn_005e29c4(); extern void fn_006c3e34(); extern undefined4 fn_006c3ebc(); extern undefined4 fn_006dcdb8(); extern int fn_006eb278();
extern undefined4 fn_006f7388(); extern undefined4 fn_006f7508(); extern bool fn_006f7a20();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0;
