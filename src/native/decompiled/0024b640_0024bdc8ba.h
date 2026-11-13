#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00183718(); extern undefined4 fn_00232f80(); extern undefined4 fn_0024b640(); extern undefined4 fn_0024bdc8(); extern int fn_00261d04(); extern undefined4 fn_002625d0();
extern undefined4 fn_00692e98(); extern undefined4 fn_006b6d3c(); extern int fn_006b6e94(); extern undefined4 fn_006ba7d4(); extern undefined4 fn_0079c770();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_0024bbb4; extern undefined4 DAT_00896f34; extern undefined4 DAT_008cd570;
