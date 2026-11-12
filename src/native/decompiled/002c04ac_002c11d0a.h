#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern int fn_00172c98(); extern undefined4 fn_0025e31c(); extern undefined4 fn_002bfbb4(); extern int fn_002c11d0(); extern undefined4 fn_002e3e30();
extern undefined4 fn_002e3e9c(); extern undefined4 fn_002e3fac(); extern undefined4 fn_00345db8(); extern undefined4 fn_0034632c(); extern undefined4 fn_0066042c(); extern undefined4 fn_0068ab44();
extern undefined4 fn_0068b2a8(); extern int fn_006a833c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_002c0578; extern undefined4 DAT_00812c8c;
