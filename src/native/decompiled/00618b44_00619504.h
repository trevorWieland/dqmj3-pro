#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00146590(); extern undefined1 fn_001639e4(); extern undefined8 fn_00169f1c(); extern int fn_00176dc0(); extern int fn_00182924(); extern longlong fn_00300f74();
extern undefined8 fn_00301a9c(); extern undefined4 fn_0061be08(); extern undefined4 fn_0061f150(); extern uint fn_006207d0(); extern undefined4 fn_0063a5a4(); extern bool fn_00655488();
extern int fn_0068f87c(); extern undefined4 fn_0068fd00(); extern undefined4 fn_0068fea8(); extern undefined4 fn_006914c4(); extern int fn_00691af0(); extern int fn_006925d4();
extern byte fn_006f44fc();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007f00a8;
