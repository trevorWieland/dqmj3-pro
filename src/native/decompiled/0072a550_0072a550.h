#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_007f2c54; extern undefined4 DAT_007f2cc8; extern undefined4 DAT_007f324b; extern undefined4 DAT_007f334c;
extern undefined4 DAT_007f344c; extern undefined4 DAT_007f354c; extern undefined4 DAT_007f35c0;
