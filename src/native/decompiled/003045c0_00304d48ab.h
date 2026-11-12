#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0010fa20(); extern undefined4 fn_00117604(); extern undefined4 fn_00117668(); extern undefined4 fn_00117984(); extern undefined4 fn_00117ad8(); extern undefined4 fn_001286a8();
extern undefined4 fn_001286b4(); extern undefined4 fn_0012d73c(); extern undefined4 fn_001433d8(); extern int * fn_002feeb0(); extern undefined4 fn_005e6268(); extern undefined4 fn_005efee0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0085ad28;
