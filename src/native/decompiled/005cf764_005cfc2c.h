#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00166824(); extern undefined8 fn_0017821c(); extern undefined4 fn_001f74ec(); extern int * fn_0028aad0(); extern undefined4 fn_002ff628();
extern undefined4 fn_005cf2b8(); extern undefined4 fn_005cf58c(); extern void fn_005cfc2c(); extern undefined4 fn_005cfd88(); extern undefined4 fn_005d0330(); extern undefined4 fn_005d0ccc();
extern undefined4 fn_00604728(); extern undefined4 fn_007957d0(); extern uint * fn_007959b4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00890b20; extern undefined4 DAT_00897804; extern undefined4 DAT_008c7635;
