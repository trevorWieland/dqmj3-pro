#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001249d0(); extern undefined4 fn_0014ea80(); extern undefined4 * fn_0015ece0(); extern undefined4 fn_0045fc0c(); extern undefined4 fn_0047edec(); extern undefined4 fn_006d0810();
extern undefined4 fn_007669a4(); extern undefined4 fn_007858d0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007d9e30; extern undefined4 DAT_007dba44; extern undefined4 DAT_008528bc; extern undefined4 DAT_008b6389;
