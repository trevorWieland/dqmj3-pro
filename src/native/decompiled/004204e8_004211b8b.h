#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_001f7350(); extern undefined4 fn_001f7438(); extern undefined4 fn_001f748c(); extern undefined4 fn_001f7624(); extern undefined4 fn_001f7a98();
extern undefined4 * fn_001f7e18(); extern undefined4 * fn_001f8010(); extern undefined4 * fn_0024ddfc(); extern undefined4 fn_0028e434(); extern undefined4 fn_002f96c4(); extern undefined4 fn_002f9da0();
extern int fn_002fa328(); extern undefined4 fn_002feef8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007d47d0; extern undefined4 DAT_007d49ec; extern undefined4 DAT_007d4dd4; extern undefined4 DAT_007d4e24;
extern undefined4 DAT_00812c8c; extern undefined4 DAT_0083aa58; extern undefined4 DAT_0083aa88; extern undefined4 DAT_0083aa9c;
