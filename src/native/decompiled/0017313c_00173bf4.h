#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern int fn_00127a60(); extern undefined4 fn_001287dc(); extern uint fn_0013f638(); extern undefined4 fn_00143ac8(); extern undefined4 fn_00145b00();
extern undefined4 fn_0017cdc0(); extern undefined4 fn_0017ce0c(); extern undefined4 fn_0017d8f8(); extern undefined4 fn_0017df94(); extern undefined4 * fn_0017e758(); extern undefined4 fn_0017e7a0();
extern undefined4 fn_0017e80c(); extern undefined4 fn_0017eab4(); extern undefined4 * fn_0017eca4(); extern undefined4 fn_0018b588(); extern undefined1 * fn_0018b794(); extern undefined4 fn_0018b7fc();
extern undefined4 fn_00193fc0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00812c8c; extern undefined4 DAT_008582dc; extern undefined4 DAT_0085830c; extern undefined4 DAT_00858320;
extern undefined4 DAT_00858374;
