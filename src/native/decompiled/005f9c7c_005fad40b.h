#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_001f74d8(); extern undefined4 fn_00321598(); extern undefined4 fn_005baef4(); extern undefined4 fn_005bcf78(); extern int fn_005faf48();
extern undefined1 fn_0066e158(); extern undefined4 fn_006899f4(); extern undefined4 * fn_0068ab5c(); extern undefined4 fn_006ba250();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005faa14; extern undefined4 DAT_005faa28; extern undefined4 DAT_00812c8c; extern undefined4 DAT_0084e2b8;
extern undefined4 DAT_008951c0; extern undefined4 DAT_00898840;
