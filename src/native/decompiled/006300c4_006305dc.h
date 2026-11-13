#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined8 fn_0017821c(); extern undefined4 * fn_00301f50(); extern uint fn_006207d0(); extern int fn_006228ac();
extern undefined4 fn_0062454c(); extern undefined1 * fn_0062dbc8(); extern undefined4 fn_00632cb0(); extern undefined4 fn_0063a650(); extern undefined4 fn_0063ac14(); extern undefined4 fn_00654c08();
extern undefined4 fn_006564f4(); extern undefined4 * fn_00656538(); extern undefined4 fn_006565b8(); extern int fn_006565e0(); extern int fn_0068f87c(); extern byte fn_006f44fc();
extern int fn_00797194(); extern int * fn_007971f8(); extern int fn_007a1c04();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008bf6a8;
