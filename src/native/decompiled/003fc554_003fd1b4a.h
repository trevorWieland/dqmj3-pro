#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00100fc6(); extern uint fn_00101a50(); extern undefined4 fn_00145b00(); extern undefined4 fn_001482f4(); extern undefined4 fn_00159f34(); extern undefined4 fn_0016a43c();
extern undefined4 fn_0022ccb4(); extern undefined4 fn_0022cf0c(); extern undefined4 fn_0022f584(); extern undefined4 fn_00290aa4(); extern undefined4 fn_00290ae4(); extern undefined4 fn_002feef8();
extern undefined4 fn_0031c040(); extern undefined4 fn_0031c7d0(); extern undefined4 fn_0031ca5c(); extern undefined4 fn_00385b60(); extern undefined4 fn_0039bcdc(); extern undefined4 fn_0039bdf4();
extern undefined4 fn_0039be60(); extern undefined4 fn_0039be98(); extern undefined4 fn_0039c4c8(); extern undefined4 * fn_0039c504(); extern undefined4 fn_003e2ce4(); extern undefined4 fn_003fc820();
extern undefined4 fn_003fc8f8(); extern undefined4 fn_0042f1c0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_003fc690; extern undefined4 DAT_003fc694; extern undefined4 DAT_00812c8c; extern undefined4 DAT_00827f4c;
extern undefined4 DAT_0083626c; extern undefined4 DAT_008363dc; extern undefined4 DAT_00894e60; extern undefined4 DAT_00894e64;
extern undefined4 DAT_00894e68;
