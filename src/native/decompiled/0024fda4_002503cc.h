#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_001010c8(); extern undefined4 fn_00122c48(); extern undefined4 fn_0013ef80(); extern int fn_001746f4(); extern undefined8 fn_0017821c(); extern int fn_0020cb7c();
extern undefined4 fn_0022983c(); extern int fn_002422fc(); extern undefined4 fn_0025bddc(); extern undefined4 fn_0028aa48(); extern undefined8 fn_00301a9c(); extern uint fn_005f5c50();
extern undefined2 fn_0068f6a8(); extern int fn_006b4fb8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007ba008; extern undefined4 DAT_007ba009; extern undefined4 DAT_007ba00a; extern undefined4 DAT_007ba00b;
extern undefined4 DAT_007ba00c; extern undefined4 DAT_0088fcb8; extern undefined4 DAT_0088fcd8; extern undefined4 DAT_00897804;
