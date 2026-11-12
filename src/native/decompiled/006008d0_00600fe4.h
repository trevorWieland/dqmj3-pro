#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0020bbc4(); extern int * fn_0028aad0(); extern int fn_0028be30(); extern undefined1 fn_00660e2c(); extern int fn_00660ff8(); extern int fn_00661058();
extern int fn_00661308(); extern int fn_00692568(); extern undefined1 fn_006a7a78(); extern int * fn_006b2a74(); extern uint fn_006b7d34(); extern uint fn_006b7e5c();
extern uint fn_006b7e90(); extern int * fn_006b8390(); extern int fn_006bfda8(); extern undefined4 fn_006bfdec();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897804;
