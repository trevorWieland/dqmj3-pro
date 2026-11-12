#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_001010c8(); extern undefined4 fn_0010b2b4(); extern undefined4 fn_0010b444(); extern int fn_0011c134(); extern int fn_00129e94(); extern int fn_00129f00();
extern undefined4 fn_00166824(); extern undefined8 fn_00301a9c(); extern int fn_0044fd88(); extern undefined4 fn_00452e1c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0089a619; extern undefined4 DAT_e0e046c7;
