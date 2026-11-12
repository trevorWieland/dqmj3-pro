#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00146590(); extern undefined4 fn_001581d0(); extern undefined4 fn_00173d1c(); extern int fn_00173d40(); extern int fn_00173d4c(); extern undefined4 fn_0017875c();
extern undefined4 fn_0017ff68(); extern int fn_0017ff94(); extern int fn_0018388c(); extern undefined4 fn_0019ba68(); extern undefined4 fn_0019d680(); extern uint * fn_0019e864();
extern undefined4 fn_0019e8c4(); extern undefined4 fn_002fece8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0017724c; extern undefined4 DAT_00177464; extern undefined4 DAT_0017747c; extern undefined4 DAT_0081e540;
