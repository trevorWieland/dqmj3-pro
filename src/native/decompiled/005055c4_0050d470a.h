#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */
extern int fn_00124e48(); extern undefined1 fn_004f2a00(); extern void fn_005059c0(); extern int fn_0050b080(); extern int fn_0051811c(); extern undefined4 fn_006d8e38();
extern int fn_006d9c3c(); extern undefined4 fn_006d9cd0(); extern int fn_006d9e60(); extern undefined4 fn_006db878(); extern undefined4 fn_006db908();

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_008bf4cc; extern undefined4 DAT_008bf4d4; extern undefined4 DAT_008bf4e0; extern undefined4 DAT_008bf4e8;
extern undefined4 DAT_008c06a0;
