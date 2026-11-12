#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern ulonglong fn_00169c20(); extern undefined * fn_00172fc4(); extern int * fn_0017d948(); extern undefined4 fn_0019bb90(); extern undefined4 fn_001a071c(); extern undefined4 fn_001a0728();
extern undefined4 fn_001a0958(); extern undefined4 fn_001a0abc(); extern undefined4 fn_001a0b88(); extern undefined4 * fn_001a0ba8(); extern undefined4 fn_001a0be0(); extern int fn_001a0c2c();
extern undefined4 fn_001a0c94(); extern undefined4 fn_002feef8(); extern undefined4 fn_002ff628();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00858ccc; extern undefined4 DAT_008c765a;
