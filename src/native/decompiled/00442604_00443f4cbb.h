#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_0013d4ec(); extern undefined4 * fn_002e6a94(); extern int fn_0066e28c(); extern undefined4 fn_006b6530(); extern undefined4 * fn_00746624(); extern undefined4 fn_0077f768();
extern undefined4 fn_0077f778();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0083dfe0; extern undefined4 DAT_0083e104; extern undefined4 DAT_00898840;
