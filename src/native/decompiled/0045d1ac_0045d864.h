#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_001010c8(); extern int fn_0011c134(); extern undefined4 * fn_0015ece0(); extern undefined4 fn_0015ef58(); extern bool fn_00454b8c(); extern undefined4 * fn_00454d0c();
extern undefined4 fn_0045ceac(); extern undefined4 fn_0045cfec(); extern undefined4 fn_0045d104(); extern undefined4 fn_0045d1ac(); extern undefined4 fn_0045d4a0(); extern undefined4 fn_0045d864();
extern undefined4 * fn_004b5488(); extern undefined4 fn_0074a4c8(); extern undefined4 fn_0074a528(); extern undefined4 fn_0074a598();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00852740; extern undefined4 DAT_008b6510; extern undefined4 DAT_008b6514;
