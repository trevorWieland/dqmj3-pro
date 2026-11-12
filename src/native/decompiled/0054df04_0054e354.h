#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined8 fn_0017821c(); extern undefined4 fn_0054a814(); extern undefined4 fn_0054de6c(); extern uint * fn_0054e5b8(); extern uint * fn_0054f20c(); extern uint * fn_0054f4bc();
extern int * fn_00550670(); extern int fn_00560bcc(); extern int fn_00560bf4(); extern undefined4 fn_00560c1c(); extern undefined4 fn_00561320(); extern int fn_006e2ab0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007d861c; extern undefined4 DAT_007d8634; extern undefined4 DAT_007d8724; extern undefined4 DAT_007d873c;
