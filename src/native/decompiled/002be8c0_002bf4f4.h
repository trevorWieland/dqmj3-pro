#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_001c9c24(); extern void fn_002be8c0(); extern undefined4 fn_002bff84(); extern undefined4 fn_002c075c(); extern int fn_002c11d0(); extern bool fn_002c18f8();
extern undefined4 fn_002c1a7c(); extern undefined4 fn_002e3e9c(); extern undefined4 fn_002ff628(); extern undefined4 fn_0068ab44(); extern int fn_006a833c();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008c7655;
