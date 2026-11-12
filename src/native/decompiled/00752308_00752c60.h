#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern undefined4 fn_0014ecf0(); extern undefined4 fn_0014f4d8(); extern undefined4 fn_00156234(); extern undefined4 * fn_0015ecdc(); extern undefined4 * fn_00170f54();
extern undefined4 fn_002fec40(); extern undefined4 fn_002ff628(); extern undefined4 * fn_00301f50(); extern undefined4 fn_00456400(); extern undefined4 fn_00479b1c(); extern undefined4 fn_00479c98();
extern undefined4 fn_0048a058(); extern undefined4 fn_0048a6e8(); extern undefined4 fn_004b2f0c(); extern undefined4 fn_004b626c(); extern undefined4 * fn_004b6318(); extern undefined4 fn_004b8d4c();
extern uint fn_006d3b44(); extern bool fn_006d3b74(); extern undefined4 fn_007519e0(); extern undefined4 fn_00751a60(); extern void fn_00752790(); extern void fn_00752c60();
extern undefined4 fn_00752db4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00752538; extern undefined4 DAT_007526d0; extern undefined4 DAT_00752788; extern undefined4 DAT_00752c58;
extern undefined4 DAT_00752da8; extern undefined4 DAT_007d89e4; extern undefined4 DAT_007d8abc; extern undefined4 DAT_00853500;
extern undefined4 DAT_00855900;
