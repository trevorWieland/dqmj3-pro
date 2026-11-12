#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001028d4(); extern undefined4 fn_00102cc8(); extern undefined4 fn_00146590(); extern undefined4 fn_0017d90c(); extern int * fn_0017d948(); extern undefined1 * fn_0018b794();
extern undefined4 fn_0018d4fc(); extern char * fn_00191f20(); extern undefined4 fn_0019ba68(); extern uint * fn_0019e864(); extern undefined4 fn_001a2b2c(); extern undefined4 fn_001a36d4();
extern int fn_001a5350(); extern undefined4 fn_001a98f8(); extern undefined4 fn_001a9c1c(); extern uint * fn_001ab258(); extern undefined4 fn_001ac8ac(); extern undefined4 fn_001ace58();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_001a85e4; extern undefined4 DAT_001a85e8; extern undefined4 DAT_001a85f0; extern undefined4 DAT_001a85f8;
extern undefined4 DAT_008ef5bc; extern undefined4 DAT_008f9d08;
