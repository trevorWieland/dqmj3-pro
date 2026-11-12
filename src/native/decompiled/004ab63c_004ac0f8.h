#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100414(); extern int fn_00101a1c(); extern undefined4 fn_001249d0(); extern int fn_0013ce04(); extern undefined4 * fn_0013ce98(); extern undefined4 fn_0015ef4c();
extern undefined4 fn_00455e10(); extern undefined4 fn_0046d5f8(); extern undefined4 fn_0046d70c(); extern undefined4 fn_0046e0a4(); extern undefined4 * fn_0047ebf0(); extern undefined4 fn_0047fb68();
extern undefined4 fn_0047fba4(); extern int fn_00489b2c(); extern undefined4 fn_0048ca64(); extern void fn_004abc80(); extern undefined4 fn_004ac184(); extern undefined4 * fn_004b73b0();
extern undefined4 fn_004b7520(); extern undefined4 fn_004b8d4c(); extern undefined4 fn_004b8d6c(); extern undefined4 fn_004ba7d4(); extern undefined4 fn_0074a528(); extern undefined4 fn_0074ccc0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_004abf58; extern undefined4 DAT_004abf5c; extern undefined4 DAT_008e9560; extern undefined4 DAT_008e9564;
extern undefined4 DAT_008e9568; extern undefined4 DAT_008e957c; extern undefined4 DAT_008e9580; extern undefined4 PTR_FUN_0085557c;
