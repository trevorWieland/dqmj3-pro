#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern undefined4 fn_0015960c(); extern undefined1 fn_001639e4(); extern undefined4 fn_00164a34(); extern int fn_00165020();
extern undefined4 fn_0017481c(); extern int fn_00174870(); extern undefined4 fn_001759f8(); extern undefined4 fn_00175a0c(); extern char * fn_00175a48(); extern undefined4 fn_00175a90();
extern int fn_00175aa4(); extern int fn_00175ab8(); extern char * fn_00175c14(); extern undefined4 fn_00176ec8(); extern undefined8 fn_0017821c(); extern char * fn_00182d68();
extern undefined4 fn_00183718(); extern uint fn_003035b0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007ba238; extern undefined4 DAT_007ba248; extern undefined4 DAT_008977e4;
