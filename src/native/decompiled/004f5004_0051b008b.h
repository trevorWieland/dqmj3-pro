#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern undefined4 fn_004ecfe0();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00857260; extern undefined4 DAT_008c0630; extern unsigned char *DAT_008c0634; extern unsigned char *DAT_008c0690;
extern undefined4 DAT_008edb26; extern undefined4 DAT_008edb2c; extern undefined4 DAT_d8a1482e; extern undefined4 DAT_e0a1482b;
