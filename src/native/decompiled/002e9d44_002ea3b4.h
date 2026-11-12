#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_0014cd2c(); extern undefined8 fn_0017821c(); extern undefined4 fn_002cd56c(); extern int fn_002ea524(); extern undefined4 fn_002feca8(); extern undefined4 fn_0030c230();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00892854; extern undefined4 DAT_00892858; extern undefined4 DAT_0089285c; extern undefined4 DAT_00892860;
extern undefined4 DAT_00897804;
