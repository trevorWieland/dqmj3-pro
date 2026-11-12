#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_001028d4(); extern undefined4 fn_00176ec8(); extern undefined8 fn_0017821c(); extern undefined4 fn_00183718();
extern int fn_00247138(); extern int fn_00263560(); extern int fn_0026455c(); extern undefined4 fn_00264684(); extern undefined4 fn_0026483c(); extern undefined4 fn_002648b8();
extern undefined4 fn_00264afc(); extern int fn_00264d74(); extern undefined4 fn_002650cc(); extern undefined4 fn_002d096c(); extern uint fn_003035b0(); extern undefined4 fn_00692e98();
extern undefined4 fn_006a67f8(); extern int fn_006f6e30();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00248398; extern undefined4 DAT_002483a8; extern undefined4 DAT_00248538; extern undefined4 DAT_00896f40;
extern undefined4 DAT_00896f44; extern undefined4 DAT_00896f50; extern undefined4 DAT_008cd594; extern undefined4 DAT_008cd5a4;
