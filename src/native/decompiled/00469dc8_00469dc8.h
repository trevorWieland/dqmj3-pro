#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_0015ece0(); extern undefined4 fn_0015ef58(); extern undefined4 * fn_00454d0c(); extern undefined4 fn_00455040(); extern undefined4 * fn_0045b64c(); extern undefined4 fn_00491934();
extern undefined4 * fn_004b54dc(); extern undefined4 fn_004bc1a4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00852740;
