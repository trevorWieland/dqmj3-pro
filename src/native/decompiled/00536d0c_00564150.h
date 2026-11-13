#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00154ac8(); extern undefined8 fn_001694e4(); extern int * fn_0028aad0(); extern undefined4 fn_002b325c(); extern undefined4 fn_002e3e9c(); extern undefined4 fn_00346ed0();
extern int fn_0053e3f4(); extern undefined4 fn_0053fb0c(); extern uint * fn_006dc64c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897804; extern unsigned char *DAT_008c3450; extern undefined4 DAT_008c3454; extern undefined4 DAT_008c3458;
extern undefined4 DAT_008c345c; extern undefined4 DAT_008c3460; extern undefined4 DAT_008c3464; extern undefined4 DAT_008c3468;
extern undefined4 DAT_008c346c; extern undefined4 DAT_008c3470;
