#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined2 fn_00191218(); extern undefined2 fn_00191228(); extern undefined4 fn_001968e4(); extern uint fn_0019bc24(); extern uint fn_0019f67c(); extern undefined4 fn_0019f9ac();
extern undefined4 fn_001a0b34(); extern undefined4 fn_001a0b50(); extern int fn_001a2394();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008977cc; extern undefined4 DAT_008977d4;
