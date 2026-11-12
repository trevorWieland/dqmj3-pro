#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0014481c(); extern undefined4 fn_00145b00(); extern float fn_001a4a80(); extern undefined4 fn_00263814(); extern undefined4 fn_002feef8(); extern undefined4 fn_0068eb0c();
extern bool fn_0068f0e0(); extern undefined4 fn_006a83d8(); extern undefined4 fn_006f7df8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008928cc; extern undefined4 DAT_008928d0; extern undefined4 DAT_008977e8;
