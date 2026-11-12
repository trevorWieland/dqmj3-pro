#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_001010c8(); extern uint fn_00147e6c(); extern int fn_001b474c(); extern undefined4 * fn_001b5a30(); extern undefined8 fn_001b8438(); extern undefined4 fn_001c0e78();
extern int fn_002febd8(); extern undefined4 fn_002fec40(); extern undefined8 fn_00301a9c(); extern undefined4 * fn_00301f50(); extern int fn_006dc488(); extern void fn_007407d4();
extern void fn_00740a94(); extern undefined4 fn_00740b44(); extern undefined4 fn_00740c1c(); extern undefined4 fn_007410e0(); extern int fn_00741220();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0074072c; extern undefined4 DAT_007407d0; extern undefined4 DAT_00740a28; extern undefined4 DAT_00740c10;
extern undefined4 DAT_00740ea8; extern undefined4 DAT_00740eb0; extern undefined4 DAT_00740eb8; extern undefined4 DAT_00740ee4;
extern undefined4 DAT_007d5f08; extern undefined4 DAT_007d5f24; extern undefined4 DAT_007d5f3d; extern undefined4 DAT_007d5f4e;
extern undefined4 DAT_007d5fca; extern undefined4 DAT_007d6033; extern code *DAT_00899ec0; extern undefined4 DAT_00899ec4;
