#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0013d0fc(); extern undefined4 fn_0015ebe4(); extern undefined4 fn_0030233c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00852790; extern undefined4 DAT_008527c0; extern undefined4 DAT_008528bc; extern undefined4 DAT_0085316c;
extern undefined4 DAT_00853688; extern undefined4 DAT_00853740; extern undefined4 DAT_00855a28; extern undefined4 DAT_00855a38;
