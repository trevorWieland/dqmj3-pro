#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00146590(); extern void fn_0023eef8(); extern undefined4 fn_00303afc(); extern uint fn_006a9938(); extern uint fn_006a9960(); extern uint fn_006a99b0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0081d184; extern undefined4 DAT_008c62fc; extern undefined4 DAT_008f9e2c; extern undefined4 DAT_008f9e30;
extern undefined4 DAT_008f9e34;
