#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0014481c(); extern undefined4 fn_001ccb7c(); extern int fn_00261f54(); extern undefined4 fn_00263780(); extern undefined4 fn_002efb24(); extern undefined4 fn_002f09a4();
extern int fn_003c922c(); extern undefined4 fn_00525bd0(); extern undefined1 fn_006f7fec(); extern undefined4 fn_006f8240(); extern undefined4 fn_006f9b80();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00896ca8; extern undefined4 DAT_008977e8;
