#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001f74ec(); extern undefined4 fn_002c3e78(); extern undefined4 fn_002c4694(); extern undefined4 fn_0038f910(); extern undefined4 fn_00689824(); extern undefined4 fn_00689878();
extern undefined4 fn_006899f4(); extern undefined4 fn_00689d04(); extern undefined4 fn_0068ab44(); extern bool fn_006ba220(); extern int fn_006e6814(); extern int fn_006e6820();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0082af58; extern undefined4 DAT_00891c90;
