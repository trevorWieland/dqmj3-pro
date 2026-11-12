#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100b58(); extern int fn_00100fc6(); extern uint fn_00147e6c(); extern uint fn_00154328(); extern int fn_00156f30();
extern int fn_002febd8(); extern undefined4 fn_002ff628();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008c7608; extern undefined4 DAT_008c760c;
