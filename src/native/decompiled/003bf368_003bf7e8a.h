#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00145b00(); extern undefined4 fn_001481c8(); extern undefined4 fn_00178f9c(); extern undefined4 fn_0017d96c(); extern undefined4 fn_0018a618(); extern undefined4 fn_0019501c();
extern undefined4 fn_001c8888(); extern undefined4 fn_001c8c60(); extern undefined4 * fn_00301f50(); extern undefined4 * fn_003bf7e8(); extern undefined1 fn_006b51cc(); extern int fn_006b630c();
extern undefined4 fn_006e1ee8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003bf428; extern undefined4 DAT_003bf5d0; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00860cb4;
extern undefined4 DAT_008957a0; extern undefined4 DAT_008957a4; extern undefined4 DAT_008957a8; extern undefined4 DAT_00897804;
extern undefined4 DAT_0089a92c;
