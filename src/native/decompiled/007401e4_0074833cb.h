#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001f7e04(); extern undefined4 fn_0022f750(); extern undefined4 fn_002c3e78(); extern undefined4 fn_002c4100(); extern undefined4 fn_002feef8(); extern undefined4 fn_0031b554();
extern undefined4 fn_0031b78c(); extern undefined4 fn_00689878(); extern undefined4 fn_006899f4(); extern undefined4 fn_0068ab44(); extern int fn_006ba274(); extern undefined4 fn_006ba284();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0089657c; extern undefined4 DAT_008bfad8;
