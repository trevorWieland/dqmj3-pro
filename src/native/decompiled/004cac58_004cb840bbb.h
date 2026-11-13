#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 * fn_004caec4(); extern undefined4 fn_004d45ec(); extern undefined1 * fn_004d46b0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008560c8; extern undefined4 DAT_008560f0; extern undefined4 DAT_e0a14827;
