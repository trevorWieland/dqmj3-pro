#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00154ae0(); extern undefined8 fn_0017821c(); extern undefined4 fn_00242710(); extern undefined4 fn_002ea308(); extern int fn_003b237c();
extern int fn_003b2730(); extern int fn_003b37b0(); extern int fn_0066173c(); extern undefined4 fn_006bb52c(); extern bool fn_006c3a70(); extern bool fn_006c3a84();
extern undefined4 fn_006f7508(); extern undefined4 fn_006f7a0c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008275f0; extern undefined4 DAT_008977e0; extern undefined4 DAT_008977e4; extern undefined4 DAT_00897804;
