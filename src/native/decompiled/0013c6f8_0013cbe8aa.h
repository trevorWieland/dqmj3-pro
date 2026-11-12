#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0012d6a4(); extern undefined4 fn_0013c51c(); extern undefined4 fn_0013c568(); extern int fn_0014e650();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008bfbad; extern undefined4 DAT_008bfbb4; extern undefined4 DAT_008bfbbc; extern undefined4 DAT_008ebd1c;
extern undefined4 DAT_008ebd3c; extern undefined4 DAT_008ebd5c;
