#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_001008c4(); extern int fn_00100fc6(); extern int fn_00227328(); extern undefined4 fn_0022db74(); extern undefined4 fn_0022de40(); extern undefined1 fn_0025be70();
extern undefined4 fn_0028bc24(); extern int fn_006616e0(); extern bool fn_006b7b34(); extern uint fn_006b7d14();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00897804;
