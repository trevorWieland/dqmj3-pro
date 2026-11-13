#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00123b08(); extern undefined4 fn_0013c6f8(); extern int fn_0013c830(); extern undefined8 fn_0017821c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008bfbac; extern undefined4 DAT_008bfbae; extern undefined4 DAT_008bfbaf; extern undefined4 DAT_008bfbb0;
extern undefined4 DAT_008bfbb2; extern undefined4 DAT_008bfbb4; extern undefined4 DAT_008bfbc8; extern undefined4 DAT_008bfbcc;
extern undefined4 DAT_008ebd3c;
