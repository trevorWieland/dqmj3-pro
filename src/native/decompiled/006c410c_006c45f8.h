#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00000001; extern undefined4 DAT_006c427c; extern undefined4 DAT_006c4280; extern undefined4 DAT_006c461c;
extern undefined4 DAT_006c4620;
