#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_00121838(); extern undefined4 fn_001218d4(); extern undefined4 fn_00145b00(); extern undefined4 fn_00190d50(); extern undefined4 fn_001d8140();
extern undefined4 fn_002feef8(); extern undefined4 fn_00385b60(); extern uint * fn_003d4e64(); extern undefined4 fn_00424eac(); extern undefined4 fn_005ca270(); extern int fn_005ca2ac();
extern int * fn_0068897c(); extern undefined4 fn_006f7a5c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_00891a34; extern undefined4 DAT_00891a60; extern undefined4 DAT_00891a64;
extern undefined4 DAT_00891a68; extern undefined4 DAT_00891a6c; extern undefined4 DAT_008977e0; extern undefined4 DAT_00897800;
