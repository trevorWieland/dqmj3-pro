#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00162d44(); extern undefined4 fn_00162d54(); extern undefined4 fn_001747e8(); extern undefined4 fn_00176d68(); extern undefined4 fn_0017fde4();
extern undefined4 fn_001969a4(); extern undefined4 * fn_001b55a4(); extern undefined4 fn_001e9b24(); extern undefined4 fn_00225ebc(); extern undefined4 fn_00258120(); extern undefined4 fn_0025868c();
extern undefined4 fn_00258f10(); extern undefined8 fn_0026f7c8(); extern undefined4 fn_00278aac(); extern undefined4 fn_00279ae4(); extern undefined4 fn_002feef8(); extern undefined4 fn_0033e6c8();
extern undefined4 fn_0033e798(); extern int fn_0033e8d4(); extern undefined4 fn_006882e4(); extern undefined4 fn_0069c2c8(); extern bool fn_006ebf84(); extern undefined4 fn_006f72c8();
extern undefined4 fn_006f7a5c(); extern undefined4 fn_006f7a84(); extern int fn_006f7a9c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977e0; extern undefined4 PTR_FUN_00850e48;
