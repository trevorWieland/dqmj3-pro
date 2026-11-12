#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00620b48(); extern undefined4 fn_0063a5a4(); extern undefined4 fn_006f447c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0017c344; extern undefined4 DAT_0017c348; extern undefined4 DAT_007e195c;
