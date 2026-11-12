#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0014f1bc(); extern undefined4 * fn_0015ece0(); extern undefined4 fn_0030233c(); extern undefined4 fn_00481c70(); extern int fn_0049647c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008540d0; extern undefined4 DAT_008547f8; extern undefined4 DAT_008550b4; extern undefined4 DAT_00855318;
