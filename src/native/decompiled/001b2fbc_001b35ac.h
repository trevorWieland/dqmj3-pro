#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00146590(); extern undefined4 fn_00157fb0(); extern int fn_00157ff4(); extern undefined4 * fn_0016b5f0(); extern undefined4 fn_00173d1c(); extern int fn_00173d40();
extern int fn_0018388c(); extern char * fn_00191f28(); extern undefined4 fn_0019813c(); extern undefined4 fn_0019d320(); extern uint * fn_0019e864(); extern undefined4 fn_001a36d4();
extern undefined4 fn_001b86e8(); extern undefined4 * fn_00665a44(); extern undefined4 fn_007434e8();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_001b3208; extern undefined4 DAT_001b3588; extern undefined4 DAT_007e19ac; extern undefined4 DAT_007edcd8;
extern undefined4 DAT_008bf754; extern undefined4 DAT_008bf75c; extern undefined4 DAT_008bf760; extern undefined4 DAT_008c06e8;
