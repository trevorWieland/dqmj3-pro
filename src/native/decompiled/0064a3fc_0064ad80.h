#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern undefined4 fn_0063b148(); extern undefined4 fn_0064df40(); extern undefined4 fn_0064f124(); extern undefined4 fn_0064f714(); extern undefined4 fn_0064facc();
extern undefined4 fn_0064fb18(); extern undefined4 fn_0064ff88(); extern undefined4 fn_006f0a30(); extern bool fn_006f0a88(); extern undefined4 fn_006f0ae4(); extern short * fn_006f14a4();
extern short * fn_006f14ec(); extern undefined4 fn_006f2fa0(); extern undefined4 fn_007821e0(); extern undefined4 fn_0078248c(); extern undefined4 fn_00782954(); extern undefined4 fn_00782bb8();
extern undefined4 fn_00783550(); extern undefined4 fn_00784b74(); extern undefined4 fn_0079aa0c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008595d8;
