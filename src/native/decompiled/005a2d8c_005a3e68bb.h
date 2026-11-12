#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_0022f584(); extern undefined4 fn_0026a494(); extern undefined4 fn_002c4100(); extern undefined4 fn_002f4624(); extern bool fn_002f5908(); extern undefined4 fn_002f829c();
extern undefined4 fn_0039536c(); extern void fn_005a3c10(); extern undefined4 fn_005a4a7c(); extern undefined4 fn_0068974c(); extern undefined1 fn_006f6a6c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_005a3ec8; extern undefined4 DAT_008977ec; extern undefined4 DAT_00897818;
