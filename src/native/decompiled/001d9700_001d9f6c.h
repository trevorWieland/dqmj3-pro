#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_0017fc28(); extern undefined4 fn_0017fcfc(); extern undefined4 fn_0017fde4(); extern undefined4 fn_0023ddec(); extern undefined4 fn_00303afc();
extern undefined4 fn_00525bd0(); extern undefined4 fn_005df8f8(); extern undefined4 * fn_005e846c(); extern undefined4 * fn_005efdbc(); extern bool fn_0069ee38(); extern bool fn_0069ee40();
extern undefined4 fn_006f72e0(); extern bool fn_006f7a20(); extern undefined4 fn_006f7a5c(); extern int fn_006f7a9c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0089179c; extern undefined4 DAT_008917a0; extern undefined4 DAT_008977e0;
