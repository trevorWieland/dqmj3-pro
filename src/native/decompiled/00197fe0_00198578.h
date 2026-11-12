#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001028d4(); extern undefined4 fn_00146590(); extern undefined4 fn_0017ffac(); extern int fn_00190c50(); extern char * fn_00191f20(); extern undefined4 fn_00197b18();
extern undefined4 fn_0019ba68(); extern uint * fn_0019e864(); extern undefined4 fn_001a1dc8(); extern undefined4 fn_001a36d4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00198130; extern undefined4 DAT_00198134; extern undefined4 DAT_008c06e8;
