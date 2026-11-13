#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined8 fn_00178324(); extern undefined4 fn_002ff9c0(); extern undefined4 fn_002ff9c8(); extern undefined4 fn_002ffa98(); extern undefined4 fn_002ffac8(); extern undefined8 fn_002ffaf8();
extern void fn_003001f0(); extern int fn_003004e8(); extern undefined4 fn_00423d6c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00000011;
