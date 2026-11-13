#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_00150c1c(); extern undefined4 fn_0015252c(); extern uint fn_00156328(); extern int fn_001566bc(); extern undefined4 * fn_00158f40(); extern int * fn_00162118();
extern int * fn_0017d948(); extern undefined4 fn_0017deb4(); extern uint fn_00555db0(); extern undefined4 fn_0055a000(); extern undefined4 fn_0055f344(); extern undefined4 fn_0055f3c4();
extern undefined4 fn_0055f4bc(); extern int fn_006e2b3c(); extern undefined4 fn_006e2cf0(); extern undefined4 fn_006e41e4();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00807cbc; extern undefined4 DAT_00807cca; extern undefined4 DAT_00807cdc; extern undefined4 PTR_FUN_00857ef0;
