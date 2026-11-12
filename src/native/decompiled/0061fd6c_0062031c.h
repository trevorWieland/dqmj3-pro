#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined1 fn_001639e4(); extern int fn_00176dc0(); extern undefined4 fn_0061be08(); extern undefined4 fn_0061f150(); extern int fn_0063a54c(); extern int fn_00691af0();
extern uint fn_0069235c(); extern undefined4 fn_006f3bdc(); extern byte fn_006f44fc(); extern bool fn_006f4868();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007f03c0; extern undefined4 DAT_007f08d0; extern undefined4 DAT_007f08d2; extern undefined4 DAT_007f08d3;
