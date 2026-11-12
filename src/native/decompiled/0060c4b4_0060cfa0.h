#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00101a1c(); extern undefined4 fn_0016947c(); extern undefined4 fn_0017fe34(); extern float fn_001a4a80(); extern int fn_0020b2bc(); extern int fn_0023e194();
extern undefined4 fn_002d7624(); extern bool fn_003d2850(); extern int fn_003d2878(); extern int fn_003d2888(); extern undefined4 fn_003d28a0(); extern void fn_0060cc78();
extern int fn_006c61c4(); extern undefined4 fn_006c6a38(); extern undefined4 fn_006f7388(); extern undefined4 fn_006f9b80();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005f4c78; extern undefined4 DAT_007c3418; extern undefined4 DAT_008977e0;
