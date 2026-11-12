#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern int * fn_0028aad0(); extern undefined4 fn_002b1f0c(); extern undefined4 fn_002b1f48(); extern undefined4 fn_002c1d14(); extern undefined4 fn_002c1f84();
extern undefined4 fn_002c6500(); extern undefined4 fn_002c6f28(); extern undefined4 fn_002c7154(); extern void fn_002c74d8(); extern undefined4 * fn_002c7f50(); extern int fn_0032d6f4();
extern int fn_006bfda8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00897804;
