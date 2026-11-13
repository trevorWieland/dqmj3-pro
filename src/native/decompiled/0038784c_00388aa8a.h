#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0022f584(); extern undefined4 fn_0036c5f4(); extern undefined4 fn_00689bd0(); extern undefined4 fn_0068f818(); extern undefined4 fn_006f9f20();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0038837c; extern undefined4 DAT_0089289c; extern undefined4 DAT_008928a0; extern undefined4 DAT_00895b24;
