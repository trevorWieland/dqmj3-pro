#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int * fn_00104528(); extern int * fn_002feeb0(); extern undefined4 fn_003040f4(); extern undefined4 fn_0030447c(); extern undefined4 * fn_00304494();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0085aa34; extern undefined4 DAT_0085aadc; extern undefined4 DAT_0085abd0;
