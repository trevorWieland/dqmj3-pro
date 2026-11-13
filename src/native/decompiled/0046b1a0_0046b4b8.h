#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern undefined4 * fn_0015ecdc(); extern undefined4 fn_00455e8c(); extern undefined4 fn_0045c8f4(); extern int fn_0045cbd8(); extern void fn_0046b1a0();
extern undefined4 fn_0048a058(); extern undefined4 fn_004b301c(); extern undefined4 fn_004b3b48();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007dba44; extern undefined4 DAT_00852f6c; extern undefined4 DAT_008e778c; extern undefined4 DAT_80010001;
